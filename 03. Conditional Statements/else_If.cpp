#include<iostream>
using namespace std;
 
int main() {
   int marks;
   cout<<"Enter marks :";
   cin>> marks;

   if(marks >= 90) {
    cout << "A";
   } else if (marks >= 80) {
    cout << "B";
   } else {
    cout << "C";
   }


    // why we choose Else If Statement over If Else ?

    // for marks(90) >> 90
    
//    if(marks >= 90) {
//     cout << "A";
//    } if (marks >= 80) {
//     cout << "B";
//    } else {
//     cout << "C";
//    }

}