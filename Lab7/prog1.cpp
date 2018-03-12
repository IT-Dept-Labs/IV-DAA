#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the number of intervals: ";
	cin>>n;
	int start[n], finish[n];
	cout<<"\nEnter start and finish time: \n";
	for(int i=0;i<n;i++){
		cin>>start[i]>>finish[i];
	}
	schedule(start,finish,n);
	return 0;
}

void schedule(int start[],int finish[],int n){
	int min=0;
	int k=i;
	for(int i=0;i<n;i++){
		if(finish[i]<min){
			min=finish[i];
			k=i;
		}
	}
	for(int i=0;i<n;i++){
		if(start[i]>start[k] && finish[i]<finish[k])
			
	}
}