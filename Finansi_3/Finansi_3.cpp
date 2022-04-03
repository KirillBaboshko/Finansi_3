#include<iostream>
#include<memory>
#include<vector>
#include<algorithm>
#include<fstream>
#include <string>
#include<Windows.h>
using namespace std;


struct CredNode
{
	int num = 0;
	int schet = 0;
	int credit = 0;
	CredNode* next;
};
class Credcard
{
	CredNode* Head;
	CredNode* Tail;
	int Count = 0;
public:
	Credcard()
	{
		Head = Tail = NULL;
		Count = 0;
	}
	void Add()
	{
		int o;
		cout << "\n������� ����� ����� ��������� �����" << endl;
		cin >> o;
		int n;
		cout << "\n������� ������� ����� ������ � ��� �� ��������� �����" << endl;
		cin >> n;
		int t;
		cout << "\n������� ����� ������� ,�������� ����� ��������" << endl;
		cin >> t;
		CredNode* temp = new CredNode;
		temp->num = o;
		temp->schet = temp->schet + n;
		temp->credit = temp->credit + t;
		temp->next = Head;
		if (Count == 0)
		{
			Head = Tail = temp;
		}
		else
		{
			Head = temp;
		}
		Count++;
	}
	void Popolnenie()
	{
		int i;
		cout << "\n������� ����� ��������� �����, �� ������� �� ������� �������� ������" << endl;
		cin >> i;
		CredNode* temp = Head;
		int j = 0;
		while (j < Count)
		{
			if (temp->num == i)
			{
				int n;
				cout << "\n������� �����,�� ������� �� ������� ��������� ����" << endl;
				cin >> n;
				temp->schet = temp->schet + n;
				break;
			}
			temp = temp->next;
			j++;
		}
	}
	void Zatrati(int zat)
	{
		int i;
		cout << "\n������� ����� ��������� �����, c ������� �� ������� ����� ������" << endl;
		cin >> i;
		CredNode* temp = Head;
		int j = 0;
		while (j < Count)
		{
			if (temp->num == i)
			{
				temp->schet = temp->schet - zat;
				cout << "\n������� �� ��������� ����� " << temp->num << " :" << temp->schet << endl << endl;
				break;
			}
			temp = temp->next;
			j++;
		}
	}
	void Print()
	{
		CredNode* temp = Head;
		int j = 0;
		while (j < Count)
		{
			cout << "\n��������� ����� � " << temp->num << endl;
			cout << "�� ��������� �����:" << temp->schet << endl;
			cout << "� ��� �� ������ ��������:" << temp->credit << endl;
			temp = temp->next;
			j++;
		}
	}

};



struct DedNode
{
	int num = 0;
	int schet = 0;
	DedNode* next;
};
class Debcard
{
	DedNode* Head;
	DedNode* Tail;
	int Count = 0;
public:
	Debcard()
	{
		Head = Tail = NULL;
		Count = 0;
	}
	void Add()
	{
		int n;
		int o;
		cout << "\n������� ����� ����� ��������� �����" << endl;
		cin >> o;
		cout << "\n������� ������� ����� ������ � ��� �� ��������� �����" << endl;
		cin >> n;
		DedNode* temp = new DedNode;
		temp->num = o;
		temp->schet = temp->schet + n;
		temp->next = Head;
		if (Count == 0)
		{
			Head = Tail = temp;
		}
		else
		{
			Head = temp;
		}
		Count++;
	}
	void Popolnenie()
	{
		int i;
		cout << "\n�������  ����� ��������� �����, �� ������� �� ������� �������� ������" << endl;
		cin >> i;
		DedNode* temp = Head;
		int j = 0;
		while (j < Count)
		{
			if (temp->num == i)
			{
				int n;
				cout << "\n������� �����,�� ������� �� ������� ��������� ����" << endl;
				cin >> n;
				temp->schet = temp->schet + n;
				break;
			}
			temp = temp->next;
			j++;
		}
	}
	void Zatrati(int zat)
	{
		int i;
		cout << "\n������� ����� ��������� �����, c ������� �� ������� ����� ������" << endl;
		cin >> i;
		DedNode* temp = Head;
		int j = 0;
		while (j < Count)
		{
			if (temp->num == i)
			{
				temp->schet = temp->schet - zat;
				cout << "\n������� �� ��������� ����� " << temp->num << " :" << temp->schet << endl << endl;
				break;
			}
			temp = temp->next;
			j++;
		}
	}
	void Print()
	{
		DedNode* temp = Head;
		int j = 0;
		while (j < Count)
		{
			cout << "\n��������� ����� � " << temp->num << endl;
			cout << "�� ��������� �����:" << temp->schet << endl;
			temp = temp->next;
			j++;
		}
	}

};



struct KoshNode
{
	int schet = 0;
	KoshNode* next;
};
class Koshel
{
	KoshNode* Head;
	KoshNode* Tail;
	int Count = 0;
public:
	Koshel()
	{
		Head = Tail = NULL;
		Count = 0;
	}
	void Add()
	{
		int n;
		cout << "\n������� ������� ����� ������ � ��� � ��������" << endl;
		cin >> n;
		KoshNode* temp = new KoshNode;
		temp->schet = temp->schet + n;
		temp->next = Head;
		if (Count == 0)
		{
			Head = Tail = temp;
		}
		else
		{
			Head = temp;
		}
		Count++;
	}
	void Popolnenie()
	{
		int i;
		cout << "\n������� ���������� ����� ��������, � ������� �� ������� �������� ������" << endl;
		cin >> i;
		KoshNode* temp = Head;
		int j = 1;
		while (j <= Count)
		{
			if (j == i)
			{
				int n;
				cout << "\n������� �����, ������� �� ������� �������� � �������" << endl;
				cin >> n;
				temp->schet = temp->schet + n;
				break;
			}
			temp = temp->next;
			j++;
		}
	}
	void Zatrati(int zat)
	{
		int i;
		cout << "\n������� ���������� ����� ��������, � ������� �� ������� �������� ������" << endl;
		cin >> i;
		KoshNode* temp = Head;
		int j = 1;
		while (j <= Count)
		{
			if (j == i)
			{
				temp->schet = temp->schet - zat;
				cout << "\n� �������� " << i << " �������� :" << temp->schet << endl << endl;
				break;
			}
			temp = temp->next;
			j++;
		}
	}
	void Print()
	{
		KoshNode* temp = Head;
		int j = 0;
		while (j < Count)
		{
			cout << "\n������� � " << j + 1 << endl;
			cout << "� ��������:" << temp->schet << endl;
			temp = temp->next;
			j++;
		}
	}

};
class Zatrati
{
	int sum;
	string sred;
	string kategor;
public:
	Zatrati()
	{
		sum = 0;
		sred = " ";
		kategor = " ";
	}
	Zatrati(int s, string sr, string k)
	{
		sum = s;
		sred = sr;
		kategor = k;
	}
	void Show()
	{
		cout << "�� ���������:" << sum << endl;
		cout << "�� ���������������:" << sred << endl;
		cout << "��������� � ���������:" << kategor << endl;
	}
	void Show(string name)
	{
		ofstream f(name, ios::out | ios::binary | ios::app);
		if (!f)
		{
			cout << "���� �� �������� ��� ������!!!";
			exit(1);
		}
		f << "�� ���������:" << sum << endl;
		f << "�� ���������������:" << sred << endl;
		f << "��������� � ���������:" << kategor << endl;
		f.close();
	}
	static bool isEqual1(const Zatrati& f1, const Zatrati& f2)
	{
		if ((f1.sum == f2.sum) && (f1.kategor == f2.kategor) && (f1.sred == f2.sred))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	static bool isEqual2(const Zatrati& f1, const Zatrati& f2)
	{
		if ((f1.sum > f2.sum))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	friend bool operator==(const Zatrati& t1, const Zatrati& t2)
	{
		return isEqual1(t1, t2);
	}
	friend bool operator>(const Zatrati& t1, const Zatrati& t2)
	{
		return isEqual2(t1, t2);
	}
};

class Kategor
{
	string kat;
	int count;
public:
	Kategor()
	{
		count = 0;
		kat = " ";
	}
	Kategor(int c, string k)
	{
		count = c;
		kat = k;
	}
	void Show()
	{
		cout << "���������:" << kat << endl;
		cout << count << " ���" << endl;
	}
	static bool isEqual2(const Kategor& f1, const Kategor& f2)
	{
		if ((f1.count > f2.count))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	friend bool operator>(const Kategor& t1, const Kategor& t2)
	{
		return isEqual2(t1, t2);
	}

};

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "rus");
	Koshel k;
	Debcard d;
	Credcard c;
	int countc = 0;
	int countd = 0;
	int countk = 0;

	int day = 1;
	int week = 1;
	int mounth = 1;

	cout << "\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl;
	cout << "\t\t      ����� ���������� � ������� ���������� ������������� ��������� " << endl;
	cout << "\t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << endl << endl << endl << endl;
	int dobav;
	cout << "���� ������ �� ��������� � ������: " << endl << endl;
	bool zapol = true;
	while (zapol)
	{
		cout << "��� ������� ��������?(1-��������� �����,2-��������� �����,3-������ ��������)" << endl;
		cin >> dobav;
		while (dobav > 3 || dobav <= 0)
		{
			cout << "�� ����� ������������ �����" << endl;
			cout << "��� ������� ��������?(1-��������� �����,2-��������� �����,3-������ ��������)" << endl;
			cin >> dobav;
		}
		switch (dobav)
		{
		case 1:
		{
			cout << "������� ��������� ���� ������� ��������" << endl;
			cin >> countc;
			for (int i = 0; i < countc; i++)
			{
				c.Add();
			}
			break;
		}
		case 2:
		{
			cout << "������� ��������� ���� ������� ��������" << endl;
			cin >> countd;
			for (int i = 0; i < countd; i++)
			{
				d.Add();
			}
			break;
		}
		case 3:
		{

			cout << "������� ������ ��������� ������� ��������" << endl;
			cin >> countk;
			for (int i = 0; i < countk; i++)
			{
				cout << "\n������� " << i + 1 << endl;
				k.Add();
			}
			break;
		}
		default:
		{
			cout << "�� ����� ������������ �����" << endl;
			break;
		}

		}
		cout << "���������� ���������� ������?(1 -��,0-���)" << endl;
		cin >> zapol;
	}
	bool game = true;

	vector<Zatrati> zatratday;
	vector<Zatrati> zatratweek;
	vector<Zatrati> zatratmounth;


	vector<Zatrati> katfood;
	vector<Zatrati> kathome;
	vector<Zatrati> katzdorov;
	vector<Zatrati> katgos;

	while ((game == true) && (mounth <= 12))
	{
		zatratday.clear();
		cout << "����: " << day << endl;
		cout << "������: " << week << endl;
		cout << "�����: " << mounth << endl;
		bool popol;
		cout << "������� ��������� ���� �����?(1-��,0-���)" << endl;
		cin >> popol;
		if (popol == 1)
		{
			int o;
			cout << "��� ������� ���������?(1-��������� �����,2-��������� �����,3-������ ��������)" << endl;
			cin >> o;
			switch (o)
			{
			case 1:
			{
				c.Popolnenie();
				break;
			}
			case 2:
			{
				d.Popolnenie();
				break;
			}
			case 3:
			{
				k.Popolnenie();
				break;
			}
			default:
			{
				cout << "�� ����� ������������ �����" << endl;
				break;
			}


			}
		}
		bool r;
		cout << "������� ������� ������?(1-��,0-���)" << endl;
		cin >> r;
		if (r == 1)
		{
			int o;
			cout << "��� ������� ����������?(1-��������� �����,2-��������� �����,3-������ ��������)" << endl;
			cin >> o;
			switch (o)
			{
			case 1:
			{
				c.Print();
				break;
			}
			case 2:
			{

				d.Print();
				break;
			}
			case 3:
			{
				k.Print();
				break;
			}
			default:
			{
				cout << "�� ����� ������������ �����" << endl;
				break;
			}


			}
		}
		bool zatrat;
		cout << "������� ������ �������?(1-��,0-���)" << endl;
		cin >> zatrat;
		while (zatrat == 1)
		{
			int sum;
			int z;
			cout << "����� �������� ������ ��������?(1-��������� �����,2-��������� �����,3-������ ��������)" << endl;
			cin >> z;
			switch (z)
			{
			case 1:
			{
				int p;
				cout << "� ����� ��������� ���������� �������?(1-��������� ��� � �����������,2-��������� ���,3-��������� ��������,4-��������� �����������)" << endl;
				cin >> p;
				switch (p)
				{
				case 1:
				{
					if (countc > 0)
					{
						cout << "������� �����" << endl;
						cin >> sum;
						c.Zatrati(sum);
						Zatrati temp(sum, "��������� �����", "���");
						zatratday.push_back(temp);
						zatratweek.push_back(temp);
						zatratmounth.push_back(temp);
						katfood.push_back(temp);
					}
					break;
				}
				case 2:
				{
					if (countc > 0)
					{
						cout << "������� �����" << endl;
						cin >> sum;
						c.Zatrati(sum);
						Zatrati temp(sum, "��������� �����", "���");
						zatratday.push_back(temp);
						zatratweek.push_back(temp);
						zatratmounth.push_back(temp);
						kathome.push_back(temp);
					}
					break;
				}
				case 3:
				{
					if (countc > 0)
					{
						cout << "������� �����" << endl;
						cin >> sum;
						c.Zatrati(sum);
						Zatrati temp(sum, "��������� �����", "��������");
						zatratday.push_back(temp);
						zatratweek.push_back(temp);
						zatratmounth.push_back(temp);
						katzdorov.push_back(temp);
					}
					break;
				}
				case 4:
				{
					if (countc > 0)
					{
						cout << "������� �����" << endl;
						cin >> sum;
						c.Zatrati(sum);
						Zatrati temp(sum, "��������� �����", "�����������");
						zatratday.push_back(temp);
						zatratweek.push_back(temp);
						zatratmounth.push_back(temp);
						katgos.push_back(temp);
					}
					break;
				}
				}
				break;
			}
			case 2:
			{
				int p;
				cout << "� ����� ��������� ���������� �������?(1-��������� ��� � �����������,2-��������� ���,3-��������� ��������,4-��������� �����������)" << endl;
				cin >> p;
				switch (p)
				{
				case 1:
				{
					if (countd > 0)
					{
						cout << "������� �����" << endl;
						cin >> sum;
						d.Zatrati(sum);
						Zatrati temp(sum, "��������� �����", "���");
						zatratday.push_back(temp);
						zatratweek.push_back(temp);
						zatratmounth.push_back(temp);
						katfood.push_back(temp);
					}
					break;
				}
				case 2:
				{
					if (countd > 0)
					{
						cout << "������� �����" << endl;
						cin >> sum;
						d.Zatrati(sum);
						Zatrati temp(sum, "��������� �����", "���");
						zatratday.push_back(temp);
						zatratweek.push_back(temp);
						zatratmounth.push_back(temp);
						kathome.push_back(temp);
					}
					break;
				}
				case 3:
				{
					if (countd > 0)
					{
						cout << "������� �����" << endl;
						cin >> sum;
						d.Zatrati(sum);
						Zatrati temp(sum, "��������� �����", "��������");
						zatratday.push_back(temp);
						zatratweek.push_back(temp);
						zatratmounth.push_back(temp);
						katzdorov.push_back(temp);
					}
					break;
				}
				case 4:
				{
					if (countd > 0)
					{
						cout << "������� �����" << endl;
						cin >> sum;
						d.Zatrati(sum);
						Zatrati temp(sum, "��������� �����", "�����������");
						zatratday.push_back(temp);
						zatratweek.push_back(temp);
						zatratmounth.push_back(temp);
						katgos.push_back(temp);
					}
					break;
				}
				}
				break;
			}
			case 3:
			{
				int p;
				cout << "� ����� ��������� ���������� �������?(1-��������� ��� � �����������,2-��������� ���,3-��������� ��������,4-��������� �����������)" << endl;
				cin >> p;
				switch (p)
				{
				case 1:
				{
					if (countk > 0)
					{
						cout << "������� �����" << endl;
						cin >> sum;
						k.Zatrati(sum);
						Zatrati temp(sum, "������ �������", "���");
						zatratday.push_back(temp);
						zatratweek.push_back(temp);
						zatratmounth.push_back(temp);
						katfood.push_back(temp);
					}
					break;
				}
				case 2:
				{
					if (countk > 0)
					{
						cout << "������� �����" << endl;
						cin >> sum;
						k.Zatrati(sum);
						Zatrati temp(sum, "������ �������", "���");
						zatratday.push_back(temp);
						zatratweek.push_back(temp);
						zatratmounth.push_back(temp);
						kathome.push_back(temp);
					}
					break;
				}
				case 3:
				{
					if (countk > 0)
					{
						cout << "������� �����" << endl;
						cin >> sum;
						k.Zatrati(sum);
						Zatrati temp(sum, "������ �������", "��������");
						zatratday.push_back(temp);
						zatratweek.push_back(temp);
						zatratmounth.push_back(temp);
						katzdorov.push_back(temp);
					}
					break;
				}
				case 4:
				{
					if (countk > 0)
					{
						cout << "������� �����" << endl;
						cin >> sum;
						k.Zatrati(sum);
						Zatrati temp(sum, "������ �������", "�����������");
						zatratday.push_back(temp);
						zatratweek.push_back(temp);
						zatratmounth.push_back(temp);
						katgos.push_back(temp);
					}
					break;
				}
				}
				break;
			}
			default:
			{
				cout << "�� ����� ������������ �����" << endl;
				break;
			}
			}
			cout << "���������� ������� �������?(1-��,0-���)" << endl;
			cin >> zatrat;
		}

		ofstream f("K:\\OtchetDay.txt", ios::out | ios::binary | ios::app);
		if (!f)
		{
			cout << "���� �� �������� ��� ������!!!";
			exit(1);
		}
		f << "\n����� �� �������� �� " << day << " ���� " << week << " ������ " << mounth << " ������:" << endl;
		cout << "\n����� �� �������� �� " << day << " ���� " << week << " ������ " << mounth << " ������:" << endl;
		f.close();
		for (int i = 0; i < zatratday.size(); i++)
		{
			zatratday[i].Show();
			zatratday[i].Show("K:\\OtchetDay.txt");
			cout << endl;
		}
		if (katfood.size() > 0)
		{
			ofstream f("K:\\OtchetDay.txt", ios::out | ios::binary | ios::app);
			if (!f)
			{
				cout << "���� �� �������� ��� ������!!!";
				exit(1);
			}
			f << "\n����� �� �������� �� " << day << " ���� " << week << " ������ " << mounth << " ������ ��������� \"���\" :" << endl;
			cout << "\n����� �� �������� �� " << day << " ���� " << week << " ������ " << mounth << " ������ ��������� \"���\" :" << endl;
			f.close();
			for (int i = 0; i < katfood.size(); i++)
			{
				for (int j = 0; j < zatratday.size(); j++)
				{

					if (katfood[i] == zatratday[j])
					{
						katfood[i].Show();
						katfood[i].Show("K:\\OtchetDay.txt");
						cout << endl;
					}

				}
			}
		}
		if (kathome.size() > 0)
		{
			cout << "\n����� �� �������� �� " << day << " ���� " << week << " ������ " << mounth << " ������ ��������� \"���\" :" << endl;
			for (int i = 0; i < kathome.size(); i++)
			{
				for (int j = 0; j < zatratday.size(); j++)
				{

					if (kathome[i] == zatratday[j])
					{
						kathome[i].Show();
						cout << endl;
					}

				}
			}
		}

		if (katzdorov.size() > 0)
		{
			cout << "\n����� �� �������� �� " << day << " ���� " << week << " ������ " << mounth << " ������ ��������� \"��������\" :" << endl;
			for (int i = 0; i < katzdorov.size(); i++)
			{
				for (int j = 0; j < zatratday.size(); j++)
				{

					if (katzdorov[i] == zatratday[j])
					{
						katzdorov[i].Show();
						cout << endl;
					}

				}
			}
		}

		if (katgos.size() > 0)
		{
			cout << "\n����� �� �������� �� " << day << " ���� " << week << " ������ " << mounth << " ������ ��������� \"�����������\" :" << endl;
			for (int i = 0; i < katgos.size(); i++)
			{
				for (int j = 0; j < zatratday.size(); j++)
				{

					if (katgos[i] == zatratday[j])
					{
						katgos[i].Show();
						cout << endl;
					}

				}
			}
		}
		cout << "����������???(1-��,0-���)" << endl;
		cin >> game;
		day++;
		if (day > 2)
		{
			day = 1;
			cout << "\n����� �� �������� �� " << week << " ������:" << endl;
			for (int i = 0; i < zatratweek.size(); i++)
			{
				zatratweek[i].Show();
				cout << endl;
			}
			if (katfood.size() > 0)
			{
				cout << "\n����� �� �������� �� " << week << " ������ ��������� \"���\" :" << endl;
				for (int i = 0; i < katfood.size(); i++)
				{
					for (int j = 0; j < zatratweek.size(); j++)
					{

						if (katfood[i] == zatratweek[j])
						{
							katfood[i].Show();
							cout << endl;
						}

					}
				}
			}
			if (kathome.size() > 0)
			{
				cout << "\n����� �� �������� �� " << week << " ������ ��������� \"���\" :" << endl;
				for (int i = 0; i < kathome.size(); i++)
				{
					for (int j = 0; j < zatratweek.size(); j++)
					{

						if (kathome[i] == zatratweek[j])
						{
							kathome[i].Show();
							cout << endl;
						}

					}
				}
			}

			if (katzdorov.size() > 0)
			{
				cout << "\n����� �� �������� �� " << week << " ������ ��������� \"��������\" :" << endl;
				for (int i = 0; i < katzdorov.size(); i++)
				{
					for (int j = 0; j < zatratweek.size(); j++)
					{

						if (katzdorov[i] == zatratweek[j])
						{
							katzdorov[i].Show();
							cout << endl;
						}

					}
				}
			}

			if (katgos.size() > 0)
			{
				cout << "\n����� �� �������� �� " << week << " ������ ��������� \"�����������\" :" << endl;
				for (int i = 0; i < katgos.size(); i++)
				{
					for (int j = 0; j < zatratweek.size(); j++)
					{

						if (katgos[i] == zatratweek[j])
						{
							katgos[i].Show();
							cout << endl;
						}

					}
				}
			}
			for (int i = 0; i < zatratweek.size(); i++)
			{
				for (int j = i; j > 0 && zatratweek[j - 1] > zatratweek[j]; j--)
				{
					Zatrati temp = zatratweek[j - 1];
					zatratweek[j - 1] = zatratweek[j];
					zatratweek[j] = temp;
				}
			}
			cout << "���-3 ������ �� " << week << " ������" << endl;
			for (int i = zatratweek.size() - 1; i > zatratweek.size() - 4; i--)
			{
				zatratweek[i].Show();
				cout << endl;
			}
			Kategor* array[4] = { new Kategor(katfood.size(),"���"),new Kategor(kathome.size(),"���"),new Kategor(katzdorov.size(),"��������"),new Kategor(katgos.size(),"�����������") };
			for (int i = 0; i < 4; i++)
			{
				for (int j = i; j > 0 && *array[j - 1] > *array[j]; j--)
				{
					Kategor temp = *array[j - 1];
					*array[j - 1] = *array[j];
					*array[j] = temp;
				}
			}
			cout << "���-3 ��������� �� " << week << " ������" << endl;
			for (int i = 3; i > 0; i--)
			{
				array[i]->Show();
				cout << endl;
			}
			zatratweek.clear();
			week++;
		}
		if (week > 2)
		{
			week = 1;
			cout << "\n����� �� �������� �� " << mounth << " �����:" << endl;
			for (int i = 0; i < zatratmounth.size(); i++)
			{
				zatratmounth[i].Show();
				cout << endl;
			}
			if (katfood.size() > 0)
			{
				cout << "\n����� �� �������� �� " << mounth << " ����� ��������� \"���\" :" << endl;
				for (int i = 0; i < katfood.size(); i++)
				{
					for (int j = 0; j < zatratmounth.size(); j++)
					{

						if (katfood[i] == zatratmounth[j])
						{
							katfood[i].Show();
							cout << endl;
						}

					}
				}
			}
			if (kathome.size() > 0)
			{
				cout << "\n����� �� �������� �� " << mounth << " ����� ��������� \"���\" :" << endl;
				for (int i = 0; i < kathome.size(); i++)
				{
					for (int j = 0; j < zatratmounth.size(); j++)
					{

						if (kathome[i] == zatratmounth[j])
						{
							kathome[i].Show();
							cout << endl;
						}

					}
				}
			}

			if (katzdorov.size() > 0)
			{
				cout << "\n����� �� �������� �� " << mounth << " ����� ��������� \"��������\" :" << endl;
				for (int i = 0; i < katzdorov.size(); i++)
				{
					for (int j = 0; j < zatratmounth.size(); j++)
					{

						if (katzdorov[i] == zatratmounth[j])
						{
							katzdorov[i].Show();
							cout << endl;
						}

					}
				}
			}
			if (katgos.size() > 0)
			{
				cout << "\n����� �� �������� �� " << mounth << " ����� ��������� \"�����������\" :" << endl;
				for (int i = 0; i < katgos.size(); i++)
				{
					for (int j = 0; j < zatratmounth.size(); j++)
					{

						if (katgos[i] == zatratmounth[j])
						{
							katgos[i].Show();
							cout << endl;
						}

					}
				}
			}
			for (int i = 0; i < zatratmounth.size(); i++)
			{
				for (int j = i; j > 0 && zatratmounth[j - 1] > zatratmounth[j]; j--)
				{
					Zatrati temp = zatratmounth[j - 1];
					zatratmounth[j - 1] = zatratmounth[j];
					zatratmounth[j] = temp;
				}
			}
			cout << "���-3 ������ �� " << mounth << " �����" << endl;
			for (int i = zatratmounth.size() - 1; i > zatratmounth.size() - 4; i--)
			{
				zatratmounth[i].Show();
				cout << endl;
			}
			Kategor* array[4] = { new Kategor(katfood.size(),"���"),new Kategor(kathome.size(),"���"),new Kategor(katzdorov.size(),"��������"),new Kategor(katgos.size(),"�����������") };
			for (int i = 0; i < 4; i++)
			{
				for (int j = i; j > 0 && *array[j - 1] > *array[j]; j--)
				{
					Kategor temp = *array[j - 1];
					*array[j - 1] = *array[j];
					*array[j] = temp;
				}
			}
			cout << "���-3 ��������� �� " << mounth << " �����" << endl;
			for (int i = 3; i > 0; i--)
			{
				array[i]->Show();
				cout << endl;
			}
			zatratmounth.clear();
			mounth++;
		}
		if (mounth == 12)
		{
			game = false;
		}

	}
}