#include<iostream>
using namespace std;

int binarysearch(int a[],int n,int key)
{
    int start =0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(a[mid]==key){
            return mid;
        }
        if(key>a[mid])
        {
            start=mid+1;
            
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){


    int even[6]={1,2,3,4,5,6};
    cout<<"array1:"<<even<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<even[i];
    }
    cout<<endl;
    int odd[5]={3,4,5,6,7};
    cout<<"array2:"<<odd<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<odd[i];
    }
    cout<<endl;
    
    int k1,k2;
    cout<<"enter element to search in array 1"<<endl;
    
    cin>>k1;
    cout<<"enter element to search in array 2"<<endl;
    cin>>k2;
    int evenindex=binarysearch(even,6,k1);
    int oddindex=binarysearch(odd,5,k2);
    cout<<"index of element: "<<evenindex<<endl;
    cout<<"index of element:"<<oddindex<<endl;
}