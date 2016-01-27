/* 
 * File:   QuickAlgorithm.cpp
 * Author: E104607D
 * 
 * Created on 27 janvier 2016, 11:20
 */

#include "QuickAlgorithm.hpp"
#include "Algorithm.hpp"
using namespace std;
QuickAlgorithm::QuickAlgorithm() {
}

QuickAlgorithm::QuickAlgorithm(const QuickAlgorithm& orig) {
}

QuickAlgorithm::~QuickAlgorithm() {
}

int QuickAlgorithm::MaxSomme(){
    int a(0);
    int b(0);
    int i(0);
    while (i < tab.size()){
        b = max(b+tab[i], 0);
        a = max(a, b);
        ++i;        
    }
    cout << "Max Somme: " << a << endl; 
    return a;
}