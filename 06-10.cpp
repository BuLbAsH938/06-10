#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	/*Case1. Дано целое число в диапазоне 1–7. Вывести строку — название дня
недели, соответствующее данному числу (1 — «понедельник», 2 — «вторник» и т. д.)*/
	/*int day;
	cin >> day;
	switch (day) {
	case 1: cout << "Понедельник" << endl; break;
	case 2: cout << "Вторник" << endl; break;
	case 3: cout << "Среда" << endl; break;
	case 4: cout << "Четверг" << endl; break;
	case 5: cout << "Пятница" << endl; break;
	case 6: cout << "Суббота" << endl; break;
	case 7: cout << "Воскресенье" << endl; break;
	default: cout << "Ошибка" << endl;,
		Case2.Дано целое число K.Вывести строку - описание оценки, соответствующей числу K(1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).Если K не лежит в диапазоне 1–5,
		то вывести строку «ошибка».*/
	/*int k;
	cin >> k;
	switch (k) {
	case 1: cout << "плохо" << endl; break;
	case 2: cout << "неудовлетворительно" << endl; break;
	case 3: cout << "удовлетворительно" << endl; break;
	case 4: cout << "хорошо" << endl; break;
	case 5: cout << "отлично" << endl; break;
	default: cout << "Ошибка" << endl; 
		Case3.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 — февраль и т.д.).Вывести название соответствующего времени года(«зима»,
			«весна», «лето», «осень»).
	int month;
	cin >> month;
	switch (month) {
	case 1: 
	case 2:
	case 12: cout << "зима" << endl; break;
	case 3:
	case 4:
    case 5: cout << "весна" << endl; break;
	case 6:
	case 7:
	case 8: cout << "лето" << endl; break;
	case 9:
	case 10:
	case 11: cout << "осень" << endl; break;
	}
	Case4◦
		.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 —
			февраль и т.д.).Определить количество дней в этом месяце для невисокосного года
	int month;
	cin >> month;
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: cout << "31 дней" << endl; break;
	case 4:
	case 6:
	case 9:
	case 11: cout << "30 дней" << endl; break;
	case 2: cout << "28 дней" << endl; break;
	}
	Case5.Арифметические действия над числами пронумерованы следующим
		образом : 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.Дан
		номер действия N(целое число в диапазоне 1–4) и вещественные числа A
		и B(В не равно 0).Выполнить над числами указанное действие и вывести
		результат.
	int a, b, n;
	cout << "Введите Числа ";
	cin >> a >> b;
	cout << "Введите действие ";
	cin >> n;
	if (b != 0){
		switch (n) {
		case 1:cout << a + b << endl; break;
		case 2:cout << a - b << endl; break;
		case 3:cout << a * b << endl; break;
		case 4:cout << a / b << endl; break;
		}
	}
	else {
		cout << "Ошибка" << endl;
	}
	Case6.Единицы длины пронумерованы следующим образом : 1 — дециметр,
		2 — километр, 3 — метр, 4 — миллиметр, 5 — сантиметр.Дан номер
		единицы длины(целое число в диапазоне 1–5) и длина отрезка в этих
		единицах(вещественное число).Найти длину отрезка в метрах.
	int g, a;
	cin >> g >> a;
	switch (g) {
	case 1:cout << a / 10 << endl; break;
	case 2:cout << a * 1000 << endl; break;
	case 3:cout << a << endl; break;
	case 4:cout << a / 1000 << endl; break;
	case 5:cout << a / 100 << endl; break;
	}
	Задача 1.1
	int a, b, c;
	cin >> a >> b >> c;
	cout << (a == b && c == b && a == c) << endl;
	задача 2.1
int n, b;
cin >> n;
b = n % 2;
cout << (b == 0 && n > 10) << endl;
Задача 3.1
int a, b, c;
cin >> a >> b >> c;
cout << (a == c || a == b || c == b  ) << endl;
Задача 1.2
int a, b, n;
cin >> a >> b;
n = a + b;
if (n >= 180) {
	cout << "Такой треугольник не может существовать" << endl;
}
else if (a == 90 || b == 90 || n == 90){
	cout << "Это прямоугольный треугольник" << endl;
}
else {
	cout << "Это треугольник" << endl;
}
Задача 2.2
int x, y;
cin >> x >> y;
if (x > 0 && y > 0) {
	cout << "во 1" << endl;
}
if (x < 0 && y > 0) {
	cout << "во 2" << endl;
}
if (x < 0 && y < 0) {
	cout << "во 3" << endl;
}
if (x > 0 && y < 0) {
	cout << "во 4" << endl;
}
Задача 3.2 
int a, b, c, n, t, h;
cin >> a >> b >> c;
//нахождение наибольшего 
if (a > b && a > c) {
	n = a;
}
else if (a < b && b > c) {
	n = b;
}
else {
		n = c;
	}
//нахождение наименьшего
if (a < b && a < c) {
	t = a;
}
else if (a > b && b < c) {
	t = b;
}
else {
	t = c;
}
h = t + n;
cout << h << endl;
Задача 1.3*/
int a;
	cin >> a;
	switch (a) {
	case 0: cout << "zero" << endl; break;
	case 1: cout << "one" << endl; break;
	case 2: cout << "two" << endl; break;
	case 3: cout << "three" << endl; break;
	case 4: cout << "four" << endl; break;
	case 5: cout << "five" << endl; break;
	case 6: cout << "six" << endl; break;
	case 7: cout << "seven" << endl; break;
	case 8: cout << "eight" << endl; break;
	case 9: cout << "nine" << endl; break;
	default: cout << "Ошибка" << endl;

}


