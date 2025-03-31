#include <iostream>
#include "barrel.hpp"
#include <algorithm>
Barrel::Barrel(): full_value(), concentration(){};
Barrel::Barrel( double val, double conc) : full_value(val), concentration(conc){};

double Barrel::get_concentration(){
    return concentration;
}
double Barrel::get_value(){
    return full_value;
}
void Barrel::transferTo(Barrel &other, double amount = 1){
    double alco_transf = amount * (other.concentration / 100.0); // кол-во спирта которое переливаем;
    double totalVol = full_value + amount; // новый объем
    concentration = (full_value * concentration + alco_transf * 100) / totalVol; // пересчитываем концентрацию
    full_value = totalVol; // обновляем объем
    other.full_value -= amount; // вычитаем объем, который перелили
    other.concentration = (other.full_value * other.concentration - alco_transf * 100) / other.full_value; // пересчитываем концентрацию в бочке из которой перелили
}