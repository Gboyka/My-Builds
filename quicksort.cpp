#include <bits/stdc++.h>

using namespace std;



void swap(int *x,int *y)
{
            int temp=*x;
            *x=*y;
            *y=temp;
        
}

int partition(int ar[],int l, int r)
{
    int i=l-1;
    int pi=r;
    
    int j=l;
    
    while(j<pi)
    {
        if(ar[pi]>ar[j])
        {
            i++;
            swap(&ar[i],&ar[j]);
            
            j++;
            
        }
        else
            j++;
    }
    
    swap(&ar[i+1],&ar[pi]);
   
    return i+1;
    
}

void quickSort(int ar[],int i,int j)
{
    if(i<j){
 	  int piv= partition(ar,i,j);

   
    quickSort(ar,i,piv-1);
 

    quickSort(ar,piv+1,j);
    }

}



int main() 
{
  
	   int len=10;
	   
	    int ar[len];
	    
        for(int i=0;i<len;i++)
	    cin>>ar[i];
	    
	    quickSort(ar,0,9);
      
	    for(auto i:ar)
            cout<<i<<" ";

    
    
}