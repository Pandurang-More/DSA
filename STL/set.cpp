#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// only unique value will be stored
// instagram id example
// stored value in ascending order by default.
// insertion,deletion,search have logn time, making them fast for
//most use cases
// generally implemented using red black or avl tree.
// we can sort it in descending order also using greater<type>
class person
{
public:
int age;
string name;

 bool operator<(const person &other)const{  // order batayega konsa  age phle ayega
    return age<other.age;
 }

};



int main()
{    
    set<int>s;
    s.insert(5);
    s.insert(15);
    s.insert(50);
    s.insert(54);
    s.insert(51);
    s.insert(54);

    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    set<int, greater<int>>s1;
    s1.insert(5);
    s1.insert(15);
    s1.insert(50);
    s1.insert(54);
    s1.insert(51);
    s1.insert(54);
    for(auto it=s1.begin();it!=s1.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;

    if(s.find(200)!=s.end())
    cout<<"present";
    else
    cout<<"absent";

    cout<<endl;

    set<person>s3;
    person p1;
    person p2;
    person p3;
    p1.name="A";
    p2.name="B";
    p3.name="C";
    p1.age=20;
    p2.age=23;
    p3.age=35;

    s3.insert(p1);
    s3.insert(p2);
    s3.insert(p3);

    for(auto it=s3.begin();it!=s3.end();it++)
    {
        cout<<it->name<<" "<<it->age;
        cout<<endl;
    }


    return 0;
}