/* 
 * File:   PairAlgorithm.hpp
 * Author: E104607D
 *
 * Created on 13 janvier 2016, 10:01
 */

#ifndef PAIRALGORITHM_HPP
#define	PAIRALGORITHM_HPP
#include "Algorithm.hpp"
class PairAlgorithm : public Algorithm {
public:
    PairAlgorithm();
    PairAlgorithm(const PairAlgorithm& orig);
    virtual ~PairAlgorithm();
    int MaxSomme();
private:

};

#endif	/* PAIRALGORITHM_HPP */

