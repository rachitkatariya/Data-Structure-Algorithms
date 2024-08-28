#include<iostream>
#include<cstring>
using namespace std; 

int main(){

    char word[100];
    cin.getline(word,100);

    cout << "Your word was : " << word << endl;
    cout << "length : " << strlen(word) << endl;
}