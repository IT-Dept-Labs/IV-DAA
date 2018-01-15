#include <iostream>
using namespace std;

int getPeak(int arr[], int n){
	if(n==0)
		return arr[0];
	else if (arr[n/2]>arr[n/2-1]){
		
	}
}

int main(){
	cout<<"Enter the number of elements";
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter a sequence of integers that first strictly increase and then strictly decrease";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\n"<<getPeak(arr,n)<<"\n";
}