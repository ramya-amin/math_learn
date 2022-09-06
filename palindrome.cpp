#include <iostream>
#include <limits.h>
using namespace std;

bool checkPalindrom(int x)
{
	bool isPalindrom=false;
	
	int temp=x, reverse{0};
	
	while(x>0)
	{
	reverse = reverse*10 + x%10;
	x = x/10;
	}
    
    if(temp==reverse)
        isPalindrom=true;
        
	return isPalindrom;
}

int main() {
    
    	int number;
    	cin>>number;
    	
    	cout<<checkPalindrom(number);
    	
    	return 0;
}
