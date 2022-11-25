#include <iostream>
#include <unistd.h>
using namespace std;
int numbers = 0;
int e = 0;
int number = 0;
int main() {
    cout << "On numbers greater than 2^30, things glitch, try the python version" << "\n";
    cout << "What is your number? ";
    cin >> number;
    while (e == 0){
        if (number % 2 == 0){
            number = number / 2;
            numbers += 1;
            usleep(100000);
            cout << number << "\n";
        }
        else{
            number = number * 3 + 1;
            numbers += 1;
            usleep(100000);
            cout << number << "\n";
            }
        if (number == 1){
            cout << "It took you " << numbers << " numbers to get into the 4, 2, 1 loop" << "\n";
            break;
        }
    }
    }
