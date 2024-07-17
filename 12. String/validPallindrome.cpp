#include<iostream>
#include<cstring>
using namespace std; 

bool isPallindrome (char str[], int n){
    int st=0, end =  n-1;
    while(st < end){
        if(str[st++] != str[end--]){
            cout << "not valid pallindrome";
            return false;
        }
    }
    cout << "valid pallindrome ";
    return true;
}

int main(){
    char word[] = "racecar";
    isPallindrome(word, strlen(word));
    return 0;
} 