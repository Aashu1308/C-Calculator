/**
 * @file calculator.cpp
 * @author Aashutosh Indusekhar(RA2211003020393)
 * @brief
 * @version 0.1
 * @date 2023-04-07
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <iostream>
#include "calculator.hpp"

// constructor called to initialise data members as 0, doubles
/**
 * @brief Construct a new Calculator:: Calculator object
 *
 */
Calculator::Calculator() : result(0.0), mem(0.0){};

void Calculator::add()
{
    std::string a, b;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    result = parseInput(a) + parseInput(b);
    std::cout << "The result is: " << result;
}

void Calculator::subtract()
{
    std::string a, b;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    result = parseInput(a) - parseInput(b);
    std::cout << "The result is: " << result;
}

void Calculator::multiply()
{
    std::string a, b;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    result = parseInput(a) * parseInput(b);
    std::cout << "The result is: " << result;
}

void Calculator::divide()
{
    std::string a, b;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    result = parseInput(a) / parseInput(b);
    std::cout << "The result is: " << result;
}

void Calculator::square()
{
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    double parsedA = parseInput(a);
    result = parsedA * parsedA;
    std::cout << "The result is: " << result;
}

void Calculator::sqrt()
{
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    result = std::sqrt(parseInput(a));
    std::cout << "The result is: " << result;
}

void Calculator::setMem()
{
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    mem = parseInput(a);
    std::cout << "The mem is: " << mem;
}

void Calculator::printMem() const
{
    std::cout << "The mem is: " << mem;
}

/**
 * @brief
 *
 * @param input
 * @return double
 */
double Calculator::parseInput(const std::string &input) const
{
    if (input == "result")
    {
        return result;
    }
    else if (input == "memory")
    {
        return mem;
    }
    else
    { /**
       * @brief
       *
       * stod is used to convert string to double
       */
        return std::stod(input);
    }
}

void Calculator::welcome() const
{
    std::cout << "\n\nEnter an operation (+,-,*,/,square,square root,setmem,printmem) or exit\n";
}

/**
 * @brief
 *
 * @param input
 */
void Calculator::parseOperation(const std::string &input)
{
    if (input == "+" || input == "add" || input == "sum" || input == "addition")
    {
        add();
    }
    else if (input == "-" || input == "sub" || input == "minus" || input == "subtraction")
    {
        subtract();
    }
    else if (input == "*" || input == "mul" || input == "product" || input == "multiply")
    {
        multiply();
    }
    else if (input == "/" || input == "div" || input == "divide")
    {
        divide();
    }
    else if (input == "square")
    {
        square();
    }
    else if (input == "square root")
    {
        sqrt();
    }
    else if (input == "setmem")
    {
        setMem();
    }
    else if (input == "printmem")
    {
        printMem();
    }
};