//Q.11) WAP to display all unique elements of an array

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the array number :";
	cin>>n;
	
	int arr[n];
	int i ,j;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
		for(int i=0;i<n;i++){
		  cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<n;i++){
		for(int j=0;i<n;j++){
			if(arr[i]==arr[j]){
			     break;
			}
		}
		
		if(i==j){
			cout<<arr[i];
		}
	}
}
