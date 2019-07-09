#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"please enter the numbers you want to sum";
	cin>>n;
	int i=1;
	int no;
	int sum=0;
	while(i<=n){
		cin>>no;

		// 5

		sum+=no;
		i+=1;
	}
	cout<<"sum is "<<sum<<endl;
	float avg=0;
	avg=float(sum)/n;
	cout<<"avg is "<<avg<<endl;

	return 0;
}