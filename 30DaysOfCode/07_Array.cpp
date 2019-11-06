// Link- https://www.hackerrank.com/challenges/30-arrays/problem
#include <iostream>
using namespace std;

int arrSize;
int n;
int ar[1000];

int main()
{
    cin >> arrSize;
    for(int x =0; x <  arrSize; x++)
    {
        cin >> n; 
        ar[x] += n;
    }

    for(int i = arrSize - 1; i >= 0; i--)
    {
        cout << ar[i] << " ";
    }
}
