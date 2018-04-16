#include <stdio.h>

int majority(int low,int high,int arr[]){

	if(low==high){

		return arr[low];
	}

	int m1=majority(low,(low+high)/2,arr);

	int count=0;

	if(m1!=-100){

		for(int i=low;i<=high;i++){

			if(arr[i]==m1)
				count++;

			if(count>(high-low+1)/2) 
				return m1;
		}
	}

	int m2=majority((low+high)/2+1,high,arr);

	count=0;

	if(m2!=-100){

		for(int i=low;i<=high;i++){

			if(arr[i]==m2)
				count++;

			if(count>(high-low+1)/2)
				return m2;

		}
	}

	return -100;
}

int main(){

	int arr[]={1,2,3,4,5,4,4,4,4};
	int ans=majority(0,8,arr);
	if (ans==-100){

		printf("No majority element");

	}

	else
		printf("Majority element:%d",ans);

	return 0;
}