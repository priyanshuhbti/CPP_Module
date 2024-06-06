#include<bits/stdc++.h>
using namespace std;
// this is the introductory lecture on the stacks and how to implement it accordingly ...
//Stack basically works on the LIFO (Last in First Out principle ...) E.g. SL Arora ...Learning  Technique ..


int main()
{
    
/* Stack Implementation */
//    stack<int> s;
//    s.push(2);
//    s.push(3);
//    s.push(5);
//    s.push(67);
//    while(!s.empty()){
//     cout<< s.top()<<endl;
//     s.pop();

/*Queue Implementation */
queue<int> s;
s.push(23);
s.push(33);
s.push(43);
s.push(63);
s.push(13);
while(!s.empty()){
    cout<<s.front()<<endl;
    s.pop();



}


   
    return 0;
}