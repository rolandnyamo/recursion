// .author: Roland Nyuamoga
// .description: reusable menu
// .usage: enter the program name and number of options.

#ifndef MENU_HPP
#define MENU_HPP
#include <iostream>
#include <cstring>

// defines an option and its number
struct Option
{
    int number;
    std::string name;
};

class Menu
{
private:
    int choice;
    int numOptions;
    std::string programName;
    Option *options;

public:
    Menu(std::string, int);
    static int getInt();
    static bool checkInt(std::string);
    static char getChar();
    static bool checkChar(char);
    int validate();
    void setOptions(int, std::string);
    void setInteractiveOptions();
    int displayOptions();
    ~Menu();
};

#endif
