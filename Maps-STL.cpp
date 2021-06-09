#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string,int> grades;
    int num_of_students;
    string X;
    int Y;
    int q;
    cin>>num_of_students;
    for(int i=0;i<num_of_students;i++){
        cin>>q;
        if(q==1){
            cin>>X;
            cin>>Y;
          grades[X]+=Y;
        }
        else if(q==2){
            cin>>X;
            grades.erase(X);
        }
        else{
            cin>>X;
            map<string,int>::iterator itr=grades.find(X);
             if(itr==grades.end()){
                 cout<<0<<endl;
             }
            else{
                cout<<grades[X]<<endl;
            }
        }
       
    }
    return 0;
}
