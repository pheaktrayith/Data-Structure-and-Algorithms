#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a,b,c,max=0;
	cout << "Input a: "; cin >> a;
	cout << "Input b: "; cin >> b;
	cout << "Input c: "; cin >> c;
	
	if(a>b && a>c) max=a;
	else if(b>c) max=b;
	else max=c;
	
	cout << "maximum : " << max;
	
	return 0;
}