
//Q.2) WAP to find highest and second highest element in an array.

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter ther array element :";
	cin>>n;
	
	int arr[n];
	
	int high=arr[0];
	int shigh=arr[0];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		if(arr[i]>high){
			high=arr[i];
		}
		
	}
	
	cout<<endl;
	for(int i=0;i<n;i++){
		if(arr[i]>shigh && arr[i]<high){
			shigh=arr[i];
		}
		
	}
	
	
	cout<<high<<endl;
	cout<<shigh;
	
	
}

