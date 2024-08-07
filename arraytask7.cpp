//Q.7) WAP to count all odd element in an array, and display result.



#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter array number :";
	cin>>n;
	
	int arr[n];
	int count=0;
	
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		if(arr[i]%2!=0){
			count++;
		}
	}
	cout<<endl;
    cout<<count;
	

	
	
}
