#include <bits/stdc++.h>
using namespace std;

int lis(vector <int> &v){
    vector <int> ans;
    for (int t : v){
        // Para non - decreasing use upper_bound ()
        auto it = lower_bound ( ans. begin () , ans. end () , t);
        if (it == ans .end ()) ans. push_back (t);
        else *it = t;
    }
    return ans. size ();
}

int main(){
    int c,n,num;cin >> c;
    vector<int> arr;

    while(c--){
        cin >> n;

        for(int i=0;i<n;i++){
            cin >> num;
            arr.push_back(num);
        }

        int res1 = lis(arr);
        reverse(arr.begin(),arr.end());
        int res2 = lis(arr);

        cout << max(res1,res2) << endl;
        arr.clear();
    }
    

    return 0;
}