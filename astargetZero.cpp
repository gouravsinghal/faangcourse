#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   int m=n/2;
   for(int i=0;i<n/2;i++)
   {
       cout<<-1*m<<" ";
       m--;
   }
   if(n%2==1)
   {
       cout<<"0"<<" ";
   }
   for(int i=0;i<n/2;i++)
   {
       cout<<1+i<<" ";
   }
   return 0;
}
