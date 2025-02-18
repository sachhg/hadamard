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

    Qubit qubH = qub.applyHadamard();

    cout << "Result of Hadamard Gate applied to your qubit: ";

    cout << endl;

    qubH.printVector();

    cout << endl;


    return 0;

}
