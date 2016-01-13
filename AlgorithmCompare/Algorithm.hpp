/* 
 * File:   Algorithm.hpp
 * Author: E104607D
 *
 * Created on 13 janvier 2016, 09:49
 */

#ifndef ALGORITHM_HPP
#define	ALGORITHM_HPP
#include <vector>
#include <random>
#include <cmath>
#include <iostream>

class Algorithm {
public:
    Algorithm();
    Algorithm(const Algorithm& orig);    
    virtual ~Algorithm();
    virtual int MaxSomme();
    void generate(int n); //Generate a tab with n integers from -100 to 100
private:
    std::vector<int> tab;
    
};

#endif	/* ALGORITHM_HPP */

