/*
 * ring.h
 *
 *  Created on: Aug 14, 2019
 *      Author: szilard
 */

#ifndef RING_H_
#define RING_H_
#include <iostream>
using namespace std;

template<class T>
class ring {
private:
	int m_pos;
	int m_size;
	T *m_buffer;

public:
	class iterator;

public:
	ring(int size) : m_pos(0), m_size(size), m_buffer(NULL) {
		m_buffer = new T[size];
	}

	~ring() {
		delete [] m_buffer;
	}

	void add(T value) {
		m_buffer[m_pos] = value;
		m_pos++;

		if (m_pos == m_size) {
			m_pos = 0;
		}
	}

	T get(int index) {
		return m_buffer[index];
	}

	int size() {
		return m_size;
	}

};

template<class T>
class ring<T>::iterator {
public:
	void print(){
		cout << "Hello from ring interator" << T() << endl;
	}
};

#endif /* RING_H_ */
