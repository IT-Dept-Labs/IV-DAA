#include <iostream>

using namespace std;
int Min(int x, int y,int z){
	return min(min(x,y),z);
}

int editDistance(string s1,string s2,int m,int n){
	if (m==0) return n;

	if(n==0) return m;

	if (s1[m-1]==s2[n-1])
		return editDistance(s1,s2,m-1,n-1);
	return 1+ Min( editDistance(s1,s2,m,n-1), editDistance(s1,s2,m-1,n), editDistance(s1,s2,m-1,n-1) );
}

int main(int argc, char const *argv[])
{
	//string s1="sunday"; string s2="saturday";
	string s1,s2;
	cout<<"Enter string 1: ";
	cin>>s1;
	cout<<"Enter string 2: ";
	cin>>s2;
	cout<<editDistance(s1,s2,s1.length(),s2.length())<<'\n';

	return 0;
}