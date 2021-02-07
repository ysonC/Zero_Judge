#include<iostream>
#include<cstdlib>

using namespace std;

int main ()
{
     int i, a, n;

    cout << "Enter a number: ";

    cin >> a;

    for (i = 2; i <= a * 2; i++)
    {
        if (a % i == 0)
        {
            while (a % i == 0)
            {
                a/= i;
                n++;
            }
            cout << i << " ";
        }
    }

}