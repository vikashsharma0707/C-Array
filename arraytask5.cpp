//Q.5) WAP to find sum of all even element in an array.

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter array number :";
	cin>>n;
	
	int arr[n];
	int sum;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		if(arr[i]%2==0){
			sum=sum+arr[i];
		}
	}
	cout<<endl;
	cout<<sum;
	

	
	
}
