#include <bits/stdc++.h>
using namespace std;


void print(const map<int,string> &m){
    cout << m.size() << endl;
    for(auto &pr: m){
        cout << pr.first << " " << pr.second << endl;
    }
}

void print(const unordered_map<int,string> &m){
    cout << m.size() << endl;
    for(auto &pr: m){
        cout << pr.first << " " << pr.second << endl;
    }
}


int main(){
// Difference between the ordered and unordered list 

// 1. inbuilt implementation 
//2 TIme Complexity 
//3.Valid Keys DataType

unordered_map<int,string> m;
m[1]=" abc ";
m[5]=" cdc";
m[3]=" adc";
m[6]=" ddc"; //The benefit of using the unordered map is this that it has a very less time complexity .
m[5]=" fdc";

print(m);

return 0;
}