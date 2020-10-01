#include<iostream>
#include<conio.h>

using std::cout;
using std::cin;
int main()
{
    int a, b,max;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    max=a>b?a:b;
    
    cout<<max<<" is a largest number";

    getch();
    return 0;
}
