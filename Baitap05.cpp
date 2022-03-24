#include <iostream>

using namespace std;

int main()
{
    int a[]={1,2,3,4,5};
    char b[]={'a','b','c','d','e'};
    cout<<"Trong mang a: ";
    cout << (void *)&a[0]<<"\n"<<(void *)&a[1]<<endl<<(void *)&a[2]<<endl;
    cout<<"Trong mang b: "<<(void *)&b[0]<<endl<<(void *)&b[1]<<endl<<(void *)&b[2];
    return 0;
}

