#include "qubit.h"

#include <iostream>
#include <cmath>

using namespace std;


Qubit::Qubit(){

    alpha = 0.00;
    beta = 0.00;

}

Qubit::Qubit(long double alpha, long double beta){

    this->alpha = alpha;
    this->beta = beta;

}

bool Qubit::verifyQubit() const {

    long double roomForError = 1e-9;

    long double sqSum = pow(alpha, 2) + pow(beta, 2);

    return (abs(sqSum - 1.00)) < roomForError;

}


void Qubit::printQubit(){

    if (alpha == 1.00 && beta == 0.00){ 
        
        cout << "|0>";
        return;

    }

    if (alpha == 0.00 && beta == 1.00){

        cout << "|1>";
        return;

    }

    // alpha|0> + beta|1>
    cout << alpha << "*|0> + " << beta << "*|1>";
    return;

}


void Qubit::printVector(){

    cout << "(" << alpha << ", " << beta << ")";
    return;

}

void Qubit::setAlpha(long double a){

    alpha = a;

}

void Qubit::setBeta(long double b){

    beta = b;

}

void Qubit::setAB(long double a, long double b){

    alpha = a;
    beta = b;

}


Qubit Qubit::applyHadamard(){

       
    long double newAlpha = (1.00/(pow(2, 0.5)))*(alpha + beta);

    //cout << "DEBUG: New Alpha: " << newAlpha << endl;

    long double newBeta = (1.00/(pow(2, 0.5)))*(alpha - beta);

    //cout << "DEBUG: New Beta: " << newBeta << endl;


    Qubit result(newAlpha, newBeta);

    return result;   

}
