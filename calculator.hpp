/**
 * @file calculator.hpp
 * @author Aashutosh Indusekhar (RA2211003020393)
 * @brief
 * @version 0.1
 * @date 2023-04-07
 *
 *
 */

/**
 * @brief double declaration
 *
 */
#ifndef CALCULATOR_HPP
/**
 * @brief starts definiton of header file
 *
 */
#define CALCULATOR_HPP
#include <string>
#include <array>
#include <cmath>

class Calculator
{

public:
    /**
     * @brief Construct a new Calculator object
     *
     */
    Calculator();
    /**
     * @brief Destroy the Calculator object
     * default destructor, but not user defined
     */
    virtual ~Calculator(){};
    void add();
    void subtract();
    void multiply();
    void divide();
    void square();
    void sqrt();
    /**
     * @brief function to set memory
     *
     */
    void setMem();
    /**
     * @brief function to get memory
     * constant ensures that it doesnt affect object
     *
     */
    void printMem() const;
    /**
     * @brief parses string input or memory entered
     *
     * @return * double
     */
    double parseInput(const std::string &) const;
    /**
     * @brief  provides data on user options
     * to be overloaded
     */
    virtual void welcome() const;
    /**
     * @brief  parses input to determine which operation is to be called
     *
     */
    virtual void parseOperation(const std::string &);

    /**
     * @brief  protected so derived class can access
     *
     */
protected:
    /**
     * @brief stores result
     *
     */
    double result;
    /**
     * @brief stores memory
     *
     */
    double mem;
};

/**
 * @brief  ends the ifndef
 *
 */
#endif