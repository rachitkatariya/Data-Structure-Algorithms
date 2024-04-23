/* 
Question 2 : Enter cost of 3 items from the user (using float data type) 

- a pencil, a pen and an eraser. You have to output the total cost of the items back to the user as their bill.

(Add on : You can also try adding 18% GST tax to the items in the bill as an advanced problem)

 */

#include<iostream>
using namespace std;

int main() {
    
    float penCost, pencilCost, eraserCost;

    cout<<"Enter the price of Pen, Pencil & Erased : ";
    cin>> penCost >> pencilCost >> eraserCost;

    float totalCost = penCost + pencilCost + eraserCost;
    float total_GST = totalCost + ( 0.18 * totalCost);

    cout<<"Total Cost : "<<totalCost <<endl;
    cout<<"Total cost with GST : "<<total_GST;

}