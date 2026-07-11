#include <iostream>
#include <algorithm>
using namespace std;

//已修
void sort(int* arr,int size)
{
    std::sort(arr,arr+size);
    for(int i = 0;i<size;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[]={1,5,2,9,11,2321,6};
    sort(arr,7);
    cout<<"我改了"<<endl;
    return 0;
}
