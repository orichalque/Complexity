/* 
 * File:   PairAlgorithm2.hpp
 * Author: E104607D
 *
 * Created on 13 janvier 2016, 11:46
 */

#ifndef PAIRALGORITHM2_HPP
#define	PAIRALGORITHM2_HPP

#include "Algorithm.hpp"


class PairAlgorithm2 : public Algorithm{
public:
    PairAlgorithm2();
    PairAlgorithm2(const PairAlgorithm2& orig);
    virtual ~PairAlgorithm2();
    int MaxSomme();
    std::vector<int> calculateSommeTab();
private:

};

#endif	/* PAIRALGORITHM2_HPP */

