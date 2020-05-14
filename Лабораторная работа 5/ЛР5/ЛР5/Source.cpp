#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
char z, x, q;
float z1, x1, q1;
int m = 0;
int g = 0;
void ref1();
void ref2();
void ref3();

int main()
{
	setlocale(LC_ALL, "RUS");
	int surv = 0, surv_1 = 0, surv_2 = 0, surv_3 = 0, surv_m = 0, surv_w = 0, state_C = 0, state_Q = 0, state_S = 0, man = 0, woman = 0, no_age = 0, no_age_man = 0, no_age_wom = 0, surv_p = 0, sex, age_p, state, id;
	double age = 0, age_m = 0, age_w = 0;
	int id_18[1000];
	int dot[12];

	ifstream cvs("train.csv");
	string str;
	if (cvs.is_open() == false)
		cout << "Файл ввода не открыт!" << endl;
	else
	{
		bool Estr = false;
		getline(cvs, str, '\r');
		while (cvs.eof() == false)
		{
			getline(cvs, str, '\r');
			cout << str << endl;
			for (int i = 0, m = 0; str[i]!= '\0'; i++)
					if (str[i] == ',')
					{
						dot[m] = i;
						m++;
					}
			if (dot[0] == 1)
			{
				z = str[0];
				ref1();
				id = z1;
			}
			else
				if (dot[0] == 2)
				{
					z = str[0];
					x = str[1];
					ref1();
					ref2();
					id = (z1 * 10) + x1;
				}
				else
					if (dot[0] == 3)
					{
						z = str[0];
						x = str[1];
						q = str[2];
						ref1();
						ref2();
						ref3();
						id = (z1 * 100) + (x1 * 10) + q1;
					}
			if (str[dot[0] + 1] == '1')
			{
				surv_p = 1;
				surv++;
			}
			else
				surv_p = 0;

			if (str[dot[4] + 1] == 'm')
			{
				man++;
				sex = 1;
				if (surv_p == 1)
				surv_m++;
			}
			else
				if (str[dot[4] + 1] == 'f')
				{
					woman++;
					sex = 0;
					if (surv_p == 1)
					surv_w++;
				}
			if (((dot[6] - dot[5]) == 1) && (sex > 0))
				no_age_man++;
			if (((dot[6] - dot[5]) == 1) && (sex == 0))
				no_age_wom++;
			if ((dot[6] - dot[5]) == 1)
				no_age++;
			if ((dot[6] - dot[5]) == 2)
			{
				z = str[dot[5] + 1];
				ref1();
				age_p = z1;
				age += age_p;
				id_18[g] = id;
				g++;
				if (sex == 1)
					age_m += age_p;
				else
					if (sex == 0)
					age_w += age_p;
			}
			else
				if ((dot[6] - dot[5]) == 3)
				{
					z = str[dot[5] + 1];
					x = str[dot[5] + 2];
					ref1();
					ref2();
					age_p = (z1 * 10) + x1;
					age += age_p;
					if (((z1 * 10) + x1) < 18)
					{
						id_18[g] = id;
						g++;
					}
					if (sex == 1)
						age_m += age_p;
					else
						if (sex == 0)
						age_w += age_p;
				}
				else
			if (str[dot[11] + 1] == 'S')
				state_S++;
			else
				if (str[dot[11] + 1] == 'C')
					state_C++;
				else
					state_Q++;
			if ((str[dot[1] + 1] == '1') && (surv_p == 1))
				surv_1++;
			else
				if ((str[dot[1] + 1] == '2') && (surv_p == 1))
					surv_2++;
				else
					if ((str[dot[1] + 1] == '3') && (surv_p == 1))
						surv_3++;
		}
	}
	int peoples = id - no_age;
	int man_age = man - no_age_man;
	int wom_age = woman - no_age_wom;
	cvs.close();
	ofstream Table("table1.csv");
	if (!Table.is_open())
		cout << "Файл вывода не открыт!" << endl;
	else {
		Table << "\"Общее число выживших\":" << surv << "\r";
		Table << "\"Общее число выживших из 1 класса\":" << surv_1 << "\r";
		Table << "\"Общее число выживших из 2 класса\":" << surv_2 << "\r";
		Table << "\"Общее число выживших из 3 класса\":" << surv_3 << "\r";
		Table << "\"Общее число выживших мужчин\":" << surv_m << "\r";
		Table << "\"Общее число выживших женщин\":" << surv_w << "\r";
		if (age > 0)
			Table << "\"Средний возраст\":" << fixed << setprecision(1) << age / peoples << "\r";
		else 
			Table << "\"Средний возраст\":" << fixed << 0 << "\r";
		if (age_m > 0) 
			Table << "\"Средний возраст мужчин\":" << fixed << setprecision(1) << age_m / man_age << "\r";
		else 
			Table << "\"Средний возраст мужчин\":" << fixed << 0 << "\r";
		if (age_w > 0) 
			Table << "\"Средний возраст женщин\":" << fixed << setprecision(1) << age_w / wom_age << "\r";
		else 
			Table << "\"Средний возраст женщин\":" << fixed << 0 << "\r";
		if ((state_C >= state_Q) && (state_C >= state_S))
			Table << "\"Штат, в котором больше всего пасажиров\":" << "\"Cherbourg\"" << "\r";
		else 
			if ((state_S >= state_Q) && (state_S >= state_C)) 
			Table << "\"Штат, в котором больше всего пасажиров\":" << "\"Southampton\"" << "\r";
		else
			if ((state_Q >= state_C) && (state_Q >= state_S))
				Table << "\"Штат, в котором больше всего пасажиров\":" << "\"Queenstown\"" << "\r";
		Table << "\"ID несовершеннолетних\":\"";
		for (int i = 0; i < g; i++)
			Table << id_18[i]<<", ";
		Table << "\"\r";
		Table.close();
	}
	system("pause");
	return 0;
}

void ref1()
{
	if (z == '1')
		z1 = 1;
	else
		if (z == '2')
			z1 = 2;
		else
			if (z == '3')
				z1 = 3;
			else
				if (z == '4')
					z1 = 4;
				else
					if (z == '5')
						z1 = 5;
					else
						if (z == '6')
							z1 = 6;
						else
							if (z == '7')
								z1 = 7;
							else
								if (z == '8')
									z1 = 8;
								else
									if (z == '9')
										z1 = 9;
									else
										if (z == '0')
											z1 = 0;
}

void ref2()
{
if (x == '1')
		x1 = 1;
	else
		if (x == '2')
			x1 = 2;
		else
			if (x == '3')
				x1 = 3;
			else
				if (x == '4')
					x1 = 4;
				else
					if (x == '5')
						x1 = 5;
					else
						if (x == '6')
							x1 = 6;
						else
							if (x == '7')
								x1 = 7;
							else
								if (x == '8')
									x1 = 8;
								else
									if (x == '9')
										x1 = 9;
									else
										if (x == '0')
											x1 = 0;
}
void ref3()
{
	if (q == '1')
		q1 = 1;
	else
		if (q == '2')
			q1 = 2;
		else
			if (q == '3')
				q1 = 3;
			else
				if (q == '4')
					q1 = 4;
				else
					if (q == '5')
						q1 = 5;
					else
						if (q == '6')
							q1 = 6;
						else
							if (q == '7')
								q1 = 7;
							else
								if (q == '8')
									q1 = 8;
								else
									if (q == '9')
										q1 = 9;
									else
										if (q == '0')
											q1 = 0;
}
