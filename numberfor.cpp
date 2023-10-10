#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a four-digit number: ";
	cin>>x;
    int y,d,s,h;
    h = x/1000;
    s = (x/100)%10;
    d = (x/10)%10;
    y = x%10;
    if(x > 999 and x <= 9999)
    {
        cout<<"$$$$$$$$$$$$$$$"<<endl;
        if(h == 1)
        {
             cout<<"one thousand "<<"and ";
        }
        
        if(h == 2)
        {
             cout<<"Two thousand "<<"and ";
        }
        
        if(h == 3)
        {
             cout<<"three thousands "<<"and ";
        }
        
        if(h == 4)
        {
             cout<<"four thousand "<<"and ";
        }
        
        if(h == 5)
        {
             cout<<"five thousand "<<"and ";
        }
        
        if(h == 6)
        {
             cout<<"six thousands "<<"and ";
        }
        
        if(h == 7)
        {
             cout<<"seven thousand "<<"and ";
        }
        
        if(h == 8)
        {
             cout<<"Eight thousand "<<"and ";
        }
        
        if(h == 9)
        {
             cout<<"nine thousands "<<"and ";
        }
        
        if(s == 1)
        {
             cout<<"One hundred "<<"and ";
        }
        
        if(s == 2)
        {
             cout<<"two hundred "<<"and ";
        }
        
        if(s == 3)
        {
             cout<<"three hundred "<<"and ";
        }
        
        if(s == 4)
        {
             cout<<"four hundred "<<"and ";
        }
        
        if(s == 5)
        {
             cout<<"five hundred "<<"and ";
        }
        
        if(s == 6)
        {
             cout<<"six hundred "<<"and ";
        }
        
        if(s == 7)
        {
             cout<<"seven hundred "<<"and ";
        }
        
        if(s == 8)
        {
             cout<<"eight hundred "<<"and ";
        }
        
        if(s == 9)
        {
             cout<<"nine hundred  "<<"and ";
        }
        
        if(d == 1)
        {
             cout<<"ten  "<<"and ";
        }
        
        if(d == 2)
        {
             cout<<"twenty  ";
        }
        
        if(d == 3)
        {
             cout<<"thirty  ";
        }
        
        if(d == 4)
        {
             cout<<"forty  ";
        }
        
        if(d == 5)
        {
             cout<<"fifty  ";
        }
        
        if(d == 6)
        {
             cout<<"sixty  ";
        }
        
        if(d == 7)
        {
             cout<<"seventy  ";
        }
        
        if(d == 8)
        {
             cout<<"eighty  ";
        }
        
        if(d == 9)
        {
             cout<<"ninety  ";
        }
        
        if(y == 1)
        {
             cout<<"one";
        }
        
        if(y == 2)
        {
             cout<<"two";
        }
        
        if(y == 3)
        {
             cout<<"three";
        }
        
        if(y == 4)
        {
             cout<<"four";
        }
        
        if(y == 5)
        {
             cout<<"five";
        }
        
        if(y == 6)
        {
             cout<<"six";
        }
        
        if(y == 7)
        {
             cout<<"seven";
        }
        
        if(y == 8)
        {
             cout<<"eight";
        }
        
        if(y == 9)
        {
             cout<<"nine";
        }
        cout<<"\a";
    }
    else
    {
        cout<<"Error"<<"\a"<<"\a";
    }

    getch();
    return 1;
} 
