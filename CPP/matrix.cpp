#include<iostream>
using namespace std;
int main()
{
    int matrix2d[2][3] = { 
    { 2,3,4},
    {5,6,7} 
    };
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        { 
            cout<<"the value of "<<i<<","<<j<<"is "<<matrix2d[i][j]<<endl;

        }
        return 0;
    }