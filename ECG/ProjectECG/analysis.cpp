#include <iostream>
#include <string>

#include "Analysis.h"

using namespace std;

//Функция для анализа P зубца
string P(double length, double height)
{
	if (length < 0)
		throw exception();
	
	if ((length <= 0.11) && (height > 0) && (height <= 0.20))
		return "Зубец P в нормальном состоянии";
	else
		return "Отклонение от нормы в зубце P";
	
}

//Функция для анализа Q зубца TODO
string Q(double length, double height)
{
	if (length < 0)
		throw exception();

	if ((length <= 0.11) && (height > 0) && (height <= 0.20))
		return "Зубец Q в нормальном состоянии";
	else
		return "Отклонение от нормы в зубце Q";

}

//Функция для анализа R зубца TODO
string R(double length, double height)
{
	if (length < 0)
		throw exception();

	if ((length <= 0.11) && (height > 0) && (height <= 0.20))
		return "Зубец R в нормальном состоянии";
	else
		return "Отклонение от нормы в зубце R";

}

//Функция для анализа S зубца TODO
string S(double length, double height)
{
	if (length < 0)
		throw exception();

	if ((length <= 0.11) && (height > 0) && (height <= 0.20))
		return "Зубец S в нормальном состоянии";
	else
		return "Отклонение от нормы в зубце S";

}

//Функция для анализа T зубца TODO
string T(double length, double height)
{
	if (length < 0)
		throw exception();

	if ((length <= 0.11) && (height > 0) && (height <= 0.20))
		return "Зубец T в нормальном состоянии";
	else
		return "Отклонение от нормы в зубце T";

}

//Функция для анализа U зубца TODO
string U(double length, double height)
{
	if (length < 0)
		throw exception();

	if ((length <= 0.11) && (height > 0) && (height <= 0.20))
		return "Зубец U в нормальном состоянии";
	else
		return "Отклонение от нормы в зубце U";

}