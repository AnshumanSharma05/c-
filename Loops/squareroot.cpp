#include<iostream>
using namespace std;
int main(){
	int number,precision;
	cout<<"please enter the number whose square root you want to find"<<endl;
	cin>>number;
	cout<<"please enter the precison upto which you want to find the sqroot"<<endl;
	cin>>precision;
	float ans=0;
	float inc=1;
	int times=0;
	while(times<=precision){
	while(ans*ans<=number){
		ans+=inc;
	}
	ans-=inc;
	inc=inc/10;
	times+=1;

}

	cout<<"the sq root is "<<ans<<endl;
	return 0;

}