#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number you want to check for prime";
	cin>>n;
	int i=2;
	while(i<=n-1){
		if(n%i==0){
			cout<<"Number is not prime"<<endl;
			break;
		}
		i=i+1;
		}
		if(i==n){
			cout<<"number is prime"<<endl;
		}
		
		return 0;
	}
	
