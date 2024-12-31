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
	cout << "두 개의 simple vector 생성 및 push_back() 수행" << endl;
	cout << "vec_int.size() = " << vec_int.size() << ", vec_int.capacity() = " << vec_int.capacity() << endl;
	cout << "vec_float.size() = " << vec_float.size() << ", vec_float.capacity() = " << vec_float.capacity() << endl;

	vec_int.pop_back();
	vec_float.pop_back();
	vec_float.pop_back();

	cout << "두 개의 simple vector에서 pop_back() 수행" << endl;
	cout << "vec_int.size() = " << vec_int.size() << ", vec_int.capacity() = " << vec_int.capacity() << endl;
	cout << "vec_float.size() = " << vec_float.size() << ", vec_float.capacity() = " << vec_float.capacity() << endl;

	vec_int.push_back(10);
	vec_int.push_back(10);
	vec_int.push_back(10);
	vec_int.push_back(10);

	cout << "vec_int에서 기존 용량을 넘어서는 push_back() 수행" << endl;
	cout << "vec_int.size() = " << vec_int.size() << ", vec_int.capacity() = " << vec_int.capacity() << endl;

	vec_int.resize(20);

	cout << "vec_int에서 20으로 resize() 수행" << endl;
	cout << "vec_int.size() = " << vec_int.size() << ", vec_int.capacity() = " << vec_int.capacity() << endl;

	cout << "vec_int의 원소 출력" << endl;

	for (int i = 0; i < vec_int.size(); i++)
	{
		cout << "vec_int[" << i << "] = " << vec_int[i] << endl;
	}

	vec_int.sortData();

	cout << "오름차순 정렬 결과 출력" << endl;

	for (int i = 0; i < vec_int.size(); i++)
	{
		cout << "vec_int[" << i << "] = " << vec_int[i] << endl;
	}

	SimpleVector<float> newData(vec_float);

	cout << "복사 생성자로 vec_float을 복사하여 newData 생성" << endl;
	cout << "vec_float 주소 : " << &vec_float << endl;
	cout << "newData 주소 : " << &newData << endl;
}