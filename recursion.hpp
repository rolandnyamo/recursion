//.author: Roland Nyamoga
//.date: May 4, 2019
//.description: Header file for the recusion functions class

#ifndef RECURSION_HPP
#define RECURSION_HPP
#include <string>

class Recursion {

    private:
        static const int start = 1;
        static int prev;
        static int sum;
        static int actual;
        
    public:
        Recursion();
        static void strReverse(std::string);
        static int arraySum(int *, int);
        static int triangular(int);
        ~Recursion();
};

#endif
