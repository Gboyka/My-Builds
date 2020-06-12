#include<bits/stdc++.h>

using namespace std;

int m=5;
void subset(int n)
{
    static vector<int> sub;
if(n==m+1)
{
    for(int i=0;i<sub.size();i++)
           cout<<sub[i]<<" ";
    
    cout<<"\n";
}
 else{   
    sub.push_back(n);
    subset(n+1);
    sub.pop_back();
    subset(n+1);
    }
}

int main()
{

subset(1) ;  
    
}