#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// it stores data in key value pair
// key must be unique
// insertion,deletion,and search operation have logn time.
//<--- multimap-->
// allow to duplicate key 
int main()
{    
    map<int,int>m;
    m.insert(make_pair(11,20));
     m.insert(make_pair(15,20));
      m.insert(make_pair(18,25));
       m.insert(make_pair(25,40));
        m.insert(make_pair(10,20));
        m[100]=80;
    
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;

    if(m.count(15))
    cout<<m[15]<<" ";

    
}