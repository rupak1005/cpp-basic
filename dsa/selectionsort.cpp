#include<iostream>
using namespace std;
void selectionsort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minindex])
            {
                minindex=j;
            }
            swap(a[i],a[minindex]);
        }
    }

    cout<<"sorted array";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}

int main()
{
    int n;
    int a[10];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"unsorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    selectionsort(a,n);
    
}