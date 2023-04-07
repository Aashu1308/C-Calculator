/**
 * @file scientific.cpp
 * @author Aashutosh Indusekhar(RA2211003020393)
 * @brief
 * @version 0.1
 * @date 2023-04-07
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include "scientific.hpp"

/**
 * @brief Construct a new Scientific:: Scientific object
 * Calling default calculator constructor inside scientific constructor
 *
 */
Scientific::Scientific() : Calculator(){};

void Scientific::welcome() const
{
    std::cout << "\n\nEnter an operation (+,-,*,/,square,square root,sin,cos,tan,sinh,cosh,log,ln,absolute,power,setmem,printmem) or exit\n";
}

void Scientific::sin()
{
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    result = std::sin(parseInput(a));
    std::cout << "The result is: " << result;
}

void Scientific::cos()
{
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    result = std::cos(parseInput(a));
    std::cout << "The result is: " << result;
}

void Scientific::tan()
{
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    result = std::tan(parseInput(a));
    std::cout << "The result is: " << result;
}

void Scientific::sinh()
{
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    result = std::sinh(parseInput(a));
    std::cout << "The result is: " << result;
}

void Scientific::cosh()
{
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    result = std::cosh(parseInput(a));
    std::cout << "The result is: " << result;
}

void Scientific::log()
{
    std::string a, b;
    std::cout << "Enter base number: ";
    std::cin >> a;
    std::cout << "Enter number: ";
    std::cin >> b;
    result = std::log(parseInput(b)) / std::log(parseInput(a));
    std::cout << "The result is: " << result;
}

void Scientific::ln()
{
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    result = std::log(parseInput(a));
    std::cout << "The result is: " << result;
}

void Scientific::abs()
{
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    result = std::abs(parseInput(a));
    std::cout << "The result is: " << result;
}

void Scientific::pow()
{
    std::string a, b;
    std::cout << "Enter base number: ";
    std::cin >> a;
    std::cout << "Enter exponent: ";
    std::cin >> b;
    result = std::pow(parseInput(a), parseInput(b));
    std::cout << "The result is: " << result;
}

/**
 * @brief
 *
 * @param input
 */
void Scientific::parseOperation(const std::string &input)
{
    /**
     * @brief Construct a new Calculator::parse Operation object
     * reuse code for simple calculator inputs
     *
     */
    Calculator::parseOperation(input);

    if (input == "sin")
    {
        sin();
    }
    else if (input == "cos")
    {
        cos();
    }
    else if (input == "tan")
    {
        tan();
    }
    else if (input == "sinh" || input == "hyperbolic sin")
    {
        sinh();
    }
    else if (input == "cosh" || input == "hyperbolic cos")
    {
        cosh();
    }
    else if (input == "log" || input == "logarithm")
    {
        log();
    }
    else if (input == "ln" || input == "natural log")
    {
        ln();
    }
    else if (input == "abs" || input == "absolute")
    {
        abs();
    }
    else if (input == "pow" || input == "power")
    {
        pow();
    }
}