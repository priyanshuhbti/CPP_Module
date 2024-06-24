//In the previous lec. we have studied about the Bits Basics..

#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=10; i<=0; i--){
        cout<<((num>>i) & 1);
    }
    cout<<endl;

}

int main()
{
    //Least Significant Bits : right ki sabse last vali bit eg. 110110 O is the lsb..
    //Most Significant Bits : Sbse phli vali bit which we can use ..
    //Bit is Set => Bit is 1.
    //Bit is Unset => Bit is 0.
 
 /* if you want to find any bit ,is it set or not .. just add up the compliment of it..  */
 //eg. 101 && 010 ==000 So it is one at the set at one ... Trick ..

  //2 ki power ke phle vale jo num hai usme sare 1 hi aange ..
  // 1000-1 ==3 ==111 ;  


/* Function use to check whether it is a Set bit or not set bit */
//print Binary function..
   printBinary(9);
   int a=9;
   int i=0;
   if(a & (1<<i) !=0){
    cout<<"Set Bit "<<endl;
   }else{
    cout<<"NOt set "<<endl;
    
   }

    return 0;
}