//Q.3) WAP to find lowest and second lowest element in an array.

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the array element :";
	cin>>n;
	
	int arr[n];
	int low=arr[0];
	int slow=arr[0];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		if(arr[i]<low){
			low=arr[i];
		}
	}
	cout<<endl;
	
	for(int i=0;i<n;i++){
		if(arr[i]<slow && arr[i]>low){
			slow=arr[i];
		}
	}
	
	cout<<low<<endl;
	cout<<slow;
	
}
