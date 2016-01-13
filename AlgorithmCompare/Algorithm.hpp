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
#include <map>
#include <iostream>

struct indexPair {
    int first;
    int second;
};

class Algorithm {
public:
    Algorithm();
    Algorithm(const Algorithm& orig);    
    virtual ~Algorithm();
    virtual int MaxSomme();
    void generate(int n); //Generate a tab with n integers from -100 to 100
    std::vector<indexPair> getAllPositionsPairs(); //Generate all pairs of positions
    int sumIndex(int begin, int end); //calculate sum from begin to end index
private:
    std::vector<int> tab;
    
};

#endif	/* ALGORITHM_HPP */

