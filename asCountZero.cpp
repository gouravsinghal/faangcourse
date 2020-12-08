#include <iostream>
using namespace std;
int countzero(int n)
{
    int s=0;
    while(n)
    {
        n=n/5;
        s=s+n;
    }
    return s;
}
int main() {
    int n;
    cin>>n;
    cout<<countzero(n);
    return 0;
}
