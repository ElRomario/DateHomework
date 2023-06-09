﻿/*C++ 09 (5 июня 2023)
Перегрузка особых операторов
Срок: к следующему занятию, среде 7 июня

1. Напишите класс Даты. У даты есть день, месяц, год.

2. Перегрузите операторы инкремента и декремента, обе версии: префиксные и постфиксные. Инкремент увеличивает дату на 1 день, декремент уменьшает.

3. Нужно ли перегружать оператор = ? Обоснуйте ответ в комментарии.

4*. (Необязательная задача на повышенную оценку)

Перегрузите операторы += и -= для дат. Эти операторы позволяют добавить N дней к дате или отнять N дней.*/
#include "Date.h"
#include <iostream>
int main()
{
	Date date1(01, 01, 1999);
	Date date2(20, 04, 2021);
	cout << "date1: "; date1.print(); cout << endl;
	cout << "date2: "; date2.print(); cout << endl;

	//++date1;
	//cout << "(date1++) = "; date1.print(); cout << endl;

	date1++;
	cout << "(++date1) = "; date1.print(); cout << endl;

	//date1 += 5;
	//cout << "date1 += 5: "; date1.print(); cout << endl;

	date1 -= 565;
	cout << "date1 -= 5: "; date1.print(); cout << endl;

	/*date2 -= 5;
	cout << "date2 -= 5: "; date2.print(); cout << endl;*/
}
