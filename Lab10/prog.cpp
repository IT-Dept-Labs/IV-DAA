#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

int min(int a,int b){
	if(a<b)
		return a;
	return b;
}

int main(){
	int n,e;
	// cout<<"Enter number of vertices and edges: ";
	// cin>>n>>e;
	// int adj[n][n];
	n=6;
	int inf=std::numeric_limits<int>::max()/2;
	//int inf=1000;
	int adj[][n]={{0,inf,inf,inf,-1,inf},
			  {1,0,inf,2,inf,inf},
			  {inf,2,0,inf,inf,-8},
			  {-4,inf,inf,0,3,inf},
			  {inf,7,inf,inf,0,inf},
			  {inf,5,10,inf,inf,0}
			  };
	int D0[n][n],D1[n][n];

	for (int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			D0[i][j]=adj[i][j];

	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int x=D0[i][k]+D0[k][j];
				D1[i][j]=min(D0[i][j],x);
				// cout<<"D["<<i<<"]["<<j<<"]="<<D1[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				D0[i][j]=D1[i][j];
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<D0[i][j]<<" ";
		}
		cout<<"\n";
	}



	return 0;
}