// File handling - it is used to store permanently data on the disk 

// How to create and write a file on disk by using constructor

/* 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ofstream myfile("file-handling.txt");
char name[20];
float cost;

cout<<"Enter the name";
cin>>name;

cout<<"Enter the cost";
cin>>cost;

myfile<<name;
myfile<<cost;
myfile.close();

} */

// Creating a file using open ()

/* 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream myfile;
    
    myfile.open("file.txt"); // only change is here  

    char name[20];
    float cost;

    cout<<"Enter the name";
    cin>>name;

    cout<<"Enter the cost";
    cin>>cost;

    myfile<<name;
    myfile<<cost;

    myfile.close();

}

 */


// Reading a file using constructor

/* 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream objf("file.txt");

    char name[20];
    float cost;

    cin>>name;
    cin>>cost;

    cout<<"File content are as follows"<<endl;
    cout<<name<<endl;
    cout<<cost<<endl;

    objf.close();

} */


// Reading a file using open function

/* 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream obj;
    obj.open("file.txt");

    char name[20];
    float cost;

    cin>>name;
    cin>>cost;

    cout<<"Content are as follows"<<endl;
    cout<<name<<endl;
    cout<<cost<<endl;
    obj.close();
    
} */
