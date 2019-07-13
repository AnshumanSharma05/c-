#include<iostream>
using namespace std;
int main(){
	int arr[5]={6,34,5,8,9};
	int key;
	int i=0;
	cout<<"enter the key you want to search";
	cin>>key;
	for(;i<=4;i++){
		if(arr[i]==key){
			cout<<"yes the key is there at position"<<i<<endl;
			break;
		}
		}
		if(i==5){
			cout<<"No such eleemtn founf";
		}

	}
