/* 
 * File:   PairAlgorithm2.cpp
 * Author: E104607D
 * 
 * Created on 13 janvier 2016, 11:46
 */

#include <vector>

#include "PairAlgorithm2.hpp"
using namespace std;

/**
 * @brief Empty Constructor
 */
PairAlgorithm2::PairAlgorithm2() {
}

/**
 * @brief Copy Constructor
 * @param orig
 */
PairAlgorithm2::PairAlgorithm2(const PairAlgorithm2& orig) {
}

/**
 * @brief Destructor
 */
PairAlgorithm2::~PairAlgorithm2() {
}

/**
 * @brief Calculate the SOMME tab for the 2nd algorithm
 * For each cell of tab, calculate the sum from the first cell to the current one
 * @return SOMME, vector containing the sum from the first cell for each tab's cell
 */
vector<int> PairAlgorithm2::calculateSommeTab(){
    vector<int> somme;
    
    for (int i = 0; i < tab.size(); ++i){
        somme.push_back(sumIndex(0, i));        
    }
    
    return somme;
}

/**
 * @brief Calculate the best sum between indexes of a randomly chosen tab
 * Calculate all the sums from the 1st cell to each cell of the tab
 * For each possible pair, substract the 2nd sum (from the previous state) to the first one, and keep the best
 * @return 
 */
int PairAlgorithm2::MaxSomme() {
    vector<indexPair> pairs;
    pairs = getAllPositionsPairs();
    vector<int> sommes = calculateSommeTab();
    indexPair maxPair;
    int max = NAN;
    int current(0);
    for (auto i : pairs){
        if (i.first == 0){
            current = sommes[i.second];            
        } else {
            current = sommes[i.second] - sommes[i.first -1];            
        }
        
        if((max == NAN)||(current > max)){
            maxPair.first = i.first;
            maxPair.second = i.second;
            max = current;
        }                
    }
    cout << "MaxValue :" << max << endl;
    cout << "Début: " << maxPair.first << " Fin: " << maxPair.second << endl;
    return max;
}
