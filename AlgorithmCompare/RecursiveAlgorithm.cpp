/* 
 * File:   RecursiveAlgorithm.cpp
 * Author: vandorallen
 * 
 * Created on 23 janvier 2016, 15:41
 */

#include "RecursiveAlgorithm.hpp"
#include "Algorithm.hpp"
using namespace std;

/**
 * @brief Contructor
 */
RecursiveAlgorithm::RecursiveAlgorithm() {
}

/**
 * @brief Copy Constructor (not implemented, not needed)
 * @param orig
 */
RecursiveAlgorithm::RecursiveAlgorithm(const RecursiveAlgorithm& orig) {
}

/**
 * @brief Destructor
 */
RecursiveAlgorithm::~RecursiveAlgorithm() {
}

/**
 * @brief Calculate the max sum between two indexes of the tab
 * @return this maximum
 */
int RecursiveAlgorithm::MaxSomme(){
    int max = calcul3(0, tab.size()-1);
    cout << "MaxSomme: " << max << endl;
    
    return max;
}

/**
 * 
 * @param begin
 * @param end
 * @return 
 */
int RecursiveAlgorithm::calcul3(int begin, int end){
    //Error case
    if (begin > end){
        return 0;
    }
    
    //Same beginning & ending cell
    if (begin == end){
        if (tab[begin]>0){
            return tab[begin];
        } else {
            return 0;
        }
    }
    
    int med = abs((begin+end)/2);
    int amax(0);
    int somme(0);
    int i = med;
    
    while(i >= begin){
        //Sum calculation from the beginning to the middle
        somme += tab[i];
        //We keep the max sum
        amax = max(amax, somme);
        i --;
    }
    
    int bmax(0);
    somme = 0;
    i = med + 1;
    
    //Sum calculation from the middle to the end
    while (i <= end){
        somme += tab[i];
        bmax = max(bmax, somme);
        i++;
    }
    
    return max3(amax+bmax, calcul3(begin, med), calcul3(med+1, end));    
}
