#ifndef PACKETS_H
#define PACKETS_H
#include<cstdint>

class packet{

    private:
        double repr_double;
        uint8_t* repr_fixed32;
    public:
        packet(double num);
        packet(uint8_t* num);
        packet(char* num);
        packet();
        static uint8_t* convert(double num);
        static double convert(uint8_t* num);
        uint8_t* fixed();
        double doub();
        void send();
        static double receive();
        
};
#endif
