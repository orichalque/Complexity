/* 
 * File:   main.cpp
 * Author: E104607D
 *
 * Created on 13 janvier 2016, 09:48
 */

#include <cstdlib>
#include <chrono>
#include "PairAlgorithm.hpp"
#include "PairAlgorithm2.hpp"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //compteur
    auto begin = std::chrono::high_resolution_clock::now();
    Algorithm* a;
    if (argc == 3) {
        cout << "Algorithm: " << argv[1] << endl;
        cout << "Taille des données : " << argv[2] << endl;
        switch (stoi(argv[1])){
            case 1:
                cout << "Algorithme 1"<< endl;
                a = new PairAlgorithm();
                a -> generate(stoi(argv[2]));
                break;
                
            case 2:
                cout << "Algorithme 2"<< endl;
                a = new  PairAlgorithm2();
                a -> generate(stoi(argv[2]));
                break;
                
            case 3:
                //algo3
                break;
            
            case 4:
                //algo4
                break;
                
            default:
                a = new  PairAlgorithm();
                a -> generate(stoi(argv[2]));
        }       
    } else {
        a = new  PairAlgorithm();
        a -> generate(5000);
    }

    a -> MaxSomme();

    
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(end-begin).count() << "ms" << std::endl;
    return 0;
}

