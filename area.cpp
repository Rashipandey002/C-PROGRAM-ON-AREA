#include <iostream>

using namespace std;
float area (float);
float area(float,float);
int area(int,int);
int main()
{
    int l,b;
    float r,bs,ht;
    cout<<"enter radius of circle";
    cin>>r;
    cout<<"\nenter base and height of triangle";
    cin>>bs>>ht;
    cout<<"\nenter length and breath of rectangle";
    cin>>l>>b;
    cout<<"area of circle is"<<area(r);
    cout<<"\narea of triangle is"<<area(bs,ht);
    cout<<"\narea of rectangle is"<<area(l,b);
}

    float area(float r)
    {
        return(3.14*r*r);
    }
    float area(float bs,float ht)
    {
        return((bs*ht)/2);
    }
    int area(int l,int b)
    {
        return(l*b);
    }








