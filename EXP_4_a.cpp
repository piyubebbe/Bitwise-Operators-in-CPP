//Piyush Pawar  
//24070123145
//B3

#include <iostream>
using namespace std;

int main() 
{ 
    int a = 10, b = 14; //a = 1010, b = 1110 in binary
    int A = a & b; // Bitwise AND operation
    int B = a | b; // Bitwise OR operation    
    int C = a ^ b; // Bitwise XOR operation
    int nA = ~a; // Bitwise NOT operation
    int nB = ~b; // Bitwise NOT operation
    int sA = a << 1; // Left shift operation
    int sB = b << 1; 
    int rA = a >> 1; // Right shift operation 
    int rB = b >> 1; 

    cout << "a = " << a << ", b = " << b << "\n";
    cout << "Bitwise AND of a and b : " << A << "\n";
    cout << "Bitwise OR of a and b : " << B << "\n";
    cout << "Bitwise XOR of a and b : " << C << "\n";   
    cout << "Bitwise NOT of a : " << nA << "\n";
    cout << "Bitwise NOT of b : " << nB << "\n";
    cout << "Left shift of a : " << sA << "\n";
    cout << "Left shift of b : " << sB << "\n";
    cout << "Right shift of a : " << rA << "\n";
    cout << "Right shift of b : " << rB << "\n";

    return 0; 
}