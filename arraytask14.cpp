//Q.2) WAP to find the sum of duplicate elements which are present in our array.
//(duplicate element has a frequency of more than 1)


#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the array numbers :";
	cin>>n;
	int j;
	
	int arr[n];
      int count=0;
	int sum=0;
	
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
			if(count==1){
				sum=sum+arr[i];
			}
			
	}
	cout<<endl;
	cout<<"sum of the duplicate elements are :"<<sum<<endl;
	cout<<count;
}



