/*4) �������� ��������� ��������� � ������� ����� ��������� ��������� ����
�� 72 ���� �� 27(�� ������).*/
#include <iostream>

using namespace std;

int main()
{
    int N;
    int i=0;
    int q=0;
    cin >> N;
    int A[N];
    for (i; i<N; i++)
    {
    cin >> A[i];
    if (A[i]%27==0 and A[i]%72==0)
    {
        A[i]=3;
    }
    else
    {
    if (A[i]%27==0 or A[i]%72==0)
        {
     q = q+A[i];
        }
    }
    }
    cout <<q;
    return 0;
}
