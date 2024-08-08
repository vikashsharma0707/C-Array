//Q.1) WAP to find how many duplicate elements are present in our array.

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the array numbers :";
	cin>>n;
	
	int arr[n];
	int count=0;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
		for(int i=0;i<n;i++){
		    for(int j=i+1;j<n;j++){
		    	if(arr[i]==arr[j]){
		    	cout<<arr[j]<<" ";
		    	count++;
		    	break;
			}
			}
			
	}
	cout<<endl;
	cout<<count;
}
