/*7) �������� ��������� ��������� ����������� ����� ���� ��������� �������
��������� ���� �� ����� �� ����� ��� �� 4 ��������(������ � ����� �������
����� ���������, � ������ � ������ - ���). ������������� � ������ ���������
�� �����������.
*/
#include <iostream>

using namespace std;

int main()
{
    int N,h,i=0,x;
    int A[N];
    cin >> N;



    for(int i; i<N; i++)
    {
    cin >> A[i];
    }

    for(i; i<N-4; i++)
    {

    for(h=i+4; h!=N; h++)

    if ((A[i] + A[h]) < x)

    x = A[i] + A[h];

    }
    cout <<x;
}

