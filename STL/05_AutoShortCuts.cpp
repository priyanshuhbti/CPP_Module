#include<bits/stdc++.h>

using namespace std;

int main(){

   vector<int> v={2, 3, 5,6};
   for(int &value:v){  //we can make the actual value in the replacement of the copied value by adding the reference in the value &value
    value++;

   }

   for(int value:v){
    cout<<value<<" "<<endl;
   }

   //For Printing the Pair Value 
   vector<pair<int,int>> v_p={{1,2},{2,4}};
   for(pair<int,int> &value :v_p){
    cout<<value.first<<"" <<value.second<<endl;


   }

   //Auto  Keyword Usage
   auto a=1.0;
   cout<<a<<endl;
}