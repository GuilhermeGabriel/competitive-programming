#include <bits/stdc++.h>
using namespace std;


int n;
vector<int> nums;
set<vector<int>> ans;

void backtracking(vector<int> v, vector<bool> taken)
{
    if (v.size() == 6)
    {
        sort(v.begin(), v.end());
        ans.insert(v);
        return;
    }

    for(int i = 0; i < n; i++) {
        if (taken[i] == false) {
            v.push_back(nums[i]);
            taken[i] = true;
            backtracking(v, taken);
            taken[i] = false;
            v.pop_back();
        }
    }
}

int main()
{
    int k;
    bool flag = false;

    while (scanf("%d", &k), k)
    {
        if (flag) puts("");

        ans.clear();
        nums.clear();

        n = k;
        nums.resize(n);
        for (int i = 0; i < k; i++)
            scanf("%d", &nums[i]);

        backtracking(vector<int>(), vector<bool>(n, false));
        for (auto a : ans)
            for (int i = 0; i < a.size(); i++)
                printf("%d%c", a[i], i == a.size() - 1 ? '\n' : ' ');
        
        flag = true;
    }
}