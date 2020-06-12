#include<bits/stdc++.h>

using namespace std;

vector<int> perm;
int n=3;
bool chosen[4];

void search()
{
if(perm.size()==n)
{
    for(auto x:perm)
    cout<<x<<" ";

    cout<<'\n';

}

else
{
    for(int i=1;i<=n;i++)
    {
        if(chosen[i]) continue;
        chosen[i]=true;
        perm.push_back(i);
        search();
        chosen[i]=false;
        perm.pop_back();
    
    }
}

}

void inbuiltPermutation()
{
//vector<int> ar{1,2,3,4,5,9,4,8,4,78,4,5,8,4,2,9,7,4,45,1,7,8,4,2,4,8,4,21,2,5,4,21,5,5,9,4,4,5};
string ar="1432219";
int a=stoi(ar);
do
{
    int x=stoi(ar);
    if(x>=a)
    a=x;
  // cout<<x<<'\n';
    

}while(next_permutation(ar.begin(),ar.end()));
cout<<a<<"\n";
}



int main()
{

inbuiltPermutation();
//search();
return 0;

}