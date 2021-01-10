#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void Average()
{
    int k; cin>>k;
    queue<int> q;
    int n;
    cin>>n;
    int sum=0;
    while(n!=-1)
    {
        sum+=n;
        q.push(n);
        if(q.size()>k)
        {
            sum-=q.front();
            q.pop();
        }
       cout << fixed << setprecision(4);
        cout<<(double)(sum)/q.size()<<" ";
        cin>>n;
    }
    cout<<endl;
}
int main() {
    Average();
    return 0;

}
