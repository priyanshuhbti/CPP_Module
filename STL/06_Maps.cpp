#include<bits/stdc++.h>

using namespace std;



void print(map<int,string> &m){
    cout<<m.size() <<endl;
    for(auto &pr: m){
cout<<pr.first<<" "<<pr.second <<endl;

}

}
int main(){

  map<int,string> m;
  m[1]="abc";// (log(n));

  m[5]="cde";
  m[3]="acd";
  m.insert({4,"abc"});
//   map<int,string> ::iterator it;
//   for(it =m.begin(); it!=m.end(); ++it){
//     cout<<(*it).first<<"  "<<(*it).second<<endl;
//   }

//In replacement of that commented code we can simply write 



//To find any value in the Map
// auto it =m.find(3);
// if(it ==m.end()){

//   cout<<"NO Value ";

// }else{
//   cout<<(*it).first <<"  "<<(*it).second ;
//   }

// 

//To Erase a Element of the String 
// if( !=m.end()) If does not want to delete any element from the map
// m.erase(3);


// To Delete WHole iteration ....
auto it =m.find(5);
m.erase(it); //Log(n)


print(m);


//m.clear();


//Agar Acche Se Use krna aa gya tou basic questions 

return 0;
}
//Study Hard ...For My Mother Father and also name and fame 
//Pr ye koi Reason nhi hai ... Confidence and Self Hygiene Tou Rhkna hi pdega .
//And kisi se baat na karo