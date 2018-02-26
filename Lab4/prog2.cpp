#include<iostream>
using namespace std;

struct minmax{
  int min;
  int max;
};


struct minmax result(int arr[],int lo,int hi){
  struct minmax mLeft,mRight,mOverall;
  mOverall.min=0,mOverall.max=0;
  if(lo==hi){
    mOverall.min=arr[lo];
    mOverall.max=arr[lo];
  }
  else if(hi==lo+1){
    if(arr[lo]<arr[hi]){
      mOverall.min=arr[lo];
      mOverall.max=arr[hi];
    }
    else{
      mOverall.min=arr[hi];
      mOverall.max=arr[lo];
    }
  }
  else{
    int mid=(lo+hi)/2;
    mLeft=result(arr,lo,mid);
    mRight=result(arr,mid+1,hi);

    if(mLeft.min<mRight.min)
      mOverall.min=mLeft.min;
    else
      mOverall.min=mRight.min;

    if (mLeft.max>mRight.max)
      mOverall.max=mLeft.max;
    else
      mOverall.max=mRight.max;
  }
  return mOverall;
}



int main(){
  int arr[] = {1000, 11, 445, 1, 330, 3000};
  int n=6;
  struct minmax pair= result(arr,0,n);
  cout<<"Max: "<<pair.max<<"\nMin: "<<pair.min<<'\n';
  return 0;
}
