#include "Header.h"



int main() {
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	book a1("О дивный новый мир", 2016);
	book a2("О дивный новый мир", 2016);
	book a3("Три товарища", 2016);
	book a4("Мастер и Маргарита", 2012);
	book a5("Финансист", 2015);

	multimap<string, book> lib = { { "Олдос Хаксли" , a1 },{ "Олдос Хаксли" ,a2 },{ "Эрих Мария Ремарк" , a3 },
	{ "Михаил Булгаков" , a4 },{ "Теодор Драйзер" , a5 } };

	int variant;

	cout << "Выберите вариант\n" << endl;
	cout << "1. Добавить вновь поступившую книгу\n"
		<< "2. Удалить списанную книгу\n"
		<< "3. Выдать список всех книг упорядоченных по фамилиям\n"
		<< "5. выйти\n" << endl;
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
			cout << "Введите автора: " << endl;
			cin.ignore();
			getline(cin, vvod_author);
			cout << "Введите название: " << endl;
			cin >> vvod_titel;
			cin.ignore();
			getline(cin, vvod_titel);
			cout << "Введите год издания: " << endl;
			cin >> vvod_year;
			a6.setYear(vvod_year);

			A6.first = vvod_author;
			A6.second = a6;

			lib.insert(A6);

			break;
		case 2:
			cout << "Введите автора удаляемой книги " << endl;
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
			cout << "Выход из программы..." << endl;
			exit(EXIT_SUCCESS);
			break;

		default:
			cerr << "Вы выбрали неверный вариант" << endl;
			exit(EXIT_FAILURE);
		}

	} while (variant != 5);


	return 0;
}