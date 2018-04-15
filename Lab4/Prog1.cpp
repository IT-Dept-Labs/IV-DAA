#include <iostream>
using namespace std;

int getMax(int arr[],int n){
	int max=0,here=0;
	int indI=n,indJ=-1;
	for (int i=0;i<n;i++){
			here+=arr[i];
			if(arr[i]>0 && indI>i )
				indI=i;
			if(here<0){
				here=0;
				indI=n;
			}
			if(here>=max){
				max=here;
				indJ=i;
			}
	}
	if(indJ==-1)
		indJ=n-1;
	cout<<indI<<'\t'<<indJ<<'\n';
	return max;
}


int main(){
	int arr[]={-2,-1,-1,-2,3,4,-8,74,-10,-30};
	int n=10;
	cout<<getMax(arr,n)<<'\n';

}
