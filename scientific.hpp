/**
 * @file scientific.hpp
 * @author Aashutosh Indusekhar(RA2211003020393)
 * @brief
 * @version 0.1
 * @date 2023-04-07
 *
 * @copyright Copyright (c) 2023
 *
 */
#ifndef SCIENTIFIC_HPP
#define SCIENTIFIC_HPP

#include <string>
#include <array>
#include <cmath>
#include "calculator.hpp"

class Scientific : public Calculator
{
public:
    /**
     * @brief Construct a new Scientific object
     *
     */
    Scientific();
    virtual ~Scientific(){};
    virtual void welcome() const;
    virtual void parseOperation(const std::string &);
    /**
     * @brief
     * extra scientific functions not in calculator
     *
     */
    void sin();
    void cos();
    void tan();
    void sinh();
    void cosh();
    void log();
    void ln();
    void abs();
    void pow();
};

#endif