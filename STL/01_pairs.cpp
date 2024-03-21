#include<bits/stdc++.h>
using namespace std;

int main()
{

   /* //Pair Declaration Syntax ::
    pair<int,string> p;
    p={123,"abcd"};
    cout<<p.first<<"  "<<p.second<<endl;*/

//changing the address value of the p

    /*pair<int,string> p;
    p={123,"abcd"};
    pair<int,string> &p1 = p;
    p1.first=3;
    cout<<p.first<<"  "<<p.second<<endl;*/

    //Pair is generally used to declare the relationship between two elements.
    pair<int,int> p_array[3];
    p_array[0]={1,2 };
    p_array[1]={2,4};
    p_array[2]={3,6 };


    swap(p_array[0],p_array[2]); //This is the swap function to swap function in the two stirngs
    for(int i=0; i<3; i++){
        cout<<p_array[i].first <<" "<<p_array[i].second<<endl;
    }
    

    return 0;
}