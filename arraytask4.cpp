//Q.4) WAP to find highest and lowest element in an array.



#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter array number :";
	cin>>n;
	
	int arr[n];
	int high=arr[0];
	int low =arr[0];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		if(arr[i]>high){
			high=arr[i];
		}
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]<low){
			low=arr[i];
		}
	}
	
	cout<<high;
	cout<<low;
	
	
}
