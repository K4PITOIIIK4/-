#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

void factorization(int n);

int main()
{
	setlocale(LC_ALL, "RUS");

	//1+
	/*cout << "��������� ���������� ��������� 2+2*2=" << 2 + 2 * 2;*/

	//2+
	/*int a = 3, b = 3.14;
	double c = 3, d = 3.14;
	cout << "int:" << a << " " << b << endl;
	cout << "double:" << c << " " << d << endl;*/

	//3+
	/*int a, b;
	cout << "������� �������� a � b ����� ������" << endl;
	cin >> a >> b;
	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	cout << a << "/" << b << "=" << a / b;*/

	/*double a, b;
	cout << "������� �������� a � b ����� ������" << endl;
	cin >> a >> b;
	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	cout << a << "/" << b << "=" << a / b;*/

	/*int a;
	double b;
	cout << "������� �������� a � b ����� ������" << endl;
	cin >> a >> b;
	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	cout << a << "/" << b << "=" << a / b;*/

	/*int b;
	double a;
	cout << "������� �������� a � b ����� ������" << endl;
	cin >> a >> b;
	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	cout << a << "/" << b << "=" << a / b;*/

	//4+
	/*int a = 1, b = 2, c = 3, d = 4, t;
	cout << a << b << endl;
	t = a;
	a = b;
	b = t;
	cout << a << b << endl;
	cout << c << d << endl;
	c = c ^ d;
	d = d ^ c;
	c = c ^ d;
	cout << c << d;*/

	//5+
	/*double g = -9.8, x, v, t, a, c, n;
	a = g;
	cout << "������� �������� X0, V0 � T ����� ������" << endl;
	cin >> x >> v >> t;
	c = x + v * t + a * t*t / 2;
	n = x + v * t + 1 / 2 * a*t*t;
	cout << "��������� ������� �������� ����������:" << c << endl;
	cout << "��������� ������� �������� ����������:" << n;*/

	//6+
	/*double a, b, c, d, x_1, x_2;
	cout << "������� �������e a:";
	cin >> a;
	cout << "������� �������e b:";
	cin >> b;
	cout << "������� �������e c:";
	cin >> c;
	if ((a == 0) && (b == 0))
	{
		if (c != 0)
		cout << "��� �������";
		else
	    cout << "���������� ����� �������";
		cin.get();
		cin.get();
		exit;
	}
	else
	if ((b == 0) && (c == 0))
	{
		cout << "x1=0";
		cin.get();
		cin.get();
		exit;
	}
	else
	if ((a == 0) && (c == 0))
	{
		cout << "x1=0";
		cin.get();
		cin.get();
		exit;
	}
	else
	if (a == 0)
	{
		x_1 = -c / b; 
		cout << "x1=" << x_1;
		cin.get();
		cin.get();
		exit;
	}
	else
	if (b == 0)
	{
		x_1 = -c / a;
		if (x_1 > 0)
		{
			x_1 = sqrt(x_1);
			x_2 = x_1 * -1;
			cout << "x1=" << x_1 << endl;
			cout << "x2=" << x_2 << endl;
		}
		else
			cout << "��� �������";
		cin.get();
		cin.get();
		exit;
	}
	else
	if (c == 0)
	{
		x_1 = 0;
		x_2 = -b / a;
		cout << "x1=" << x_1 << endl;
		cout << "x2=" << x_2 << endl;
		cin.get();
		cin.get();
		exit;
	}
	else
	d = b * b - 4 * a*c;
	if (d > 0)
	{
		x_1 = ((-b + sqrt(d)) / (2 * a));
		x_2 = ((-1 * b - sqrt(b*b - 4 * a*c)) / (2 * a));
		cout << "x1=" << x_1 << endl;
		cout << "x2=" << x_2 << endl;
	}
	else
	if (d == 0)
	{
		x_1 = (-b) / (2 * a);
		cout << "x1=" << x_1 << endl;
	}
	else
	{
		cout << "��� ������";
	}*/

	//7+
	/*double A, B, C, x1, x2, x3, y1, y2, y3, S, t, p, v1, v2, v3, v4;
	cout << "������� ������ ���������� ������� ������������ (1-����� ������, 2-���������� ������)" << endl;
	cin >> t;
	if (t == 1)
	{
		cout << "������� ����� ������ A, B, C ����� ������" << endl;
		cin >> A >> B >> C;
		if (((A <= 0) || (B <= 0) || (C <= 0)) || ((A + B < C) || (A + C < B) || (B + C < A)))
		{
			cout << "�������� ������";
			cin.get();
			cin.get();
			exit(1);
		}
		p = (A + B + C) / 2;
		S = sqrt(p*(p - A)*(p - B)*(p - C));
		cout << "������� ������������:" << S;
	}
	else
		if(t==2)
		{
			cout << "������� ���������� ������ ����� ����� ������" << endl;
			cin >> x1 >> y1;
			cin >> x2 >> y2;
			cin >> x3 >> y3;
			v1 = x1 - x3;
			v2 = x2 - x3;
			v3 = y1 - y3;
			v4 = y2 - y3;
			S = (v1 * v4 - v3 * v2) / 2;
			if (S < 0)
			{
				S = S * -1;
			}
			cout << "������� ������������:" << S;
		}
		else
		{
			cout << "error";
		}*/

	//8+
	/*double a, b, c;
	char m = '@';
	cout << "������� ������ ��� ����������" << endl;
	cin >> a >> m >> b;
	if (m == '+')
		c = a + b;
	else
		if (m == '-')
			c = a - b;
		else
			if (m == '*')
				c = a * b;
			else
				if (m == '/')
				{
					if (b == 0)
					{
						cout << "������";
						cin.get();
						cin.get();
						exit;
					}
					c = a / b;
				}
	cout << "�����:" << c << endl;*/

	//9+
	/*int a, b, c, m = 5;
	do
	{
		int d = 5;
		cout << "����� ��������, ����������� ��� ��������, � ��� " << d << " �������" << endl;
		srand(time(0));
		a = rand() % 101;
		for (int i = 0; i < m+1; i++, d--)
		{
			cin >> b;
			if ((d == 0) && (b != a))
			{
				cout << "�� �� ������ �������, ��������� ������ ����:" << a << endl;
				break;
			}
			else
			if (b < a)
				cout << "�����������, ����� ������, ���������� ��� ���, � ��� " << d << " �������" << endl;
			else
				if (b > a)
					cout << "�����������, ����� ������, ���������� ��� ���, � ��� " << d << " �������" << endl;
				else
					if (b == a)
					{
						cout << "���������, �� �������!";
						break;
					}
		}
		cout << "������ ���������? 1-��, 2-���" << endl;
			cin >> c;
			system("cls");
	} while (c == 1);*/

	//10+
	/*int a, b;
	double c = 1;
	cout << "������� ����� � ������� � ������� ������ ��� �������� ����� Enter." << endl;
	cin >> a;
	cin >> b;
	if (b > 0)
	{
		for (int i = 0; i < b; i++)
			c = c * a;
		cout << "�����:" << c;
		cin.get();
		exit(1);
	}
	else
		if (b == 0)
		{
			cout << "�����:1";
			cin.get();
			exit(1);
		}
		else
			if (b < 0)
			{
				b = abs(b);
				for (int i = 0; i < b; i++)
				{
					c = c * a;
				}
				if (c == 0)
				{
					cout << "������";
					cin.get();
					exit(1);
				}
				c = 1.0 / c;
				cout << "�����:" << c;
				cin.get();
				cin.get();
				exit(1);
			}*/

	//11+
	/*int a, b = 1;
	cout << "������� ����� ��� ���������� ����������" << endl;
	cin >> a;
	for (int i = 1; i < a + 1; i++)
		b = b * i;
	cout << "�����:" << b;*/

	//12+
	/*double b;
	int a;
		cout << "������� �����" << endl;
		cin >> a;
		if (a == 1)
		{
			cout << "���������";
			cin.get();
			cin.get();
			exit;
		}
		if (a == 2)
		{
			cout << "�������";
			cin.get();
			cin.get();
			exit;
		}
		for (int i = 2; i < a; i++)
		{
			b = a % i;
			if (b == 0)
			{
				cout << "���������" << endl;
				cin.get();
				cin.get();
				exit;
			}
		}
			cout << "�������" << endl;*/

	//13
	/*double a;
	int b = 0, c = 0;
	cout << "������� �����" << endl;
	cin >> a;
	for (int i = 0; i < a + 1; i++)
	{
		b = 2 * i;
		if (b <= a)
			c++;
	}
	cout << "�����:" << c;*/

	//14/1+
	/*int a, b1, c1, b2, c2, i, j, m, n, b1_1, c1_1, b2_2, c2_2, h, k = 10000, l = 10000;
	cout << "������� ����� � ��������� ����� ����� ������" << endl;
	cin >> a >> b1 >> c1 >> b2 >> c2;
	b1_1 = b1;
	c1_1 = c1;
	b2_2 = b2;
	c2_2 = c2;
	for (n = 1; b1_1 < c1_1; n++, b1_1++);
	for (m = 1; b2_2 < c2_2; m++, b2_2++);
	int *mass_1 = new int[n];
	int *mass_2 = new int[m];
	b1 = b1;
	b2 = b2 + 1;
	for (int c = 0; c <= n; c++, b1++)
	{
		mass_1[c] = b1;
	}
	for (int t = 0; t <= n; t++, b2++)
	{
		mass_2[t] = b2;
	}
	for (int y = 0; y < n; y++)
	{
		for (int u = 0; u < m; u++)
		{
			h = mass_1[y] + mass_2[u];
			if (h == a)
			{
				if (mass_1[y] < k)
				{
					k = mass_1[y];
					l = mass_2[u];
				}
			}
		}
	}
	if (k != 10000)
		cout << k << " " << l;
	else
		cout << "-1";*/

	//14/2+
	/*int a, a1, a2, b1, b2, m, k = 10000, l, q;
	cin >> a;
	cin >> a1 >> a2 >> b1 >> b2;
	q = b1;
	for (; a1 <= a2; a1++)
	{
		for (b1 = q; b1 <= b2; b1++)
		{
			m = a1 + b1;
			if ((m == a) && (a1 < k))
			{
				k = a1;
				l = b1;
			}
		}
	}
	if (k < 10000)
		cout << k << " " << l;
	else
		cout << "-1";*/

	//15
	/*int count, i, j, x, l, k, q;
	bool flag = true;
	cout << "������� ���������� ���������" << endl;
	cin >> count;
	int *area = new int[count];
	cout << "������� ��������" << endl;
	for (i = 0; i < count; i++)
	{
		cin >> area[i];
		for (j = 0; j <= i; j++)

			if (j == 0)
				continue;
			else
				for (j = 0; j <= i; j++)
				{
					for (x = 0; x <= i - 1; x++)
					{
						if (area[x] > area[x + 1])
						{
							q = area[i];
							area[i] = area[i + 1];
							area[i + 1] = q;
						}
					}
				}
		l = i;
		if (l > 4)
			l = 4;
		for (k = l; k >= 0; k--)
		{
			cout << area[k] << " ";
		}
		cout << endl;
	}
	cout << endl;*/

	//16
	/*while (true)
	{
		int a;
		cout << "������� ������������� �����" << endl;
		cin >> a;
		cout << "���������" << endl;
		factorization(a);
		cout << endl;
	}*/

	//17
	/*double a, b, ind;
	cout << "������� �������� ���� � �����(� ��) ����� ������" << endl;
	cin >> a >> b;
	b = b / 100;
	ind = a / pow(b, 2);
	if (ind < 18.5)
		cout << "������������� ���";
	else
		if ((ind > 18.5) && (ind < 25.0))
			cout << "���������� ���";
		else
			if ((ind < 30.0) && (ind >= 25))
				cout << "���������� ���";
			else
				if (ind >= 30.0)
					cout << "��������";*/

	//18
	/*int min, max;
	int mass[20];
	srand(time(0));
	cout << "������: ";
	for (int b = 0; b < 20; b++)
	{
		mass[b] = rand() % 203 - 101;
		cout << mass[b] << " ";
	}
	max = mass[0];
	min = mass[0];
	for (int i = 1; i < 20; i++)
	{
		if (mass[i] > max)
			max = mass[i];
		if (mass[i] < min)
			min = mass[i];
	}
	cout << endl << "min:" << min << endl;
	cout << "max:" << max;*/

	//19
	/*int a, b, q, n;
	bool flag = true;
	cout << "������� ���������� ��������" << endl;
	cin >> a;
	n = a - 1;
	int *mass = new int[a];
	int *num = new int[a];
	int *sum = new int[a];
	cout << "������� �������� �������" << endl;
	for (int i = 0; i < a; i++)
	{
		cin >> mass[i];
		num[i] = mass[i];
		sum[i] = 0;
	}
	for (int i = 0; i < a; i++)
		for (int j = 0; j < a ; j++)
		{
			if (i == 0)
				j++;
			if (num[i] == num[j])
			{
				num[j] = 100001;
			}
			else
				break;
		}
	while (flag)
	{
		flag = false;
		for (int i = 0; i < a - 1; i++)
			if (num[i] > num[i + 1])
			{
				q = num[i];
				num[i] = num[i + 1];
				num[i + 1] = q;
				flag = true;
			}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (mass[j] == num[i])
				sum[i] = sum[i] + 1;
		}
	}
	for (int j = 0; j < a; j++)
	{
		if (num[j] == 100001)
			n--;
	}
	cout << "���������" << endl;
	for (int i = 0; i < n+1; i++)
	{
		cout << num[i] << ":" << sum[i] << endl;
	}*/
	
	//21
	/*int a, b, w, h;
	int area[10][8];
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 8; j++)
			area[i][j] = 0;
	srand(time(0));
	a = rand() % 11 - 0;
	b = rand() % 9 - 0;
	cout << a << b;
	area[a][b] = 5;
	for (int i = 0; i < 5; i++)
	{
		system("cls");
		cout << "������� ���������� ������, ����� �������" << endl;
		cout << "������� ����������. � ��� " << 5 - i << " �������" << endl;
		cin >> w >> h;
		if (((w >= 10) || (w <= 0)) || ((h >= 8) || (h <= 0)))
		{
			cout << "�� ����������" << endl;
			i--;
		}
		else
			if (area[w][h] == 1)
			{
				cout << "��� ����" << endl;
				i--;
			}
			else
				if ((w != a) || (h != b))
				{
					cout << "���" << endl;
					area[w][h]++;
				}
				else
					if (area[w][h] == 5)
					{
						cout << "�� ��������!";
						system("pause");
						exit(1);
					}
		system("pause");
	}
	cout << "�� ���������, ������� � ��������� ���";*/

	system("pause");
	return 0;
}

void factorization(int n)
{
	setlocale(LC_ALL, "RUS");
	int i = 0, j;
	if (n == 1)
		cout << "-";
	else 
		if (n < 1)
		cout << "������";
		else
		for (j = 2; j <= n; j++)
		{
			while (n % j == 0)
			{
				n = n / j;
				i++;
			}
			if (i > 1)
			{
				cout << j << "^" << i;
				if (n != 1)
					cout << "*";
			}
			else if (i != 0)
				cout << j;
				if (n != 1)
					cout << "*";
			i = 0;
		}
}