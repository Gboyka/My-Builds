#include<bits/stdc++.h>

using namespace std;

void swap(int *x,int *y)
{
            int temp=*x;
            *x=*y;
            *y=temp;
        
}

void heapify(int ar[],int n,int i)
{
    int min=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n and ar[l]<ar[min])
        min=l;
    
    if(r<n and ar[r]<ar[min])
        min=r;
        
    if(min!=i)
    {
        swap(ar[i],ar[min]);

        heapify(ar,n,min);
    }


}



int main()
{

int len=10;

int ar[]={4,3,6,1,7,8,5,9,2,10};

for(int i=(len/2)-1;i>=0;i--)
    heapify(ar,len,i);


for(int i=len-1;i>=0;i--)
{
    swap(&ar[i],&ar[0]);

    heapify(ar,i,0);


}   

for(int i=0;i<10;i++)
    cout<<ar[i]<<" ";

}