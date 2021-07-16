#include "bits/stdc++.h"

using namespace std;

void merge(vector<int> &array,int l,int m,int r){
   int i,j,k,nl=m-l+1,nr=r-m;
   int larr[nl],rarr[nr];

   for(i=0;i<nl;i++)larr[i]=array[l+i];
   for(j=0;j<nr;j++)rarr[j]=array[m+1+j];
   
   i=j=0;k=l;

   while(i<nl&&j<nr) {
      if(larr[i]<=rarr[j])array[k]=larr[i++];
      else array[k]=rarr[j++];
      k++;
   }
   while(i<nl)array[k++]=larr[i++];
   while(j<nr)array[k++]=rarr[j++];
}

void mergesort(vector<int> &v,int l,int r){
	if(l>=r)return;
	int mid=(l+r)/2;
	mergesort(v,l,mid);
	mergesort(v,mid+1,r);
	merge(v,l,mid,r);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> A={9,3,7,5,6,4,8,2};
	mergesort(A,0,A.size()-1);
	for(auto e:A)cout<<e;
	 
	return 0;
}