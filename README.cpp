


# jija
#include <iostream>

using namespace std;

int main()
{
int a=0, i=0;
while (i==0)
{
cin >> a;
if (a==1)
    {
   cout <<(a)<< ":Unit" <<endl;
    }
   else
if (a==2 or a==3 or a==7 or a==5)
{
cout <<(a)<< ":Prime" <<endl;
i=0;
}
else
    if (a%2==0 or a%3==0 or a%5==0 or a%7==0)
{
cout <<(a)<< ":Composite"<<endl;
i=0;
}
else
{
cout <<(a)<< ":Prime" <<endl;
i=0;
}
}
return 0;
}
