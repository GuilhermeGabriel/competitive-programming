#include "bits/stdc++.h"

using namespace std;

typedef long long ll;

ll merge(vector<int> &arr,vector<int> &temp,int l,int mid,int r){
    int i, j, k;
    ll inv_count = 0;
 
    i = l;
    j = mid;
    k = l; 
    while ((i <= mid - 1) && (j <= r)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }
 
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= r)
        temp[k++] = arr[j++];
 
    for (i = l; i <= r; i++)
        arr[i] = temp[i];
 
    return inv_count;
}

ll mergesort(vector<int> &arr,vector<int> &temp,int l,int r){
    if (l>=r)return 0;
    int mid = (r + l) / 2;
    return mergesort(arr, temp, l, mid)+
    mergesort(arr, temp, mid + 1, r)+
    merge(arr, temp, l, mid + 1, r);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int i,n;vector<int> nums, tmp;
	while(cin>>n,n){
		tmp.resize(n);
		while(n--){
			cin>>i;nums.push_back(i);
		}
		cout<<((mergesort(nums,tmp,0,nums.size()-1)%2!=0) ? "Marcelo\n" : "Carlos\n");
		nums.clear();
		tmp.clear();
	}

	return 0;
}