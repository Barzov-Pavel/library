#include "Header.h"



int main() {
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	book a1("� ������ ����� ���", 2016);
	book a2("� ������ ����� ���", 2016);
	book a3("��� ��������", 2016);
	book a4("������ � ���������", 2012);
	book a5("���������", 2015);

	multimap<string, book> lib = { { "����� ������" , a1 },{ "����� ������" ,a2 },{ "���� ����� ������" , a3 },
	{ "������ ��������" , a4 },{ "������ �������" , a5 } };

	int variant;

	cout << "�������� �������\n" << endl;
	cout << "1. �������� ����� ����������� �����\n"
		<< "2. ������� ��������� �����\n"
		<< "3. ������ ������ ���� ���� ������������� �� ��������\n"
		<< "5. �����\n" << endl;
	cout << ">>> ";


	do
	{
		string vvod_author;
		string vvod_titel;
		string erase_book;
		book a6;
		pair <string, book> A6;
		int vvod_year;
		cin >> variant;

		switch (variant) {

		case 1:
			cout << "������� ������: " << endl;
			cin.ignore();
			getline(cin, vvod_author);
			cout << "������� ��������: " << endl;
			cin >> vvod_titel;
			cin.ignore();
			getline(cin, vvod_titel);
			cout << "������� ��� �������: " << endl;
			cin >> vvod_year;
			a6.setYear(vvod_year);

			A6.first = vvod_author;
			A6.second = a6;

			lib.insert(A6);

			break;
		case 2:
			cout << "������� ������ ��������� ����� " << endl;
			cin.ignore();
			getline(cin, erase_book);
			lib.erase(erase_book);
			break;

		case 3:
			for (auto a : lib)
			{
				cout << a.first << a.second << endl;
			}
			break;

		case 5:
			cout << "����� �� ���������..." << endl;
			exit(EXIT_SUCCESS);
			break;

		default:
			cerr << "�� ������� �������� �������" << endl;
			exit(EXIT_FAILURE);
		}

	} while (variant != 5);


	return 0;
}