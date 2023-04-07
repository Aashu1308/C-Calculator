/**
 * @file main.cpp
 * @author Aashutosh Indusekhar (RA221003020393)
 * @brief
 * @version 0.1
 * @date 2023-04-07
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
/**
 * @brief for parameterised manipulators
 *
 */
#include <iomanip>
#include "calculator.hpp"
#include "scientific.hpp"

using namespace std;

int main()
{
    /**
     * @brief initialise simple calculator and scientific objects
     *
     */
    Calculator calc;
    Scientific sci;
    /**
     * @brief assign calculator pointer with pointer to simple calculator object
     * will be used for polymorphism
     *
     */
    Calculator *calcptr = &calc;
    /**
     * @brief switch to flip between scientifc and normal
     *
     */
    bool sciActive = 0;
    cout << "Welcome to my Calculator App\n\n"
         << "This calculator has 2 modes, normal and scientific.\n"
         << "You can change it using the 'change' keyword.\n\n"
         << "This app has 2 other special keywords, result and mem.\n"
         << "result stores the result of the previous calculation.\n"
         << "mem allows you to store and access a number.\n"
         << "Both can be used instead of numbers during calculations.\n"
         << "They are both local to the mode you are using.\n";
    /**
     * @brief welcome message for simple calculator
     *  -> (arrow) operator is used to access public members of class using pointer variable
     *
     */
    calcptr->welcome();
    /**
     * @brief set precision for all uses of cout
     * here we set precision to 15 places
     * accessed using iomanip header
     *
     */
    cout << setprecision(15);
    string input = "";
    /**
     * @brief loop and take input
     *
     */
    while (cin >> input && input != "exit")
    {
        /**
         * @brief flips calcptr to either simple calculator or scientific
         *
         */
        if (input == "change")
        {
            if (sciActive)
            {
                calcptr = &calc;
                sciActive = 0;
                cout << endl
                     << "Simple Calculator activated";
            }
            else
            {
                calcptr = &sci;
                sciActive = 1;
                cout << endl
                     << "Scientific Calculator activated";
            }
        }
        /**
         * @brief calls virtual functions from base class pointer
         * function executed based on type of object
         *
         */
        calcptr->parseOperation(input);
        calcptr->welcome();
    }
    return 0;
}