#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int minDist(vector<string> words, string word1, string word2)
{
 int minm=words.size();
 int n=minm;
 if(word1==word2)
 {
	 int p=-1;
	 for(int i=0;i<n;i++)
	 {
		 if(words[i]==word1){
			 if(p==-1) p=i;
			 else{
				 minm=min(minm, abs(i-p));
				 p=i;
			 }
		 }
	 }
 }
 else{
	 int a1=-1,a2=-1;
	 for(int i=0;i<n;i++)
	 {
		 if(words[i]==word1) a1=i;
		 else if(words[i]==word2) a2=i;
		 if(a1!=-1 && a2!=-1){
			 minm=min(minm,abs(a1-a2));
		 }
	 }
 }
 return minm;
}
int main() {
	int n;
	cin>>n;
	vector<string> s;
	for(int i=0;i<n;i++)
	{
		string x;
		cin>>x;
		s.push_back(x);
	}
	string s1,s2;
	cin>>s1>>s2;
	cout<<minDist(s,s1,s2);
	return 0;
}
