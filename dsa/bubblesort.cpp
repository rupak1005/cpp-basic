#include<iostream>
using namespace std;



void bubblesort(int a[],int n)
{
    bool swapped =false;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++) /*n-i for optimisation we can use n-1 also*/
        {
            if(a[j]>a[j+1])
            {swap(a[j],a[j+1]);
            swapped=true;}
        }
       if (swapped==false){
        break;

    }
    
    }
}
int main()
{
    cout<<"enter number of element in array:"<<endl;
    int n;
    int a[100];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"unsorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"sorted array:"<<endl;
    bubblesort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}