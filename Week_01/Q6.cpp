#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int max(int a, int b,int c,int d) {
       
        int max = a;

        if(b>max){
            max = b;
        }
        if(c>max){
            max = c;
        }
        if(d>max){
            max = d;
        }
        return max;

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max(a,b,c,d)<<endl;
    return 0;
   
}
   
    
    

