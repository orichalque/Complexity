/* 
 * File:   PairAlgorithm.cpp
 * Author: E104607D
 * 
 * Created on 13 janvier 2016, 10:01
 */

#include "PairAlgorithm.hpp"
using namespace std;
/**
 * @brief Constructor
 */
PairAlgorithm::PairAlgorithm() {
}

/**
 * @brief Copy Constructor
 * @param orig
 */
PairAlgorithm::PairAlgorithm(const PairAlgorithm& orig) {
}

/**
 * @brief destructor
 */
PairAlgorithm::~PairAlgorithm() {
}

/**
 * @brief Generate all possible positions pair and for each pair, return the best sum of the values between the 2 indexes
 * @return int, the max sum
 */
int PairAlgorithm::MaxSomme() {
    //generating all pairs
    vector<indexPair> pairs = getAllPositionsPairs();
    indexPair maxPair;
    int maxValue = NAN;
    int currValue;
    //for all pairs we calculate the sum & getting the maximum
    for (auto i : pairs) {
        currValue = sumIndex(i.first, i.second);
        if (maxValue == NAN || maxValue<currValue) {
            maxPair.first = i.first;
            maxPair.second = i.second;
            maxValue = currValue;
        }
    }
    cout << "MaxValue :" << maxValue << endl;
    cout << "Début: " << maxPair.first << " Fin: " << maxPair.second << endl;
}
