#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

  //pair<string,int>p;
//1.   p=make_pair("pandurang",21);
//2.   p.first="pandurang";
//   p.second=21;

  //cout<<p.first<<" "<<p.second;


pair<string,pair<int,int>>p;
// 3. p=make_pair("pandurang",make_pair(21,80));
//  4. p.first="pandurang";
//   p.second.first=21;
//   p.second.second=51;
   cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;


    return 0;
}