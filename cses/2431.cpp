#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int q;cin>>q;

  vector<ll> powers(19,1);
  for(int i=1;i<19;i++){
    powers[i]=powers[i-1]*10;
  }

  ll k;
  while(q--){
    cin>>k;

    ll num_dig=0;
    ll digit_len=0;
    ll prev_dig=0;

    for(int i=1;i<19;i++){
      digit_len+=(powers[i]-powers[i-1])*i;

      if(digit_len>=k){
        num_dig=i;
        break;
      }

      prev_dig=digit_len;
    }
    
    ll low=powers[num_dig-1];
    ll high=powers[num_dig]-1;
    ll ans=0;
    ll startpos_ans=0;

    while(low<=high){
      ll mid=(high+low)/2;
      ll startpos=(mid-powers[num_dig-1])*num_dig+prev_dig+1;

      if(startpos<=k){
        if(mid>ans){
          ans=mid;
          startpos_ans=startpos;
        }
        low=mid+1;
      }else{
        high=mid-1;
      }
    }

    string number=to_string(ans);
    cout<<number[k-startpos_ans]<<'\n';
  }
}