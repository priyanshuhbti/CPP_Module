#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v={2,3,7,8,4};
    for(int i=0; i<v.size(); ++i){
        cout<< v[i]<<" ";
    }
    cout<<endl;
    //Use this itetrator to define  the begining iterator ;
    // vector<int> :: iterator it =v.begin();
    // cout<<(*it)<<endl;

    // vector<int>::iterator it =v.begin();
    // for(it=v.begin(); it<=v.end(); ++it){
    //     cout<<(*it)<<endl;
    // }

    //:: Iterators using Pairs 
    vector<pair<int,int>> v_p={{1,2},{3,4},{5,7}};
    vector<pair<int,int>> :: iterator it;
    for(it=v_p.begin(); it!=v_p.end(); ++it){
        cout<<((*it).first)<<"  "<<((*it).second)<<endl;//First Form of Representing it ;

    } 
      for(it=v_p.begin(); it!=v_p.end(); ++it){
        cout<<(it->first)<<"  "<<(it->second)<<endl;//Second Form of Representing the String ;

    } 
    
    return 0;
}