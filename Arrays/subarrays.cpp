#include<iostream>
using namespace std;
int main(){
	int no;
	cout<<"enter the size of the array"<<endl;
	cin>>no;
	int arr[1000];
	cout<<"enter the elements of the array"<<endl;;
	for(int i=0;i<no;i++){
		cin>>arr[i];
	}
	cout<<"the subarrays are : "<<endl;
	for(int i=0;i<no;i++){
		for(int j=i+1;j<no;j++){
			for (int k=i;k<j;k++){
				cout<<arr[k]<<" , ";
			}
		}
	}
	int n;

}