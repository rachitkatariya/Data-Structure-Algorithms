/* 

Question 4 : Write a program to calculate the area of a circle.
Input : r (radius)
Output : PI*r*r (area)

*/

#include<iostream>
using namespace std;

int main() {

    float rad;
    int pi = 22/7;

    cout<<"Enter the radius : ";
    cin>>rad;

    float area = pi*rad*rad;

    cout<<"Area of a circle is : "<<area;

}