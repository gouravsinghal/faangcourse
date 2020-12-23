#include <bits/stdc++.h>
using namespace std;
vector<string> subaraay(vector<int> &nums)
{
    int n=nums.size();
    vector<string> ans;
    int i=0;
    while(i<n)
    {
        string temp="";
        temp+=to_string(nums[i]);
        int num=nums[i];
        while(i+1<n && nums[i+1]==nums[i]+1)
        {
            i++;
        }
        if(nums[i]!=num) {
            temp+="->";
            temp+=to_string(nums[i]);
        }
        ans.push_back(temp);
        i++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<string> s=subaraay(v);
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }
return 0;}
