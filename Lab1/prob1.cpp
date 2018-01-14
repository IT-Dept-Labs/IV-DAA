#include <stdio.h>
#include <iostream>
using namespace std;

#define N 5

bool prefer(int n, int w, int m, int curr, int w_pref[N][5]){
	for (int i=0;i<n;i++){
		if (w_pref[w][i]==m)
			return true;
        else
         return false;

	}

}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the value of n: ";
//	cin>>n;
n=N;
	int men[n],women[n],m_pref[n][n],w_pref[n][n];
	for (int i=0;i<n;i++){
		men[i]=i;
		women[i]=i;
	}

	for (int i=0;i<n;i++){
		cout<<"Enter the preference of man "<<i<<" ";
		for (int j=0;j<n;j++){
			cin>>m_pref[i][j];
		}
	}

	for (int i=0;i<n;i++){
		cout<<"Enter the preference of woman "<<i<<" ";
		for (int j=0;j<n;j++){
			cin>>w_pref[i][j];
		}
	}

	bool mFree[n];
	int husband[n];

	for (int i=0;i<n;i++){
		husband[i]=-1;
		mFree[i]=false;
	}

	int free=n;
	int curr,j,i;


	while(free>0){

		for (j=0;j<n;j++){
			if (mFree[j]==false)
				break;
		}

		for (i=0;i<n;i++){
			int w=m_pref[j][i];

			if (husband[w]!=-1){

				husband[w]=j;
				mFree[j]=false;
				free--;
			}

			else{
				curr=husband[w];

				if(prefer(n,w,j,curr,w_pref[][5])==true){

					husband[w]=j;
					mFree[j]=false;
					mFree[curr]=true;


				}
			}
		}
	}

	cout<<"Woman 		Man"<<'\n';
	for(int i=0;i<n;i++)
		cout<<i+1<<" 		"<<husband[i]<<endl;

	return 0;
}
