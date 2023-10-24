// #include<iostream>
// using namespace std;
// int main()
// {
    
//     int a[]={1,2,3,4};
//     cout<<sizeof(a)/sizeof(a[0])<<"\n";
//      int b[ 2][2 ] = { { 2 ,  4 } ,  {6, 8 } };
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++)
//         {
//             cout<<b[i][j]<<" ";
//         }
//     }
// }



// 2D array 


// #include<iostream>
// using namespace std;
 
// int main()
// {
//     // an array with 3 rows and 2 columns.
//     int x[2][3] = {{1,2,3}, {4,5,6}};
 
//     // output each array element's value
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << "Element at x[" << i << "][" << j << "]: ";
//             cout << x[i][j]<<endl;
//         }
//     }
 
//     return 0;
// }


// SORTING 


// 1.bubble sort

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
    
//     cout<<"Enter the size of array: "; cin>>n;
    
//     int a[n];
    
//     cout<<"\nEnter the elements: ";
//     for(int i=0; i<n; i++) cin>>a[i];
      
      
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++) { if(a[i]>a[j])
//             {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }

//  }
    
//     cout<<"\nArray after swapping: ";
   
//     for(int i=0; i<n; i++)
//       cout<<a[i]<<" ";
      
//     return 0;
// }

// find max min in array using function



// #include<iostream>
// #include <climits>
// using namespace std;

// int getmin(int arr[],int size)
// {
//     int Min=INT_MAX;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]<Min)
//         {
//             Min=arr[i];
            
//         }
//     }
//     return Min;
// }


// int getmax(int arr[],int size)
// {
//     int Max=INT_MIN;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]>Max)
//         {
//             Max=arr[i];
//         }
//     }
//     return Max;
// }
// int main()
// {
//     int n;
//     cout<<"enter number of elements in array"<<"\n";
//     cin>>n;

//     int a[100];
//     cout<<"enter elements"<<endl;

//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"array:"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i];
//     }
//     cout<<"max element is:"<<getmax(a,n)<<endl;
//     cout<<"min element is:"<<getmin(a,n)<<endl;

//     return 0;
// }



// #include<iostream>
// #include<climits>
// using namespace std;


// int getmax(int a[],int n)
// {
//     int maxi=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         maxi=max(maxi,a[i]);
//     }
//     return maxi;
// }

// int getmin(int a[],int n)
// {
//     int min=INT_MAX;
//     for(int i=0;i<n;i++)
//     {
//         mini=min(mini,a[i]);
//     }
//     return mini;
// }
// int main()
// {
//     int n;
//     cout<<"enter number of elements in array"<<"\n";
//     cin>>n;

//     int a[100];
//     cout<<"enter elements"<<endl;

//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"array:"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i];
//     }
//     cout<<"max element is:"<<getmax(a,n)<<endl;
//     cout<<"min element is:"<<getmin(a,n)<<endl;

//     return 0;
// }


// array scope




// #include<iostream>
// using namespace std;

// void update(int arr[], int n) {

//     cout << endl << "Inside the function" <<endl;
    
//     //updating array's first element
//     arr[0] = 120;

//     //printing the array
//     for(int i=0; i<3; i++) {
//         cout << arr[i] <<" ";
//     } cout<<endl;


//     cout << "Going back to main function" << endl;
// }


// int main() {

//     int arr[3] = {1,2,3};

//     update(arr, 3);

//     //printing the array
//     cout<< endl << "Printing in main function" << endl;
//     for(int i=0; i<3; i++) {
//         cout << arr[i] <<" ";
//     }
//     cout << endl;

//     return 0;
// }


// liner search

// #include<iostream>
// using namespace std;

// bool search(int a[],int size,int key)

// {
    
//     for(int i=0;i<size;i++)
//     {
//         if(a[i]==key)
//         {
//             return 1;
//         }
//     }
//     return 0;

// }
// int main()
// {
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     cout<<"enter key to search"<<endl;
//     int key;
//     cin>>key;
//     bool found=search(a,10,key);
//     if(found)
//     {
//         cout<<"key is found"<<endl;

//     }
//     else{
//         cout<<"key is not found"<<endl;

//     }
// }




// reverse with swap



// #include<iostream>
// using namespace std;


// void reverse(int a[],int n)
// {
//     int start=0;
//     int end=n-1;
//     while(start<=end)
//     {
//         swap(a[start],a[end]);
//         start ++;
//         end--;
//     }
// }

// void printarray(int a[],int n)
// {

//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
    
// }
// int main()
// {

//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     int b[5]={5,6,7,8,9};
//     reverse(a,10);
//     reverse(b,5);
//     printarray(a,10);
//     printarray(b,5);


// }