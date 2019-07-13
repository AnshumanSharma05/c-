#include<iostream>
using namespace std;
int main(){
	int x=34;
	cout<<&x<<endl;;
	int *aptr=&x;
	int ** xxptr=&aptr;
	cout<<aptr<<endl;
	cout<<*(aptr)<<endl;
	cout<<&aptr<<endl;
	cout<<xxptr<<endl;
	cout<<*(xxptr)<<endl;
}