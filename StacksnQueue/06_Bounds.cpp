#include<bits/stdc++.h>
using namespace std;

int main()
{

 int n;
 cin>>n;
 vector<int> a(n);
 for(int i=0; i<n; i++){
    cin>>a[i];

 } 
 for(int i=0; i<n; ++i){
    cout<<a[i]<<" ";

 }cout<<endl;
 auto it=upper_bound(a.begin(),a.end(),5);
 if(it==a.end()){
    cout<<"Not Found";
    return 0;

 }  
 cout<<(*it)<<endl;
 ///

 /* Now in the case of the sets */
 set<int> s;
 map<int ,int> m;
 for(int i=0; i<(int)(1e6); i++){
    s.insert(rand());

 }
 for(int i=0; i<(int)(1e6); i++){
    auto it=s.lower_bound(rand());
    //cout print only pointers .
 }


    return 0;
}