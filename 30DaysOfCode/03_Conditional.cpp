#include <iostream>
using namespace std;



/*
If  is odd, print Weird
If  is even and in the inclusive range of 2-5 to , print Not Weird
If  is even and in the inclusive range of  to 6-20 , print Weird
If  is even and greater than 20, print Not Weird
*/


int main()
{
	int N;
	cin >> N;
	 //cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
	if(N % 2 != 0)
		cout << "Weird\n";
	else if(N % 2 == 0)
	{
		if(N >= 2 && N <= 5)
			cout << "Not Weird\n";
		else if(N >= 6 && N <= 20)
			cout << "Weird\n";
		else
			cout << "Not Weird\n";
	}
	else
		cout << "Please enter an integer value\n";

}
