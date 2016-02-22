/* 
 * File:   main.cpp
 * Author: E104607D
 *
 * Created on 13 janvier 2016, 09:48
 */

#include <cstdlib>
#include <chrono>
#include <vector>
#include "PairAlgorithm.hpp"
#include "PairAlgorithm2.hpp"
#include "RecursiveAlgorithm.hpp"
#include "QuickAlgorithm.hpp"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //compteur
    Algorithm* a;
    int sz;
    if (argc == 3) {
        cout << "Algorithm: " << argv[1] << endl;
        cout << "Taille des données : " << argv[2] << endl;
        sz = stoi(argv[2]);
        switch (stoi(argv[1])){
            case 1:
                cout << "Algorithme 1"<< endl;
                a = new PairAlgorithm();
                break;
                
            case 2:
                cout << "Algorithme 2"<< endl;
                a = new  PairAlgorithm2();
                break;
                
            case 3:
                cout << "Algorithme 3"<< endl;
                a = new RecursiveAlgorithm();
                break;
            
            case 4:
                cout << "Algorithme 4"<< endl;
                a = new QuickAlgorithm();
                break;
                
            default:
                a = new  PairAlgorithm();
        }       
    } else {
        a = new  PairAlgorithm();
        a -> generate(5000);
        
    }
    vector<int> durations;
    for (int i = 0; i < 10; ++i) {
        a -> generate(sz);
        auto begin = std::chrono::high_resolution_clock::now();
        a -> MaxSomme();        
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
        cout << "t:" << duration.count() << endl;
        durations.push_back(duration.count());
    }    
    
    int xTime;
    for (auto time : durations) {
        xTime += time;
    }
    
    cout << "Temps moyen sur 10 executions: " <<  (xTime / 10) << "ms" << endl;
    
    return 0;
}

