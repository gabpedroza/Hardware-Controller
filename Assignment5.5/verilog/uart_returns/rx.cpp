#include"rx.h"

rx_cpp::rx_cpp(int baud){
    this->T = clock_freq/baud;
    this->state = WAIT_PULL_DOWN;
}
void rx_cpp::eval(){
    static int previous_clock = 0;
    if(rst == 0){
        avail = 0;
        data = 0;
        count = 0;
        bits = 0;
        state = WAIT_PULL_DOWN;
    }
    else if(clock == 1 && previous_clock == 0){
        switch (state)
        {
        case WAIT_PULL_DOWN:
            if(rx == 0){
                state = WAIT_START_SAMPLE;
                avail = 0;
                data = 0;
            }else{
                state = WAIT_PULL_DOWN;
                avail = 1;
            }
            count = 0;
            bits = 0;

            break;
        case WAIT_START_SAMPLE:
            if(count < T/2){
                state = WAIT_START_SAMPLE;
                ++count;
            }else{
                state = SAMPLE_START;
                count = 0;
            }
            bits = 0;
            avail = 0;
            data = 0;
            break;
        case SAMPLE_START:
            if(rx == 0){
                state = WAIT_BEFORE_BIT;
            }else{
                state = WAIT_PULL_DOWN;
            }
            bits = 0;
            avail = 0;
            count = 0;
            data = 0;
            break;
        case WAIT_BEFORE_BIT:
            if(count < T){
                state = WAIT_BEFORE_BIT;
                ++count;
            }else{
                state = SAMPLE_BIT;
                count = 0;
            }
            avail = 0;
            break;
        case SAMPLE_BIT:
            data |= (rx<<bits);
            ++bits;
            if(bits < 8){
                state = WAIT_BEFORE_BIT;
            }else{
                state = WAIT_AFTER_BITS;
            }
            count = 0;
            avail = 0;
            break;
        case WAIT_AFTER_BITS:
            if(count < T){
                state = WAIT_AFTER_BITS;
                ++count;
            }else{
                state = SAMPLE_STOP;
                count = 0;
            }
            avail = 0;
            bits = 0;
            break;
        case SAMPLE_STOP:
            if(rx == 0){
                state = WAIT_PULL_DOWN;
                avail = 0;
            }else{
                state = WAIT_SUCCESS;
                avail = 1;
            }
            bits = 0;
            count = 0;
            break;
        case WAIT_SUCCESS:
            if(count < T/2){
                state = WAIT_SUCCESS;
            }else{
                state = WAIT_PULL_DOWN;
            }
            avail = 1;
            bits = 0;
            break;
        default:
            break;
        }
    }
    previous_clock = clock;
}
