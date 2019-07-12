#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the number";
	int number;
	cin>>number;
	int last_digit;
	int sum=0;
	while(number>0){
		last_digit=number%10;
		sum+=last_digit;
		number=number/10;
	}
	cout<<"sum is"<<sum;

	return 0;
}