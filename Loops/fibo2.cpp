#include<iostream>
using namespace std;
int main(){
	int n,p;
	cout<<"enter the number till which you wnat to find the fibonacci series";
	cin>>n;
	cout<<"enter the numer to check if the number is a part of this series or not";
	cin>>p;
	

	int a=0;
	int b=1;
	int c=a+b;
	int i=2;
	while(i<n){
		
		a=b;
		b=c;
		c=a+b;
		
		if(c==p){
			cout<<"yes it is a part of this series";
			
		}
		if(c!=p){
			cout<<"no ";
			continue;
		}

		
		i++;

	}
	
	return 0;
}


