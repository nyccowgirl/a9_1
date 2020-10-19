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
//#include <cmath>
#include "fraction.hpp"
using namespace std;


/*
 
 Class Invariant: a Fraction object has 2 int data members: numerator, which stores the
 numerator, and denominator, which stores the denominator that cannot be 0. However, no
 effort is made to prevent the client from providing an invalid or negative fractions.
    
*/


Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}






Fraction::Fraction(int inNum, int inDenom) {
//    Fraction temp;
    
    numerator = inNum;
    denominator = inDenom;
//    simplify();
}






Fraction Fraction::addedTo(const Fraction &frac) const {
    int sum;
    Fraction temp;
    
    sum = (numerator * frac.denominator) + (frac.numerator * denominator);
    temp = Fraction(sum, (denominator * frac.denominator));
//    temp.simplify();
    return temp;
}






Fraction Fraction::subtract(const Fraction &frac) const {
    int diff;
    Fraction temp;
    
    diff = (numerator * frac.denominator) - (frac.numerator * denominator);
    temp = Fraction(diff, (denominator * frac.denominator));
//    temp.simplify();
    return temp;
}






Fraction Fraction::multipliedBy(const Fraction &frac) const {
    Fraction temp;
    
    temp = Fraction((numerator * frac.numerator), (denominator * frac.denominator));
//    temp.simplify();
    return temp;
}






Fraction Fraction::dividedBy(const Fraction &frac) const {
    Fraction temp;
    
    temp = Fraction((numerator * frac.denominator), (denominator * frac.numerator));
//    temp.simplify();
    return temp;
}






bool Fraction::isEqualTo(const Fraction &frac) const {
    return ((numerator * frac.denominator) == (denominator * frac.numerator));
}






void Fraction::print() const {
    cout << numerator << "/" << denominator;
}






// This private member function reduces, and returns by reference, the parameter "frac". It
// assumes the parameter is a non-negative fraction.

//void Fraction::simplify() {
    // to code

//int exponent, cd;
//
//if (numerator % 2 == 0 && denominator % 2 == 0) {
//    numerator /= 2;
//    denominator /= 2;
//    exponent++;
//} else if (numerator % 2 == 0) {
//    numerator /= 2;
//} else if (denominator % 2 == 0) {
//    denominator /= 2;
//} else {
//    if (numerator < denominator) {
//        numerator = (denominator - numerator) / 2;
//    } else if (numerator > denominator) {
//        denominator = (numerator - denominator) / 2;
//    } else {
//        cd = pow(2, exponent) * numerator;
//    }
//}
//
//numerator /= cd;
//denominator /= cd;

//    for (int i = denominator * numerator; i > 1; i--) {
//                   if ((denominator % i == 0) && (numerator % i == 0)) {
//               denominator /= i;
//                   numerator /= i;
//           }


//void fraction::reduce()
//    for(int i = numer * denom; i > 1; i--)
//    {
//        if((numer % i) == 0 && (denom % i) == 0)
//        {
//            numer = numer / i;
//            denom = denom / i;
//        }
//    }
//}

