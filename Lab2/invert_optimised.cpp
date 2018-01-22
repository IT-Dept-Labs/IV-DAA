#include <iostream>
using namespace std;

int *mergedArr=NULL;


int splitCount(int arr[],int i,int j){
	
	int li=i;
	int ln=(j+i)/2;
	int ri=ln+1;
	int rn=j;
	int cnt=0;
	while(li<=ln && ri<=rn){
		if (arr[li]>arr[ri]){
			cnt+=ln-li+1;
			mergedArr[ri]=arr[ri];
			ri++;
		}
		else {
			mergedArr[li]=arr[li];
			li++;
		}
	}
	while(li<=ln){
		mergedArr[li]=arr[li];
		li++;
	}
	while(ri<=rn){
			mergedArr[ri]=arr[ri];
			ri++;
		}
	for(int k=i;k<=j;k++){
		arr[k]=mergedArr[k];
	}
	return cnt;
}
int invertCount(int arr[], int i,int j){
	if (mergedArr==NULL)
		mergedArr=new int[j-i+1];
	return invertCount(arr,i,(j+i)/2)+invertCount(arr,(j+i)/2+1,j)+splitCount(arr,i,j);
}





int main(int argc, char const *argv[])
{
	// cout<<"Enter the number of elements: ";
	// int n;
	// cin>>n;
	// cout<<"\nEnter the elements: \n";
	// int arr[n];
	// for(int i=0;i<n;i++){
	// 	cin>>arr[i];
	// }
	int arr[]={4,10,8,2,1},n=5;
	cout<<"Total inversions in the sequence: "<<invertCount(arr,0,n-1)<<"\n";
	return 0;
}