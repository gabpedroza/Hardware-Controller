#include"packets.h"
#include"../third_party/include/serial/serial.h"
#include<cmath>
#include<chrono>
#include"thread"
serial::Serial my_serial("/dev/ttyUSB1", 115200, serial::Timeout::simpleTimeout(1));
uint8_t* packet::convert(double num){
    if(num == 0) num = 0;
    else if(std::isinf(num)) num = (num > 0?1e7:-1e7);
    else if(std::isnan(num)) num = 0;
    int32_t* temp = new int32_t((int32_t)(num*256));
    uint8_t* ans = reinterpret_cast<uint8_t*>(temp);
    return ans;
}
double packet::convert(uint8_t* num){
    return (*reinterpret_cast<int32_t*>(num))/((double)256);
}
packet::packet(double num){
    this->repr_double = num;
    this->repr_fixed32 = packet::convert(num);
}
packet::packet(uint8_t* num){
    this->repr_fixed32 = num;
    this->repr_double = packet::convert(num);
}
uint8_t* packet::fixed(){
    return this->repr_fixed32;
}
double packet::doub(){
    return this->repr_double;
}
packet::packet(char* num){
    this->repr_fixed32 = reinterpret_cast<uint8_t*>(num);
    this->repr_double = packet::convert(reinterpret_cast<uint8_t*>(num));
}
packet::packet(){
    packet(0.0);
}
void packet::send(){
    my_serial.write(this->fixed(), 4);
}
double packet::receive(){
    int counter = 0;
    while(my_serial.available() < 4 && counter < 50){
        std::this_thread::sleep_for(std::chrono::milliseconds(1)), ++counter;}
    if(my_serial.available() < 4){fprintf(stderr, "oof\n"); return 0.0;}
    uint8_t temp[4]; my_serial.read(temp, 4);
    return(packet(temp).doub());
}
