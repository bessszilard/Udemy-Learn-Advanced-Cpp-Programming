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
public:
	class iterator;
};

template<class T>
class ring<T>::iterator {
public:
//	iterator() {
////		cout << "Hello from ring interator" << endl;
//	}
	void print(){
		cout << "Hello from ring interator" << T() << endl;
	}
};

#endif /* RING_H_ */
