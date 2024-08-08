//Q.2 Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//Note that you must do this in-place without making a copy of the array.
// Example 1:
//Input: nums = [0,1,0,3,12] Output: [1,3,12,0,0]
//Example 2:
//Input: nums = [0] Output: [0]

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter ther array number :";
	cin>>n;
	
	int arr[n];
	int j=0;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			arr[j]=arr[i];
		}
		
	
}

