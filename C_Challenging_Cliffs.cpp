#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
//----------------------------------------------------------------//
// preDefined functions//

//----------------------------------------------------------------//
// data types//

//----------------------------------------------------------------//
// helper functions //

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long siz;cin>>siz;
    vector<long long >dat(siz);
    for(auto&it:dat)cin>>it;
    sort(dat.begin(),dat.end());
    deque<long long >ans;
    for(auto&it:dat)ans.push_back(it);

    while(!ans.empty()){
        cout<<ans.back()<<' ';
        ans.pop_back();
        if(!ans.empty())
        cout<<ans.front()<<' ';
        ans.pop_front();
    }
    cout<<endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
}