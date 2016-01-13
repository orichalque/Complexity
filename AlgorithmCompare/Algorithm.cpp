/* 
 * File:   Algorithm.cpp
 * Author: E104607D
 * 
 * Created on 13 janvier 2016, 09:49
 */

#include "Algorithm.hpp"
using namespace std;

/**
 * @brief Constructor
 */
Algorithm::Algorithm() {
}

/**
 * @brief Copy Constructor
 * @param orig
 */
Algorithm::Algorithm(const Algorithm& orig) {
}

/**
 * @brief Destructor
 */
Algorithm::~Algorithm() {
}

/**
 * @brief Generate n random values from -100 to 100 in the tab parameter
 * Will clear the tab if not empty
 * @param n, number of values
 */
void Algorithm::generate(int n) {
    if (! tab.empty()) {
        tab.clear();
    }
    // Seed with a real random value, if available
    std::random_device rd;
 
    // Choose a random mean between -100 and 100
    std::default_random_engine e1(rd());
    std::uniform_int_distribution<int> uniform_dist(-100, 100);
    for (int i = 0; i < n; ++i) {
        tab.push_back(uniform_dist(e1));
    }
    for (auto i : tab){
        cout << "val:" << i << endl;
    }
}

/**
 * @brief Calculate the MaxSomme between 2 chosen indexes
 * @return int value : The max sum
 */
int Algorithm::MaxSomme() {
    
    return 0;
}

/**
 * @brief Calculate all the pair of indexes possibles
 * @return a vector containing all couples
 */
vector<indexPair> Algorithm::getAllPositionsPairs() {
    int tabSize = tab.size() - 1;
    int currentIndex(0);
    indexPair ip;
    vector<indexPair> indexPairV; //Vector containing all pairs of indexes
    while (currentIndex != tabSize) {                
        for (int i = currentIndex +1; i < tabSize ; ++i) {            
            ip.first = currentIndex;
            ip.second = i;
            indexPairV.push_back(ip);            
        }
        currentIndex ++;
    }    
    for (auto i : indexPairV) {
        cout << i.first << " ";
        cout << i.second << endl;
    }
    
    return indexPairV;
}

/**
 * @brief calculate value between begin and end (included)
 * @param begin
 * @param end
 * @return the value
 * precondition: begin < end
 */
int Algorithm::sumIndex(int begin, int end) {
    if (begin == end) {
        return tab[end];
    } else {
        return tab[begin] + sumIndex(begin + 1, end);
    }
}
