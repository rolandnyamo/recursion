//
//  main.cpp
//  recursion
//
//  Created by Roland Nyamoga on 5/2/19.
//

#include "recursion.hpp"
#include "menu.hpp"
#include <iostream>
#include <cstdio>

int main() {
    int choice = -1;

    // char c = Menu::getChar();
    // std::cout << c;


    Menu menu1("\nRecursive Functions\n", 4);

    menu1.setOptions(1, "Print my string in reverse");
    menu1.setOptions(2, "Calculate Int array sum");
    menu1.setOptions(3, "Calculate a triangular number");
    menu1.setOptions(4, "Quit");

    choice = menu1.displayOptions();

    while(choice != 4){

        //reverse string:
        if (choice == 1) {
            std::string usrInput;
            std::cout << "Enter the string: ";

            std::getline(std::cin, usrInput);

            std::cout << "\n";
            Recursion::strReverse(usrInput); 
            std::cout << "\n\n";
            choice = menu1.displayOptions();
        }    

        else if (choice == 2) {
            int * ptr_arr = NULL;
            int arr_size;
            std::cout << "Enter the array size: ";

            arr_size = Menu::getInt();

                while(arr_size < 1 || arr_size > 1000){
                    std::cout << "Enter a valid size: ";
                    arr_size = Menu::getInt();
                }
            ptr_arr = new int [arr_size];

            std::cout << "\nGreat! Now let's fill up the array.\n\n";

            for(int i = 0; i < arr_size; i++)
            {
                std::cout << "Index " << i << ": ";
                int index_i = Menu::getInt();

                while(index_i < 1 || index_i > 1000){
                    std::cout << "Index " << i << ": ";
                    index_i = Menu::getInt();
                }
                
                ptr_arr[i] = index_i;
            }
           
           
            std::cout << "\n";

            std::cout << Recursion::arraySum(ptr_arr, arr_size);

            //.deallocate memory
            delete [] ptr_arr;
            std::cout << "\n\n";
            choice = menu1.displayOptions();
        }  
        else if (choice == 3) {
            std::cout << "Enter int N for which the "
            << "Triangular number needs to be found: ";

            int n = Menu::getInt();

            while(n < 1 || n > 1000){
                std::cout << "The number must 1 - 1000\n\n";
                std::cout << "Enter int N for which the "
                << "Triangular number needs to be found: ";
                n = Menu::getInt();
            }

            std::cout << "\n";
            std::cout << Recursion::triangular(n);

            std::cout << "\n\n";
            choice = menu1.displayOptions(); 
        }  
    }
    
    std::cout << "\nGoodbye!\n\n";
    
}
