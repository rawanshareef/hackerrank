#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
  vector<int > help;  
 int x;//The value at this position in the vector needs to be erased
 int a,b;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
       cin>>x;
        help.push_back(x);
    }
       cin>>x;
help.erase(help.begin()+x-1);    
     cin>>a>>b;
    help.erase(help.begin()+a-1,help.begin()+b-1);  
    cout<<help.size()<<endl;

for(size_t i=0;i<help.size();i++){
   cout<<help[i]<<" ";
}
    
    
    
    return 0;
}


