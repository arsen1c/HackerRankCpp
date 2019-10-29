// problem link- https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
#include <iostream>
using namespace std;

/************************************************************************************************************************
TASK (FOR LOOP):

You will be given two positive integers,a and b (a <= b), separated by a newline.

OUTPUT FORMAT:
For each integer  in the interval  :

If (1 <= n <= 9), then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if (n > 9) and it is an even number, then print "even".
Else if  (n > 9)and it is an odd number, then print "odd".

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Sample Input
.
8
11

Sample Output
.
eight
nine
even
odd


***************************************************************************************************************************/

// my solution

void solution()
{
	int a, b;
	cout << "Enter a and b:\n>";
	cin >> a >> b;
	
	for(a; a <= b; a++)
	{
		std::string srr[9] = {"one","two", "three", "four","five", "six", "seven","eight", "nine"};
		if(a <= 9) // including 9
		{
			cout << srr[a - 1] << endl; 
		}
		else if(a > 9)
		{
			if(a % 2 == 0)
				cout << "Even\n" ;
			else
				cout << "odd\n";
		}
		
	}
}


int main()
{
	solution();
}
