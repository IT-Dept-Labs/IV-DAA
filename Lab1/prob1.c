#include <stdio.h>



//int n;
int prefer(int n, int w, int m, int curr, int w_pref[n][n]){

	for (int i=0;i<n;i++){
		if (w_pref[w][i]==m){
			return 1;
		}
		else return 0;
	}

}

int main(int argc, char const *argv[])
{
	int n,i=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int men[n],women[n],m_pref[n][n],w_pref[n][n];
	for (i=0;i<n;i++){
		men[i]=i;
		women[i]=i;
	}

	for (i=0;i<n;i++){
		printf("Enter the preference of man %d ",i);
		for (int j=0;j<n;j++){
			scanf("%d",&m_pref[i][j]);
		}
	}

	for (int i=0;i<n;i++){
		printf("Enter the preference of woman %d ",i);
		for (int j=0;j<n;j++){
			scanf("%d",&w_pref[i][j]);
		}
	}


	int mFree[n];
	int husband[n];

	for (int i=0;i<n;i++){
		husband[i]=-1;
		mFree[i]=0;
	}

	int free=n;
	int curr,j;


	while(free>0){

		for (j=0;j<n;j++){
			if (mFree[j]==0)
				break;
		}

		for (i=0;i<n;i++){
			int w=m_pref[j][i];

			if (husband[w]!=-1){

				husband[w]=j;
				mFree[j]=0;
				free--;
			}

			else{
				curr=husband[w];

				if(prefer(n,w,j,curr,w_pref)==1){

					husband[w]=j;
					mFree[j]=0;
					mFree[curr]=1;


				}
			}
		}
	}

	printf("Woman 		Man\n");
	for( i=0;i<n;i++)
		printf("%d 		%d\n",i+1,husband[i]);

	return 0;
}
