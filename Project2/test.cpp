#include <iostream>
using namespace std;

//����a��b��c����ֵ������������ֵ��
/*int main()
{
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	if (a>b && a>c)
	{
		cout << a << endl;
	}
	else if (b>a && b>c)
	{
		cout << b << endl;
	}
	else
	{
		cout << c << endl;
	}

}
*/

//�Ӽ������볤���εĳ��Ϳ�����ó����ε��ܳ��������
/*
int main()
{
	int a;
	int b;
	cin >> a >> b;
	cout <<  2 * (a + b);
	cout <<  a * b ;
}
*/

//����һ�������¶ȣ�Ҫ����������¶ȡ�(������λС��)
/*int main()
{
	double f;
	cin >> f;
	double c= (f - 32) * 5.0 / 9.0;
	printf("%.2f\n",c);
}
*/

//��Բ�뾶r��Բ����h ��Բ�ܳ�C1��Բ���Sa��Բ������Sb��Բ�����Va��Բ�����Vb�� �������ݣ���������������ʱҪ������˵����ȡС�������λ���֡�Բ����ȡֵ3.14
/*int main()
{
	double r, h;
	cin >> r >> h;
	double pi = 3.14;
	double C1 = 2 * pi * r;
	double Sa = pi * r * r;
	double Sb = 4 * pi * r * r;
	double Va = (4.0 / 3.0) * pi * r * r * r;
	double Vb = pi * r * r * h;
	printf("C1=%.2f\n", C1);
	printf("Sa=%.2f\n", Sa);
	printf("Sb=%.2f\n", Sb);
	printf("Va=%.2f\n", Va);
	printf("Vb=%.2f\n", Vb);
}
*/
//����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ���A������B������C������D������E���� 90������ΪA 80-89��ΪB 70-79��ΪC 60-69��ΪD 60������ΪE
/*int main()
{
	int score;
	cin >> score;
	if (score >= 90)
	{
		cout << "A" << endl;
	}
	else if (score >= 80&&score<90)
	{
		cout << "B" << endl;
	}
	else if (score >= 70&&score<80)
	{
		cout << "C" << endl;
	}
	else if (score >= 60&&score<70)
	{
		cout << "D" << endl;
	}
	else
	{
		cout << "E" << endl;
	}
}
*/
/*��ҵ���ŵĽ������������ɡ�������ڻ����100000Ԫ�ģ��������10%;
 �������100000Ԫ������200000Ԫ��100000 < I��200000��ʱ������100000Ԫ�Ĳ��ְ�10����ɣ�����100000Ԫ�Ĳ��֣������ 7.5 %;
 200000 < I��400000ʱ������200000Ԫ�����԰������취��ɣ�����ͬ��������200000Ԫ�Ĳ��ְ�5����ɣ�
	400000 < I��600000Ԫʱ������400000Ԫ�Ĳ��ְ�3����ɣ�600000 < I��1000000ʱ������600000Ԫ�Ĳ��ְ�1.5 % ��ɣ�
	I>1000000ʱ������1000000Ԫ�Ĳ��ְ�1 % ��ɡ��Ӽ������뵱������I, ��Ӧ������������

	�����ʽ
	һ����������������

	�����ʽ
	һ������������
	*/
/*int main()
	{
		int I;
		cin >> I;
		double bonus ;
		if (I <= 100000)
		{
			bonus = I * 0.1;
		}
		else if (I <= 200000&&I>100000)
		{
			bonus = 100000 * 0.1 + (I - 100000) * 0.075;
		}
		else if (I <= 400000&&I>200000)
		{
			bonus = 100000 * 0.1 + 100000 * 0.075 + (I - 200000) * 0.05;
		}
		else if (I <= 600000&&I>400000)
		{
			bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (I - 400000) * 0.03;
		}
		else if (I <= 1000000&&I>600000)
		{
			bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (I - 600000) * 0.015;
		}
		else
		{
			bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (I - 1000000) * 0.01;
		}
		printf("%.0f\n", bonus);
	}
	*/


/*int main()
	{
		int a, b;
		cin >> a >> b;
		if (a > b)
		{
			cout << a << b;
		}
		else
		{
			cout << b << a;
		}
	}
	*/

	//����һ��������5λ��������Ҫ�� 1��������Ǽ�λ�� 2���ֱ����ÿһλ���� 3�������������λ����
/*int main()
{
	int a;
	cin >> a;
	int b, c, d, e, f;
	if (a >= 10000)
	{
		cout << 5 << endl;
	}
	else if (a >= 1000 && a < 10000)
	{
		cout << 4 << endl;
	}
	else if (a >= 100 && a < 1000)
	{
		cout << 3 << endl;
	}
	else if (a >= 10 && a < 100)
	{
		cout << 2 << endl;
	}
	else
	{
		cout << 1 << endl;
	}
	b = a / 10000;
	c = (a - b * 10000) / 1000;
	d = (a - b * 10000 - c * 1000) / 100;
	e = (a - b * 10000 - c * 1000 - d * 100) / 10;
	f = (a - b * 10000 - c * 1000 - d * 100 - e * 10);
	cout << b << " " << c << " " << d << " " << e << " " << f << endl;
	cout << f << e << d << c << b << endl;

}
*/
/*int main()
{
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	printf("%.2f\n", distance);
}
*/




//��Sn=a+aa+aaa+��+aa��aaa����n��a��ֵ֮������a��һ�����֡����磺2+22+222+2222+22222��n=5����n�ɼ������롣�ٶ�aΪ2.
/*int main()
{
	int n;
	cin >> n;
	int a = 2;
	int sum = 0;
	int term = 0;
	for (int i = 1; i <= n; i++)
	{
		term = term * 10 + a;
		sum = sum + term;
	}
	cout << sum << endl;
}
*/

//��������������m��n���������Լ������С��������
/*
int main()
{
	int m, n;
	cin >> m >> n;
	int a = m;
	int b = n;
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	int gcd = a; 
	int lcm = m * n / gcd; 
	cout << gcd << endl;
	cout << lcm << endl;
}
*/

//��Sn=1!+2!+3!+4!+5!+��+n!ֵ֮������n��һ�����֡�

/*
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;      
		sum += fact;    
	}
	cout << sum << endl;
}
*/

//�������������ĺͣ��������2λС�����������ֱ��ǣ� 1~a֮�͡� 1~b��ƽ���͡� 1~c�ĵ�����,���У�a��b��c��Ϊ��������
/*
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	double sum1 = 0;
	double sum2 = 0;
	double sum3 = 0;
	for (int i = 1; i <= a; i++)
	{
		sum1 += i;
	}
	for (int i = 1; i <= b; i++)
	{
		sum2 += i * i;
	}
	for (int i = 1; i <= c; i++)
	{
		sum3 += 1.0 / i;
	}
	double sum = sum1 + sum2 + sum3;
	printf("%.2f\n", sum);
}
*/

//��ӡ������"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸñ���
/*int main()
{
	for (int i = 100; i <= 999; i++)
	{
		int a = i / 100;
		int b = (i / 10) % 10;
		int c = i % 10;
		if (i == a * a * a + b * b * b + c * c * c)
		{
			cout << i << endl;
		}
	}
}
*/


//���10��1000֮����ͬʱ��2��3��7�����������������ÿ��һ��
/*int main()
{
	for (int i = 10; i <= 1000; i++)
	{
		if (i % 2 == 0 && i % 3 == 0 && i % 7 == 0)
		{
			cout << i << endl;
		}
	}
}
*/


//��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰN��֮�ͣ�����N�ɼ������롣
/*int main()
{
    int N;
    cin >> N;
    double sum = 0.0;
    double numerator = 2.0, denominator = 1.0;
    for (int i = 1; i <= N; i++)
    {
        sum += numerator / denominator;
        double temp = numerator;
        numerator = numerator + denominator;
        denominator = temp;
    }
    printf("%.2f\n", sum);
}
*/

//ɸѡ��N���ڵ�������N�ɼ������롣
/*int main()
{
	int N;
	cin >> N;
	for (int i = 2; i <= N; i++)
	{
		bool isPrime = true;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			cout << i << endl;
		}
	}
}
*/
