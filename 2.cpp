/*2) �������� ��������� ��������� �������� �� ������ �������. ����� ������
�� ������ X � N ����� ����� ����� ����� Y, ��� ������� �� ������� X*Y �� N
��������� �������. � ��������� �������������, ��� ��� ����� - �����������*/
#include <iostream>

using namespace std;
int main()
{
    int x,y,n;
    int m;
    bool f=false;

    cin >> x >> n;

    for (y=0; y<x*n; y++)
    {
    m = y*x;
    if (m%n == 1)
    {
    f = true;
    }

    if (f == true)
        break;

    }
    if (f == true)
    cout<< y;
    else cout << "None";
    return 0;
}

