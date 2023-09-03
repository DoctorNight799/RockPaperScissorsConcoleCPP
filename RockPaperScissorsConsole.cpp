#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	bool exit = true;
	while (exit)
	{
		cout << "0 - Камень" << endl;
		cout << "1 - Ножницы" << endl;
		cout << "2 - Бумага" << endl;
		cout << "Сделайте выбор: ";
		int plChoice, pcChoice;
		cin >> plChoice;
		pcChoice = rand() % 3;
		switch (pcChoice) {
			case 0:
				cout << "Рандом выбрал камень." << endl;
				cout << ((plChoice == 0) ? ("Ничья.") : (plChoice == 1) ? ("Вы проиграли.") : ("Вы победили.")) << endl;
				break;
			case 1:
				cout << "Рандом выбрал ножницы." << endl;
				cout << ((plChoice == 1) ? ("Ничья.") : (plChoice == 2) ? ("Вы проиграли.") : ("Вы победили.")) << endl;
				break;
			case 2:
				cout << "Рандом выбрал бумагу." << endl;
				cout << ((plChoice == 2) ? ("Ничья.") : (plChoice == 0) ? ("Вы проиграли.") : ("Вы победили.")) << endl;
				break;
		}
		cout << "Хотите сыграть еще раз?" << endl;
		cout << "1.Да\n2.Нет" << endl;
		int finish;
		cin >> finish;
		exit = (finish == 1) ? true : false;
	}
	system("pause");
}