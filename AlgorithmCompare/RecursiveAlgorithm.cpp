/* 
 * File:   RecursiveAlgorithm.cpp
 * Author: vandorallen
 * 
 * Created on 23 janvier 2016, 15:41
 */

#include "RecursiveAlgorithm.hpp"
#include "Algorithm.hpp"

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
    return calcul3(0, tab.size()-1);
}

/**
 * 
 * @param begin
 * @param end
 * @return 
 */
int RecursiveAlgorithm::calcul3(int begin, int end){
    
    if (begin > end){
        return 0;
    }
    
    if (begin == end){
        if (tab[begin]>0){
            return tab[begin];
        } else {
            return 0;
        }
    }
    
    
    
}
