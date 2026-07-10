#include <iostream>
using namespace std;

//已修
void sort(int* arr,int size)
{
    int tmp=0;
    for(int i = 1;i<size;i++)
    {
        for(int j = 1;j<=size-i;j++)
        {
            //电脑修改从大到小排序
            if(arr[j-1]<arr[j])
            {
                tmp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=tmp;
            }
        }
    }
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
