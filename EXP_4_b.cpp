//Piyush Pawar  
//24070123145
//B3

#include <iostream>
using namespace std;

int main() 
{
    int a = 145;
    int bit_set, bit_reset, bit_setting, bit_resetting;
    // Setting the 3rd bit (counting from 0)

    cout << "Enter the bit which need to be set: ";
    cin >> bit_set;
    cout << "Enter the bit which need to be reset: ";
    cin >> bit_reset; 
    bit_setting = a | (1 << bit_set);
    bit_resetting = a & ~(1 << bit_reset);
    cout << "After setting bit " << bit_set << ": " << bit_setting << "\n";
    cout << "After resetting bit " << bit_reset << ": " << bit_resetting << "\n";
    
    return 0;
}