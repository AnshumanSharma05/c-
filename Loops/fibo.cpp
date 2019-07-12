#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number till which you wnat to find the fibonacci series";
	cin>>n;
	cout<<"0,1,";
	int a=0;
	int b=1;
	int c=a+b;
	int i=2;
	while(i<n){
		cout<<c<<",";
		a=b;
		b=c;
		c=a+b;
		i++;

	}

	return 0;
}