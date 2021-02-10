#include <iostream>

using namespace std;
//2 3 
//                  3 8
//3 1 2    ==>      1 5
//8 5 4             2 4
int main()
{
    int a, b;
    cin >> a >> b; // rows ;  column
    int maze[a][b];

    if (a > 100 || b > 100)
        return 1;

    for(int row = 0; row < a; row++) 
    {
        for(int i = 0; i < b; i++) 
        {
            cin >> maze[row][i];
        }
    }

    for(int row = 0; row < b; row++) 
    {
        for(int i = 0; i < a; i++) 
        {
            cout << maze[i][row] << " "; 
        }
        cout << endl; 
    } 

     
}