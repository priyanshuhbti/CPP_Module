#include<bits/stdc++.h>
using namespace std;

void PrintVec(vector <int> &v){  //Try to pass the reference to reduce the time complexity of order of n
    cout<<"size :"<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i){
        cout <<v[i]<<" ";
    }
    cout<<endl;
}
//Vector is a type of Array whose size and can be changed when required and used .

int main()
{

    // vector<int> v;
    // int n;
    // cin >>n;
    // for(int i=0; i<n; ++i){
    //     int x;
    //     cin>>x;
    //     v.push_back(x); //This function is used to push back the value of the x to the vector v. 
    // }

    // PrintVec(v);
    // The max limit for the vector is same as the limit of the array , which is 10^5 otherwise runtime error.

   vector<int> v(10);
   v.push_back(7);
   v.push_back(12);
   v.pop_back();//Last value ko ye nikalta hai O(1)
   //ecvtor<int> v2=v; //You can copy array .It takes the O(n) time complexity
   vector<int> v2=v;
   v2.push_back(28);


   PrintVec(v);
cout<<"The V2 vector is currently showing this statement";
PrintVec(v2);


    return 0;
}