//Q.1) WAP to create a array of n integer elements. And  perform following operations.
//a) display
//b) display in reverse order.
//c) display alternate elements from starting index.
//d)display elements which are multiple of 7
//e) add them all and show result
//f) find avg.

#include<iostream>
using namespace std;
int main(){


int  n;
cout<<"enter number :";
cin>>n;
   int arr[n];
   int sum,avg;


for(int i=0;i<n;i++){
	cin>>arr[i];
}

for(int i=0;i<n;i++){
	cout<<arr[i]<<" "<<endl;
}

for(int i=n-1;i>=0;i--){
	cout<<arr[i]<<" ";
}
cout<<endl;

for(int i=0;i<n;i++){
	if(i%2==0){
		cout<<arr[i]<<" ";
	}
}
cout<<endl;

for(int i=0;i<n;i++){
	if(arr[i]%7==0){
		cout<<arr[i]<<" ";
	}
}
cout<<endl;

for(int i=0;i<n;i++){
	sum=sum+arr[i];
}
cout<<sum<<endl;
cout<<endl;
avg=sum/n;
cout<<avg;


}


