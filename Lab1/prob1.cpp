#include <studio.h>

void main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	int men[n],women[n],m_pref[n][n],w_pref[n][n];
	for (int i=0;i<n;i++){
		men[i]=i;
		women[i]=i;
	}
	
	for (int i=0;i<n;i++){
		cout<<"Enter the preference of man "<<i<<" ";
		for (int j=0;j<n;j++){
			cin<<m_pref[i][j];
		}
	}
	
	for (int i=0;i<n;i++){
		cout<<"Enter the preference of woman "<<i<<" ";
		for (int j=0;j<n;j++){
			cin<<w_pref[i][j];
		}
	}
	return 0;
}