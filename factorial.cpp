// find factorial of a given number using recursion 

#include <iostream>
#include <limits.h>
using namespace std;

int fact(int n)
{
	if(n==0)
	   return 1;
		
	return n * fact(n-1);
}
int main() {
    
    	int number;
      cin>>number;
    	
    	cout<<fact(number);
    	
    	return 0;
}
