#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;


int merge(int *ar,int i,int mid,int j)
{   
    int count=0; 
   int n1=mid-i+1;
   int n2=j-mid;
  
   int left[n1],right[n2];

    for(int c=0;c<n1;c++)
        left[c]=ar[c+i];
    for(int c=0;c<n2;c++)
        right[c]=ar[mid + 1+c];

     int m=0;
     int n=0;
     int k=i;   
   
    
    while(m<n1 and n<n2)
        {
            if(left[m]<=right[n])
                {
                   ar[k]=left[m]; 
                    m++;
                    
                }
            else

            {
                   ar[k]=right[n];
                    n++;
                    count=count+n1-m;
            }
        k++;
       }
while(m<n1)
    ar[k++]=left[m++];

while(n<n2)
    ar[k++]=right[n++];
       
    return count; 
        
}

int mergesort(int *ar,int i,int j)
{int count=0;
       if(i<j)
   {
        int mid=(i+j-1)/2;

    count+=   mergesort(ar,i,mid);
      count+=  mergesort(ar,mid+1,j);

     count+= merge(ar,i,mid,j);    
   }
       
return count;
}


int main() {


        int len=10;
           
       
        int ar[]={5,4,3,2,1,8,6,9,11,12};
       
  
        
     int count=mergesort(ar,0,len-1);
  
       //
      // cout<<count ;
           cout<<count<<"\n";    
      for(auto r:ar)
        cout<<r<<" ";
        
    
   

}