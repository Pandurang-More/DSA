 // set:unique element sorted
 // multiset:sorted
 //unordered set: unique
 // unordered_multiset:
 //<---- unordered set --->
 // it contains only unique element
 // search insert removal have constant time complexity
 // it uses hashing technique to achieve it
 
 
 
 
 
 
 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main(){
 unordered_multiset<int>s;
    s.insert(5);
    s.insert(15);
    s.insert(50);
    s.insert(54);
    s.insert(51);
    s.insert(54);
    s.insert(54);
    s.erase(50);

    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;


   
 
    return 0;

}