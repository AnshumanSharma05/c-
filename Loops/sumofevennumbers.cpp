#include<iostream>
using namespace std;
int main(){
	int sum=0;
	int i=2;
	int n;
	cout<<"please enter the number till which you wnat to find the sum";
	cin>>n;
	while(i<n){
		sum+=i;
		cout<<i<<" "<<"sum is "<<sum<<endl;
		i+=2;
	}
	return 0;
}