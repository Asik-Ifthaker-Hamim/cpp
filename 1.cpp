#include<bits/stdC++.h>
using namespace std;
int main()
{
    map<int, int> ans;
    stack<int>index;
    vector<int>data;
    int t;
    cin>>t;
for(int i=0; i<t; i++)
{
    int x;
    cin>>x;
    data.push_back(x);
}
for(int i=0; i<t; i++)
{
    while(!index.empty()&&data[i]>data[index.top()])
    {
        ans[index.top()] = data[i];
        index.pop();
    }
    index.push(i);
}
while(index.size())
{
    ans[index.top()] = -1;
    index.pop();
}
for(auto it :ans)
{
    cout << data[it.first] << " " << it.second << endl;
}
}