/* 
 * File:   main.cpp
 * Author: E104607D
 *
 * Created on 13 janvier 2016, 09:48
 */

#include <cstdlib>

#include "PairAlgorithm.hpp"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    PairAlgorithm a;
    a.generate(5);
    //a.getAllPositionsPairs();
    
    cout << "somme:" << a.sumIndex(0, 4);
    return 0;
}

