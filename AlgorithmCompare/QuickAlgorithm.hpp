/* 
 * File:   QuickAlgorithm.hpp
 * Author: E104607D
 *
 * Created on 27 janvier 2016, 11:20
 */

#ifndef QUICKALGORITHM_HPP
#define	QUICKALGORITHM_HPP
#include "Algorithm.hpp"
class QuickAlgorithm : public Algorithm {
public:
    QuickAlgorithm();
    QuickAlgorithm(const QuickAlgorithm& orig);
    virtual ~QuickAlgorithm();
    int MaxSomme();
private:

};

#endif	/* QUICKALGORITHM_HPP */

