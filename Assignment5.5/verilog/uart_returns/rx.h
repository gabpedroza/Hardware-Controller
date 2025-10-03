#ifndef RX_CPP_H
#define RX_CPP_H
const int clock_freq = 20000000;
enum State{
    WAIT_PULL_DOWN,
    WAIT_START_SAMPLE,
    SAMPLE_START,
    WAIT_BEFORE_BIT,
    WAIT_AFTER_BITS,
    SAMPLE_BIT,
    SAMPLE_STOP,
    WAIT_SUCCESS
};
class rx_cpp{
    public:
        bool rx;
        bool avail;
        int data;
        bool clock;
        bool rst;
        rx_cpp(int baud);
        void eval();
    private:
        State state;
        int count;
        int T;
        int bits;

};
#endif