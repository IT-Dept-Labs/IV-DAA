#include <iostream>
using namespace std;

struct DSNode{

	string label;
	int rank;
	DSNode *parent;

};

void makeSet(DSNode *a){

	a->parent=a;
	a->rank=0;

}

string findset( DSNode *x){

	DSNode *temp;
	*temp=*x;
	cout<<x->label;
	while(temp->parent->label==temp->label){
		cout<<temp->label;
		temp=temp->parent;
	}
	return temp->label;

}

/*void unionSet(DSNode *u, DSNode *v){

	DSNode *uRep=findset(u);
	DSNode *vRep=findset(v);
	if( uRep->rank > vRep->rank)
		vRep->parent=uRep;

	else if(uRep->rank < vRep->rank)
		uRep->parent=vRep;

	else{
		uRep->parent=vRep;
		vRep->rank+=1;
	}
}*/

int main(int argc, char const *argv[])
{
	DSNode *x;
	x->label="al";
	string a=x->label;
	 cout<<a;
	//a=findset(&x);
	// cout<<p->label;
	 return 0;
}
