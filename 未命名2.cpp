#include <iostream>
using namespace std;

int main()
{
	unsigned char a=0xA5;
	unsigned char b=~a>>4+1;
	//cout << b;
	
	printf("b=%d\n",b);
	return 0;
} 
