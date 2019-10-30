// Link= https://www.hackerrank.com/challenges/arrays-introduction/problem

// NOTE- DO check Doubt Section.

// REFRENCE MATERIAL- http://www.cplusplus.com/forum/beginner/177555/ . ALSO- Solo Learn for array size and stuff.	
// https://stackoverflow.com/questions/40254409/cout-an-array-on-1-line-in-c

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    /*
    1. get array size and set the arry size and decalre an array of input size.
    2. get elements from the user and add them up in the array.
    3. reverse the array.
    4. print the array in a single line.
    */

    int arraySize;
    cin >> arraySize;
    int myArray[arraySize];

    for(int x = 1; x <= sizeof(myArray)/ sizeof(int); x++)
    {
        int input;
        cin >> input;
        myArray[x] = {input};
    }

    // revers:
    for(int i = sizeof(myArray)/sizeof(int); i >= 1; i-- )
    {
        cout << myArray[i] << " ";
    }
}



/*
CORRECT ONE(copied)

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int a[n];
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    
    return 0;
}

*/
