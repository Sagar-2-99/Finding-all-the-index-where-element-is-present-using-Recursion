#include <iostream>

using namespace std;

int findall(int b[],int a,int c,int x,int y)
{
    if(a==0)
    {
        return x;
    }
    else if(b[0]==c)
    {
        cout<<"The element is at: "<<y-a<<endl;
        return findall(b+1,a-1,c,x+1,y);
    }
    else
    {
        return findall(b+1,a-1,c,x,y);
    }
}


int main()
{
    int a;
    cout<<"Enter the size of the array you want"<<endl;
    cin>>a;
    int b[a];
    for(int i=0; i<a; i++)
    {
        cout<<"Enter the element for the index: "<<i<<endl;
        cin>>b[i];
    }
    cout<<"Enter the element you want to search for: "<<endl;
    int c;
    cin>>c;
    int x=0;
    int d=findall(b,a,c,x,a);
    if(d==0)
    {
        cout<<"Sorry element is not present"<<endl;
    }
}
