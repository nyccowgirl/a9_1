/*
 Trang Hoang
 CS110B
 Dave Harden
 10/27/20
 fraction.hpp
 
 Assignment 9.1
 
 Modify program from Assignment 8.1 to include default and parameterized constructors,
 simplify() function and 3 separate files, including implementation and specification files.
 Add documentation and const where appropriate.
 
 Created by nyccowgirl on 10/27/20.
 Copyright © 2020 nyccowgirl. All rights reserved.
*/

#ifndef fraction_hpp
#define fraction_hpp


/*

 The Fraction class can be used to create objects that store a fraction, including numerator
 and denominator. The following functions are available:

 Fraction();
  post: The calling object has been created and initialized to 0/1.

 Fraction(int inNum, int inDenom);
  post: The calling object has been created and initialized so that the numerator is inNum,
        and the denominator is inDenom. If inDenom is 0, program is aborted.
 
 Fraction addedTo(Fraction &frac);
  post: Returns the Fraction determined by adding the calling object with the paramenter "frac".
 
 Fraction subtract(Fraction &frac);
  post: Returns the Fraction determined by subtracting the parameter "frac" from the
        calling object.
 
 Fraction multipliedBy(Fraction &frac);
  post: Returns the Fraction determined by multiplying the calling object by the parameter
        "frac".
 
 Fraction dividedBy(Fraction &frac);
  post: Returns the Fraction determined by dividing the calling object by the parameter
        "frac".
 
 bool isEqualTo(Fraction &frac);
  post: Returns true if the calling object is equal to the parameter "frac". Otherwise,
        returns false.

 void print() const;
  post: The calling object has been printed to the console window in the format N/D.
         
*/


class Fraction
{
    public:
        Fraction();
        Fraction(int inNum, int inDenom);
        Fraction addedTo(const Fraction &frac) const;
        Fraction subtract(const Fraction &frac) const;
        Fraction multipliedBy(const Fraction &frac) const;
        Fraction dividedBy(const Fraction &frac) const;
        bool isEqualTo(const Fraction &frac) const;
        void print() const;
    
    private:
        int numerator;
        int denominator;
        void simplify();
};

#endif /* fraction_hpp */


/*
 
 The result starts off at 0/1
 The product of 9/8 and 2/3 is 3/4
 The quotient of 9/8 and 2/3 is 27/16
 The sum of 9/8 and 2/3 is 43/24
 The difference of 9/8 and 2/3 is 11/24
 The two Fractions are not equal.
 The product of 3/2 and 2/3 is 1/1
 Program ended with exit code: 0
 
 Testing out simplify() with f3(-12, 8):
 
 The result starts off at 0/1
 The product of 9/8 and 2/3 is 3/4
 The quotient of 9/8 and 2/3 is 27/16
 The sum of 9/8 and 2/3 is 43/24
 The difference of 9/8 and 2/3 is 11/24
 The two Fractions are not equal.
 The product of -3/2 and 2/3 is -1/1
 Program ended with exit code: 0
 
 Testing out simplify() with f3(12, -8):
 
 The result starts off at 0/1
 The product of 9/8 and 2/3 is 3/4
 The quotient of 9/8 and 2/3 is 27/16
 The sum of 9/8 and 2/3 is 43/24
 The difference of 9/8 and 2/3 is 11/24
 The two Fractions are not equal.
 The product of -3/2 and 2/3 is -1/1
 Program ended with exit code: 0
 
 Testing out simplify() with f3(-12, -8):
 
 The result starts off at 0/1
 The product of 9/8 and 2/3 is 3/4
 The quotient of 9/8 and 2/3 is 27/16
 The sum of 9/8 and 2/3 is 43/24
 The difference of 9/8 and 2/3 is 11/24
 The two Fractions are not equal.
 The product of 3/2 and 2/3 is 1/1
 Program ended with exit code: 0
 
 */
