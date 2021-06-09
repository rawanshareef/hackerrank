
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int>s; //Creates a set of integers.
    int x,y;
int num_of_queries;
    cin>>num_of_queries;
    for(int i=0;i<num_of_queries;i++)
    {
        cin>>x;
          cin >>y;

        if(x==1){
         s.insert(y);
        }        
        else if(x==2){
             s.erase(y);
         }
            
       else{
          set<int>::iterator itr=s.find(y);
         if (itr == s.end())
         
               cout<<"No"<<endl;
         
        else
           cout<<"Yes"<<endl;   
            
          }                            
      }
    return 0;
}



