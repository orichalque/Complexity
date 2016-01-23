/* 
 * File:   RecursiveAlgorithm.hpp
 * Author: vandorallen
 *
 * Created on 23 janvier 2016, 15:41
 */

#ifndef RECURSIVEALGORITHM_HPP
#define	RECURSIVEALGORITHM_HPP
#include "Algorithm.hpp"
class RecursiveAlgorithm : public Algorithm {
public:
    RecursiveAlgorithm();
    RecursiveAlgorithm(const RecursiveAlgorithm& orig);
    virtual ~RecursiveAlgorithm();
    int MaxSomme();
    int calcul3(int begin, int end);
private:

};

#endif	/* RECURSIVEALGORITHM_HPP */

