// Function is a block of code which can perform some specific task.

#include<iostream>
using namespace std;

void sayHello() {                    // Declaration
    cout<<"Hello :)"<<endl;         // Defination
}


void assistant() {
    sayHello();
    cout<<"Work Done";
}

int main() {

    assistant(); // function call
}

/* 

------ WORKING FLOW OF FUNCTIONS-----

Step 1 : main func will call assistant()

Step 2 : In assistant func sayHell() will call and execute task.

Step 3 : After that assistant func will execute own task.

Step 4 : At the end main funtion will execute all the functions.

 */