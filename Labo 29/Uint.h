//
// Created by bdela on 14/12/2021.
//

#ifndef LABO_29_UINT_H
#define LABO_29_UINT_H

#include <cstdint>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <limits>
#include <random>
#include <functional>

class Uint {
    friend bool operator<(const Uint &lhs, const Uint &rhs);

    friend bool operator==(const Uint &lhs, const Uint &rhs);

    friend bool operator!=(const Uint &lhs, const Uint &rhs);

    friend bool operator>(const Uint &lhs, const Uint &rhs);

    friend bool operator>=(const Uint &lhs, const Uint &rhs);

    friend bool operator<=(const Uint &lhs, const Uint &rhs);

    friend Uint operator+(Uint lhs, const Uint &rhs);

    friend Uint operator-(Uint lhs, const Uint &rhs);

    friend Uint operator*(Uint lhs, const Uint &rhs);

    friend Uint operator*(Uint lhs, const int scalaire);

    friend Uint operator/(Uint &lhs, const Uint &rhs);

    friend Uint operator%(Uint lhs, const Uint &rhs);

    friend std::ostream &operator<<(std::ostream &lhs, const Uint &rhs);

public:
    /**
     *
     * @param number
     */
    Uint(uint64_t number);

    /**
     *
     * @param number
     */
    Uint(std::string number);

    Uint(void);

    Uint operator/(int rhs) const;

    Uint &operator++();

    Uint operator++(int);

    Uint &operator+=(const Uint &number);

    Uint &operator-=(const Uint &number);

    Uint &operator*=(const Uint &rhs);

    Uint& operator=(const int rhs);

    Uint& operator=(const std::string rhs);

    Uint& operator/=(int rhs);

    Uint& operator/=(const Uint &rhs);

    Uint& operator%=(Uint rhs);

    size_t getSize();

    static int comp(Uint u1, Uint u2);

    static Uint rand(int nbDigits);


private:

    std::vector<uint64_t> vectorNumber;

    Uint expMod(const Uint &dividende, const Uint &divisieur, Uint& reste);

    void refactor();

};

#endif //LABO_29_UINT_H
