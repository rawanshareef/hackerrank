  
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
     vector<int> my_vec;
     stringstream ss(str);
     char ch= ','; 
     int a;
     while(ss>>a){
            my_vec.push_back(a);
            ss>>ch;
      }
return my_vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
