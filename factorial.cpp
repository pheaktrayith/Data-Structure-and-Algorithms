#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,f=1,sum=0;
	cout << "Input n : "; cin >> n;
			//	for loop
//	for(int i=1; i<=n; i++)
//	{
//		f=f*i;
//		sum = sum+f;	
//	}
			//	while loop
//	int i=1;
//	while(i<=n)
//	{
//		f=f*i;
//		sum = sum+f;
//		i++;
//	}
			//	do while loop
//	int i=1;
//	do{
//		f=f*i;
//		sum = sum+f;
//		i++;
//	}while(i<=n);

			//	label loop
	int i=1;
again:
	f=f*i;
	sum = sum+f;
	i++;
	if(i<=n) goto again;
	
	cout << sum;
	
	return 0;
}