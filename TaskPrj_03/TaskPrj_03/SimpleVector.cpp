#include "SimpleVector.h"

template <typename T>
SimpleVector<T>::SimpleVector()
{
	this->data = new T[10];
	this->currentSize = 0;
	this->currentCapacity = 10;
}

template <typename T>
SimpleVector<T>::SimpleVector(int capacity)
{
	this->data = new T[capacity];
	this->currentSize = 0;
	this->currentCapacity = capacity;
}

template <typename T>
SimpleVector<T>::SimpleVector(const SimpleVector& other)
{
	this->currentSize = other.currentSize;
	this->currentCapacity = other.currentCapacity;
	this->data = new T[currentCapacity];

	for (int i = 0; i < currentSize; i++)
	{
		this->data[i] = other.data[i];
	}
}

template <typename T>
void SimpleVector<T>::push_back(const T& value)
{
	if (currentSize < currentCapacity)
	{
		data[currentSize] = value;
		++currentSize;
	}
	else
	{
		resize(currentCapacity + 5);
		data[currentSize] = value;
		++currentSize;
	}
}

template <typename T>
void SimpleVector<T>::pop_back()
{
	if (currentSize > 0)
	{
		--currentSize;
	}
}

template <typename T>
void SimpleVector<T>::resize(int newCapacity)
{
	if (currentCapacity < newCapacity)
	{
		currentCapacity = newCapacity;
		T* newData = new T[currentCapacity];

		for (int i = 0; i < currentSize; i++)
		{
			newData[i] = data[i];
		}

		delete data;
		data = newData;
		newData = nullptr;
	}
}

template <typename T>
T& SimpleVector<T>::operator[] (int index)
{
	if (index < 0 || index >= currentCapacity)
	{
		cout << "Array index out of bound exception" << endl;
		exit(1);
	}
	return data[index];
}

template <typename T>
void SimpleVector<T>::sortData()
{
	sort(data, data + currentSize);
}

template <typename T>
int SimpleVector<T>::size()
{
	return currentSize;
}

template <typename T>
int SimpleVector<T>::capacity()
{
	return currentCapacity;
}

template <typename T>
SimpleVector<T>::~SimpleVector()
{
	delete data;
}
