#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
	T info;
	Node* left;
	Node* right;

	Node(T value) { info = value; left = right = nullptr; }
	void showNode() {
		cout << "INFO: " << info << endl;
		cout << "\t Left: " << left << " Right: " << right << endl;
	}
};


template <typename U>
class BinTree {
	Node<U>* root; //Вказівник на перший вузол у дереві
public:
	BinTree() { root = nullptr; }
	~BinTree() {}

	void insert(U value) {
		Node<U>* el = new Node<U>(value);

		if (root == nullptr)//Якщо це перший вузол
			root = el;
		else {
			//1 Пошук місця
			Node<U>* p = root;
			Node<U>* pPrev = root;
			while (p != nullptr) {
				/*if (value < p->info) p = p->left;
				else p = p->right;*/
				pPrev = p;
				p = (value < p->info) ? p->left : p->right;
			}

			//2 Прив'язка вузла
			if (value < pPrev->info) pPrev->left = el;
			else pPrev->right = el;
		}
	}

	Node<U>* search(U value) {
		//Повернути адресу вузла зі значенням value
		//Якщо value немає в дереві, то повернути nullptr	
		Node<U>* p = root;
		while (p != nullptr && p->info != value)
		{
			p = (value < p->info) ? p->left : p->right;
		}

		return p;
	}

	//Повний обхід дерева
	void showTree() {
		if (root == nullptr)
			cout << "Дерево контейнерів порожнє!" << endl;
		else {
			// . . .	
		}
	}

};



