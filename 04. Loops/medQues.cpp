#include <iostream>
using namespace std;

int main()
{



   // Print the sum of digits of a numbers using while loop.
   
   
   /* 
   int n = 10829;
   int digSum = 0;
   while(n > 0) {
      int lastDigit = n%10;
      digSum += lastDigit;
      n = n / 10;
   }
   cout<<"Sum = "<<digSum << endl;
 */



   
   // Print the sum of odd digits of a number using while loop.



/* 
   int n = 10829;
   int digSum = 0;
   while(n > 0) {
      int lastDigit = n%10;
      if(lastDigit % 2 != 0){
         digSum += lastDigit;
      }
      
      n = n / 10;
   }
   cout<<"Sum = "<<digSum << endl;
 */




   // Print the digits of a given numbers in reverse using while loop.


/* 
   int n = 12345;

   while(n > 0) {
      int lastDig = n % 10;
      cout<<lastDig<<" ";
      n /= 10;                // n = n / 10;  
   }
 */



   // Reverse a given number and print the result.

   int n = 10829;
   int res = 0;

   while (n > 0)
   {
      int lastDig = n % 10;
      res = res * 10 + lastDig;
      n = n / 10;
   }

   cout<<"reverse : " << res<<" "<<endl;
   

  return 0; 
}