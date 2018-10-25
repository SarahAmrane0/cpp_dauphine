// Put here the declarations of discount_factor and print_discount_factor

#ifndef DISCOUNT_FACTOR_HPP // Inclusion Guard
#define DISCOUNT_FACTOR_HPP
#include <iostream>
#include <cmath>
#include <vector>
// discount_factor.hpp
    double discount_factor(double rate, double maturity);
    std::vector<double> discount_factor(const std::vector<double> r, const std::vector<double> m);
    void print_discount_factor(double rate, double maturity);


inline double discount_factor(double rate, double maturity)
    {
        double res = std::exp(-rate * maturity);
        return res;
    }
#endif // DISCOUNT_FACTOR_HPP