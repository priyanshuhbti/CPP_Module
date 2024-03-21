#include <bits/stdc++.h>
using namespace std;

void PrintVec(vector <pair<int,int>> &v){  
    cout<<"size :"<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i){
        cout<<v[i];//cout 
    }
    cout<<endl;
}


int main()
{
//     vector<pair<int,int>> v ;
// PrintVec(v); //This will give the null value .
// cout<<"Enter the size of the array";
// int n;
// cin >>n;
// cout<<"Ok!! Then write the value of sizes which you want";
//  for(int i=0; i<n; ++i){
//     int x,y;
//         cin>>x>>y;
//         v.push_back({x,y});
//     }
//     PrintVec(v);


// Array of any Vector ....



//Vector of any Vector :::
int N;
cin>>N;
vector<vector<int>> v;
for(int i=0;i<N;++i){
    int n;
    cin>>n;
    vector<int> temp;
    for(int j=0; j<n; ++j){
        int x;
        cin >>x;
        temp.push_back(x);

    }
    v.push_back(temp);
}
for(int i=0; i<N; ++i){
    PrintVec(v[i]);
}
cout<<v[0][1];
    return 0;
}