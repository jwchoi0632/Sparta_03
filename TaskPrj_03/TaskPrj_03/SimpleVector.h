#pragma once

#include <iostream>
#include <algorithm>

using namespace std;

template <typename T>
class SimpleVector
{
public:
	SimpleVector();
	SimpleVector(int capacity);
	SimpleVector(const SimpleVector& other);
	void resize(int newCapacity);
	void push_back(const T& value);
	void pop_back();
	void sortData();
	int size();
	int capacity();
	T& operator[] (int index);
	~SimpleVector();

private:
	T* data;
	int currentSize;
	int currentCapacity;
};