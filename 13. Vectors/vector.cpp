#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4};
    cout << "size : " <<vec.size() << endl;
    cout << "capacity : " << vec.capacity() << endl;
   
    vec.push_back(5);
    cout << "size : " <<vec.size() << endl; // 5
    cout << "capacity : " << vec.capacity() << endl; // 8

    // vec.pop_back() for deleting the element 
   // and the capacity of vector is still remain as it is. but the size will change.
}