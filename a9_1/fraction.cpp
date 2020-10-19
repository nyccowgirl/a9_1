/*
 Trang Hoang
 CS110B
 Dave Harden
 10/27/20
 fraction.cpp
 
 Assignment 9.1
 
 Modify program from Assignment 8.1 to include default and parameterized constructors,
 simplify() function and 3 separate files, including implementation and specification files.
 Add documentation and const where appropriate.
 
 Created by nyccowgirl on 10/27/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
*/

#include <iostream>
#include <cassert>
#include "fraction.hpp"
using namespace std;


/*
 
 Class Invariant: a Fraction object has 2 int data members: numerator, which stores the
 numerator, and denominator, which stores the denominator that cannot be 0. However, no
 effort is made to prevent the client from providing an invalid fraction.
    
*/


Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}






Fraction::Fraction(int inNum, int inDenom) {
    assert(inDenom != 0);
    numerator = inNum;
    denominator = inDenom;
    simplify();
}






Fraction Fraction::addedTo(const Fraction &frac) const {
    int sum;
    Fraction temp;
    
    sum = (numerator * frac.denominator) + (frac.numerator * denominator);
    temp = Fraction(sum, (denominator * frac.denominator));
    temp.simplify();
    return temp;
}






Fraction Fraction::subtract(const Fraction &frac) const {
    int diff;
    Fraction temp;
    
    diff = (numerator * frac.denominator) - (frac.numerator * denominator);
    temp = Fraction(diff, (denominator * frac.denominator));
    temp.simplify();
    return temp;
}






Fraction Fraction::multipliedBy(const Fraction &frac) const {
    Fraction temp;
    
    temp = Fraction((numerator * frac.numerator), (denominator * frac.denominator));
    temp.simplify();
    return temp;
}






Fraction Fraction::dividedBy(const Fraction &frac) const {
    Fraction temp;
    
    temp = Fraction((numerator * frac.denominator), (denominator * frac.numerator));
    temp.simplify();
    return temp;
}






bool Fraction::isEqualTo(const Fraction &frac) const {
    return ((numerator * frac.denominator) == (denominator * frac.numerator));
}






void Fraction::print() const {
    cout << numerator << "/" << denominator;
}






// This private member function reduces, and replaces numerator and denominator for
// simplified fraction

void Fraction::simplify() {
    int max;
    bool neg = false;
    
    // To address negative or zero fractions
    if (numerator < 0) {
        neg = !neg;
        numerator *= -1;
    } else if (numerator == 0) {
        denominator = 1;
    }
    
    if (denominator < 0) {
        neg = !neg;
        denominator *= -1;
    }
    
    // To reduce by common divisors
    if (numerator < denominator) {
        max = numerator;
    } else if (denominator < numerator) {
        max = denominator;
    } else {
        numerator = denominator = max = 1;
    }
    
    for (int i = max; i > 1; i--) {
        if ((numerator % i == 0) && (denominator % i == 0)) {
            numerator /= i;
            denominator /= i;
        }
    }
    
    // To put back as negative, if initial fraction was net negative
    if (neg) {
        numerator *= -1;
    }
}

