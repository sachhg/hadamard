Hadamard Qubit Simulator

Overview

This repository contains a simple C++ program that applies the Hadamard gate to a valid qubit. The Hadamard gate is a fundamental quantum operation that creates superposition by transforming a qubit from one basis state to an equal superposition of both basis states.

Features

Qubit Representation: Uses a class Qubit to represent qubits in the form .

Validation: Ensures that the input values satisfy the condition  before applying the Hadamard transformation.

Hadamard Gate Implementation: Computes the new qubit state using the Hadamard matrix:



Output Visualization: Displays the original and transformed qubit in both mathematical notation and vector form.

Files

main.cpp - Handles user input, applies the Hadamard gate, and outputs the result.

qubit.h - Defines the Qubit class with necessary functions.

qubit.cpp - Implements the Qubit class methods, including qubit validation and Hadamard gate application.

Compilation & Execution

Compile the program

 g++ -o hadamard main.cpp qubit.cpp

Run the program

 ./hadamard

Example Usage

Enter alpha value: 0.70710678118
Enter beta value: 0.70710678118
Result of Hadamard Gate applied to your qubit:
(1, 0)

How It Works

The user inputs values for alpha and beta.

The program verifies whether  to ensure a valid qubit.

If valid, it applies the Hadamard transformation:





The transformed qubit is printed as a vector.

Notes

This implementation uses a floating-point precision tolerance () to handle numerical errors when validating the qubit.

pow() was initially used but was replaced with direct multiplication where possible for better numerical stability.
