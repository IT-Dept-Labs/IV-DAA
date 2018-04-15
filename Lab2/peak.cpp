#include <iostream>
using namespace std;

int getPeak(int arr[], int high, int low){
	
	int mid=(high+low)/2;
	if (mid==0)
		return 0;
	if (arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
		return arr[mid];
	else if(arr[mid-1]<arr[mid])
		return getPeak(arr,mid+1,high);
	else 
		return getPeak(arr,low,mid-1);
	
}

int main(){
	cout<<"Enter the number of elements: ";
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter a sequence of integers that first strictly increase and then strictly decrease: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"\n"<<getPeak(arr,0,n)<<"\n";
}