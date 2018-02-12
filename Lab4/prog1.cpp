#include <string.h>
#include <iostream>
#include <queue>
using namespace std;


int main(){

	int n=8;
	int outgoing[n]={2,1,1,1,2,0,1,0};
	int incoming[n];
	memset(incoming,0,n*sizeof(int));
	int AdjList[][n]={
						{1,2},
						{3},
						{3},
						{4},
						{5,6},
						{},
						{7},
						{}};

	for(int i=0;i<n; ++i){
		for(int j=0;j<outgoing[i];++j){
			incoming[AdjList[i][j]]+=1;
		}
	}
	queue<int> q;
	int sem=0;
	for(int i=0;i<n;i++){
		if(incoming[i]==0)
			q.push(incoming[i]);
	}
	int u,v,qs;
	while(q.size()){
		qs=q.size();
		for(int j=0;j<qs;++j){
			u=q.front();
			q.pop();
			for(int i=0;i<outgoing[u];i++){
				v=AdjList[u][i];
				incoming[v]--;
				if(incoming[v]==0){
					q.push(v);
				}
			}
		}
		sem+=1;
		
	}
	cout<<sem;


}