#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp; }

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
    insertionsort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}