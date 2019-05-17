//.author: Roland Nyamoga
//.date: May 4, 2019
//.description: Implementation file for the recusion functions class

#include "recursion.hpp"
#include <cstring>
#include <iostream>
#include <string>

Recursion::Recursion()
{
    //nothing yet
}

//.this function prints a string in reverse.
//.input: string
void Recursion::strReverse(std::string c)
{
    std::string new_string;
    try
    {
        //.get the last character of the string:
        char back = c[c.size() - 1];
        if (!(c.size() == 1)) {

            std::cout << back;

            //adapted from:
            //https://stackoverflow.com/questions/2310939/
            //remove-last-character-from-c-string
            new_string = c.substr(0, c.size()-1);
            strReverse(new_string);
        }
        else
        {
            std::cout << back;
            std::cout << "\n\n";
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "\nOops.. something bad happened!\n";
    }
    
}

//.this function calculates the sum of all ints in an array
//.input: array pointer, int array size.
//.output: sum of all the ints in the array
int Recursion::arraySum(int *a, int s)
{   
    if (s == 0) {
        return 0;
    }
    else
    {
        return a[s - 1] + arraySum(a, s - 1);
    }
}

//.this function calculates the triangular number of a number n
//.input: n, an integer.
//.output: triangular number

int Recursion::triangular(int n)
{   
    if (n != 1) {
        return n + triangular(n - 1);
    }
    else
    {
        return 1;
    } 
}

Recursion::~Recursion()
{
    //pass
}