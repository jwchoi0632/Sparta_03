#include "SimpleVector.h"
#include "SimpleVector.cpp"
#include <iostream>

using namespace std;

int main()
{
	SimpleVector<int> vec_int;
	SimpleVector<float> vec_float(5);

	for (int i = 0; i < vec_int.capacity(); i++)
	{
		vec_int.push_back(10 * i);
	}

	for (int i = 0; i < vec_float.capacity(); i++)
	{
		vec_float.push_back(12.3f * i);
	}
	cout << "�� ���� simple vector ���� �� push_back() ����" << endl;
	cout << "vec_int.size() = " << vec_int.size() << ", vec_int.capacity() = " << vec_int.capacity() << endl;
	cout << "vec_float.size() = " << vec_float.size() << ", vec_float.capacity() = " << vec_float.capacity() << endl;

	vec_int.pop_back();
	vec_float.pop_back();
	vec_float.pop_back();

	cout << "�� ���� simple vector���� pop_back() ����" << endl;
	cout << "vec_int.size() = " << vec_int.size() << ", vec_int.capacity() = " << vec_int.capacity() << endl;
	cout << "vec_float.size() = " << vec_float.size() << ", vec_float.capacity() = " << vec_float.capacity() << endl;

	vec_int.push_back(10);
	vec_int.push_back(10);
	vec_int.push_back(10);
	vec_int.push_back(10);

	cout << "vec_int���� ���� �뷮�� �Ѿ�� push_back() ����" << endl;
	cout << "vec_int.size() = " << vec_int.size() << ", vec_int.capacity() = " << vec_int.capacity() << endl;

	vec_int.resize(20);

	cout << "vec_int���� 20���� resize() ����" << endl;
	cout << "vec_int.size() = " << vec_int.size() << ", vec_int.capacity() = " << vec_int.capacity() << endl;

	cout << "vec_int�� ���� ���" << endl;

	for (int i = 0; i < vec_int.size(); i++)
	{
		cout << "vec_int[" << i << "] = " << vec_int[i] << endl;
	}

	vec_int.sortData();

	cout << "�������� ���� ��� ���" << endl;

	for (int i = 0; i < vec_int.size(); i++)
	{
		cout << "vec_int[" << i << "] = " << vec_int[i] << endl;
	}

	SimpleVector<float> newData(vec_float);

	cout << "���� �����ڷ� vec_float�� �����Ͽ� newData ����" << endl;
	cout << "vec_float �ּ� : " << &vec_float << endl;
	cout << "newData �ּ� : " << &newData << endl;
}