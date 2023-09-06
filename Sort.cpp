#include<iostream>
using namespace std;
int main()
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, x, elem;
    cout<<"\nThe Unsorted Array:\n";
    for(x=(10-1); x>=0; x--)
        cout<<numbers[x]<<" ";
    cout<<"\n\nThe Sorted Array:\n";
    for(x=0; x<10; x++)
        cout<<numbers[x]<<" ";
    cout<<endl;
    return 0;
}