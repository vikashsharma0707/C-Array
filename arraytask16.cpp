//Q.4) Given an array of size n-1 such that it only contains distinct integers in the range of 1 to n. display the missing element.
//Examples:
//Input: n = 5, arr[] = {1,2,3,5} Output: 4
//Input: n = 2, arr[] = {1} Output: 2
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the array numbers :";
	cin>>n;

	
	int arr[n];
     
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
		for(int i=0;i<n-1;i++){
		 if( arr[i]==arr[n-1]){
		 	cout<<arr[i];
		 }
	}
	cout<<endl;
	
			
	}
	


