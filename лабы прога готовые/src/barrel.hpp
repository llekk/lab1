#ifndef BARREL_HPP
#define BARREL_HPP

#include <iostream>
#include <algorithm>


class Barrel{
    private:
        double full_value;
        double concentration;
    public:
        Barrel();
        Barrel(double value, double conc);
        ~Barrel(){};

        double get_concentration();
        double get_value();
        void transferTo(Barrel &other, double amount);

};

#endif