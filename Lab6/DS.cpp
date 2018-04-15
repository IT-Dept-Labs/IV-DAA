#include <stdlib.h>
#include <iostream>

using namespace std;

class DSNode{

public:
	string label;
	int rank;
	DSNode *parent;

	DSNode(string x){
		label=x;
	}
	DSNode(){}
};

void makeSet(DSNode *a){
	a->rank=0;
	a->parent=a;
}

DSNode *findSet(DSNode *u){
	DSNode *temp;
	/*while(temp.parent==&temp)
		temp.parent=&temp;*/

	if(u->parent->label!=u->label){
			cout<<u->parent->label;
		 temp=findSet(u->parent);
	}

	return u;
}


int main(){
	
	DSNode v1("a"),v2("b");
	makeSet(&v1);
	makeSet(&v2);
	v1.parent=&v2;
	DSNode *p=findSet(&v1);
	cout<<p->label;
	// cout<<'\n'<<&v1;

	return 0;
}