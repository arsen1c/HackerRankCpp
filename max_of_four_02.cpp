// EXAMPLE!

#include <iostream>
using namespace std;

/*int max_of_four(int a, int b, int c, int d)
{
	if(a > b && a > c && a > d)
        	return  a;
    	else if(b > a && b > c && b > d)
        	return  b;
    	else if(c > a && c > b && c > d)
        	return  c;
    	else if(d > b && d > c && d > a)
        	return d;
    	else
    		return 0;
}*/

// YE THI AAM ZINDAGI.

int max_of_four(int a, int v, int c, int d)
{
	return max(max(a, v), max(c, d));
}// YE THI MENTOS ZINDAGI beech!


int main()
{
	int ans = max_of_four(10, 20, 30, 40);
	std::cout << ans << std::endl;
}
