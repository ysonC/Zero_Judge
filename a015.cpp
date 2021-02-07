#include <iostream>

using namespace std;

int main()
{
    int number[5] = {0, 1, 2, 3, 4};
    int length = sizeof(number) / sizeof(number[0]);

    for(int i = 0; i < length; i++) {
        cout << number[i] << " "; 
    }
    cout << endl; 

    return 0; 
}