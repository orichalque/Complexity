/* 
 * File:   main.cpp
 * Author: E104607D
 *
 * Created on 13 janvier 2016, 09:48
 */

#include <cstdlib>
#include <chrono>
#include "PairAlgorithm.hpp"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //compteur
    auto begin = std::chrono::high_resolution_clock::now();

   
    PairAlgorithm a;
    a.generate(3500);
    a.MaxSomme();
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end-begin).count() << "ms" << std::endl;
    return 0;
}

