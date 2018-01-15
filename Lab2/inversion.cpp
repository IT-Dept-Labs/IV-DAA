#include <iostream>
// #include <stdio.h>
// #include <ostream>
using namespace std;
int invertCount(int arr[], int n){
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j])
				++count;
		}
	}
	return count;	
}

int main(int argc, char const *argv[])
{
	cout<<"Enter the number of elements: ";
	int n;
	cin>>n;
	cout<<"\nEnter the elements: \n";
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Total inversions in the sequence: "<<invertCount(arr,n)<<"\n";
	return 0;
}