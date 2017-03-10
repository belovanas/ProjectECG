#include <iostream>
#include <string>

#include "Analysis.h"

using namespace std;

//������� ��� ������� P �����
string P(double length, double height)
{
	if (length < 0)
		throw exception();
	
	if ((length <= 0.11) && (height > 0) && (height <= 0.20))
		return "����� P � ���������� ���������";
	else
		return "���������� �� ����� � ����� P";
	
}

//������� ��� ������� Q ����� TODO
string Q(double length, double height)
{
	if (length < 0)
		throw exception();

	if ((length <= 0.11) && (height > 0) && (height <= 0.20))
		return "����� Q � ���������� ���������";
	else
		return "���������� �� ����� � ����� Q";

}

//������� ��� ������� R ����� TODO
string R(double length, double height)
{
	if (length < 0)
		throw exception();

	if ((length <= 0.11) && (height > 0) && (height <= 0.20))
		return "����� R � ���������� ���������";
	else
		return "���������� �� ����� � ����� R";

}

//������� ��� ������� S ����� TODO
string S(double length, double height)
{
	if (length < 0)
		throw exception();

	if ((length <= 0.11) && (height > 0) && (height <= 0.20))
		return "����� S � ���������� ���������";
	else
		return "���������� �� ����� � ����� S";

}

//������� ��� ������� T ����� TODO
string T(double length, double height)
{
	if (length < 0)
		throw exception();

	if ((length <= 0.11) && (height > 0) && (height <= 0.20))
		return "����� T � ���������� ���������";
	else
		return "���������� �� ����� � ����� T";

}

//������� ��� ������� U ����� TODO
string U(double length, double height)
{
	if (length < 0)
		throw exception();

	if ((length <= 0.11) && (height > 0) && (height <= 0.20))
		return "����� U � ���������� ���������";
	else
		return "���������� �� ����� � ����� U";

}