#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int N;
    cin>>N;
    vector<int> help;
    for(int i=0;i<N;i++){
        int z;
        cin>>z;
        help.push_back(z);
    }
    int Q;
        int y;
vector<int>::iterator low,up;
    cin>>Q;
    for(int i=0;i<Q;i++){
        cin>>y;
         low=lower_bound (help.begin(), help.end(), y);        
         if(y==*low){
             cout<<"Yes"<<" "<<(low-help.begin()+1)<<endl;
         }
        else{
                         cout<<"No"<<" "<<(low-help.begin()+1)<<endl;

        }
        
    }
    return 0;
}
