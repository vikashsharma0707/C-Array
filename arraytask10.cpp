//Q.10) WAP to copy the elements of one array into another array.


#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the array number :";
	cin>>n;

    int arr[n];
    int ar[n];
    
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
    	ar[i]=arr[i];
    	cout<<ar[i]<<" ";
	}
	
	
	
	
	
}
