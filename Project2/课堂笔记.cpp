//����С���ķ���:
#include <iomanip>
#include <iostream>
using namespace std;
/*int main()
{

    double k = 0.123456;
    //���������Ǹ�����
    //ǰ����������ȫ�֣����һ��ֻ������һ������
    cout << setiosflags(ios::fixed) << setprecision(2) << endl;

    cout.setf(ios::fixed);
    cout << setprecision(2) << endl;

    cout << fixed << setprecision(2) << endl;

    printf("%.3f", k);
}
*/


//ָ��:
/*
1.ȡַ��:&
double <<a;
cout <<&a; //�����a�ĵ�ַ(Ҳ��ָ��)
2.��ַ��:*
cout <<*(&a);
//��ʾ����a�ĵ�ַ��ָ�Ķ��󣬼�����a
3.����ָ��: int *
int *a;    //��ʱa������ǵ�ַ
int p=55;
a=&p;      //��ʱa�������p�ĵ�ַ
cout <<a;  //���p�ĵ�ַ
cout <<*a; //���"55"
a++;
//��ָ������һλ����ʱa����p���һλ���ڴ�ĵ�ַ
//ͬ������double *a; ������ָ��
4.��ָ��
char *s=0;
double *p=NULL;
*/

//����: *
/*
�﷨: ���� &������ = ������;
int a;
int &A=a;
//��ʱ����a�����������֣�a��A
���A�������aЧ��һ��
*/

//����
/*
1.  const int p = 1;    //��ֵ
2.  const int *p;       //��ֵ
    int const *p;       //��ֵ
3.  int *const p;       //����ַ
4.  const int *const p; //��ֵ�͵�ַ
    int const *const p; //��ֵ�͵�ַ

*/

//����
/*
int a =10
cout<<oct<<a; //����˽�����12
cout<<dec<<a; //���ʮ������10
cout<<hex<<a; //���ʮ��������a
*/

//��ѧ
/*
��ͷ�ļ�#include <cmath>
ƽ����      sqrt()
����ֵ      abs()
�����;���ֵ fabs()
������      pow (����, ָ��)
*/


