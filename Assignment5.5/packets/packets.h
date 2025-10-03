#ifndef PACKETS_H
#define PACKETS_H
#include<cstdint>

#include"../vector3d.h"

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

class packet3d{

    private:
        packet xyz[3];
    public:
        packet3d(vector3d num);
        packet3d(uint8_t* num);
        packet3d(char* num);
        vector3d vect();
        void send();
        static vector3d receive();

};
#endif
