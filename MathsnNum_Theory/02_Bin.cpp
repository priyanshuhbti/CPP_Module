// Here we will study complete about the number theories and where we cover all the numbers in the 
//Competitive Programming GCDs , Bit Manipualtion and all etc ..


//This is the Lecture Notes and code ..
/* Lecture 58 */

#include<bits/stdc++.h>
using namespace std;

int main()
{

/*Binary Logics */
// Every odd number contains one at the last in the binary form ..
//Ex:- 5 =>101 ,6 =>110 ,7=>111..

//   # The symbol of AND is & ,OR is | and XOR is ^ .

/* XOR Cases*/
//Do same cheez ka XOR Zero hota hai ..

/*NOT Operator */
//I know .. the symbols is !

/*Left shift and Right Shift Operator */
// lS => <<    
// rS => >>

/*Now understand the meaning of the binary shift ..*/
// 3<< 2
  // then the binar of the three must shift by two ..
  //Ex :- 3==11 if two shift then 1100(After shifting )..

//6>>1
  //then the binary of the three must shift by one ..
  //ex:- 6==110 =>11 (3)..

/* BITS Understanding..*/
//We can make 16 numbers from just the Four Bits.
//The integer datatype of cpp have 32 bits storage .
//4 bits =16(2^4) storage elements so .. 32 bits 
 
// Let just check it by printing ..
cout<<INT_MAX<<endl;

//Trick to calculate the power of 2^t.


// 1 left shift t (the number of power we want from it.)
  cout<<(1<<4)<<endl; //here we are taking 4 as t.

 //The int data type is not always helpful so try to work on the ll dt ..when you got the overflow..
 int a =(1LL<<31 -1); // The 32 bit will not work here as it is signed bit integer ..

//Code for using the 32 bit integer..
 unsigned int b =(1LL<<32 )-1;
 cout<<b;
 //Signed and Unsigned INT You have heard and studied in the Digital Electronics.


    
    return 0;
}
