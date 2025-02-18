#include <iostream>
#include <cmath>

#include "qubit.h"


using namespace std;


int main(){

    double alpha;
    double beta;

    cout << "Enter alpha value: ";

    cin >> alpha;

    cout << "Enter beta value: ";

    cin >> beta;

    Qubit qub(alpha, beta);

    if (!(qub.verifyQubit())){

        cout << "Invalid Qubit, " << alpha << "^2 + " << beta << "^2 = " << (pow(alpha, 2) + pow(beta, 2)) << endl;
        return 0;

    }

    Qubit qubH = qub.applyHadamard();

    cout << "Result of Hadamard Gate applied to your qubit: ";

    cout << endl;

    qubH.printVector();

    cout << endl;


    return 0;

}
