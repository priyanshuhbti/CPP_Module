#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int ,int > a ,pair<int ,int> b){
    if(a.first != b.first){
        return a.first<b.first; //This will always return what you wanted and set them as false.
    }
    return a.second > b.second ;

}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end(),cmp);
    //Now print the pair of the vectors from here onwards......
    
    
    return 0;
}