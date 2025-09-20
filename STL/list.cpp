#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// it implemntes as doubly linked list.
// push_front push_back,pop_front,pop_back,iterator,size
int main()
{    list<int>l;
   l.push_back(20);
   l.push_back(40);
   l.push_back(50);
   l.push_back(80);
   l.push_back(10);
   l.push_front(90);
   l.pop_back();

   cout<<l.front()<<" "<<l.back();
   cout<<endl;
   for(auto it=l.begin();it!=l.end();it++)
   {
    cout<<*it<<" ";
   }
   cout<<endl;
   for(auto it=l.rbegin();it!=l.rend();it++)
   {
    cout<<*it<<" ";
   }
       return 0;
}