#include <iostream>
#include <string>

using namespace std;

template <typename T>
struct Node {

	 T data;
     Node * left, *right;
     Node(T data)
     : data(data)
     , left(NULL)
     , right(NULL){
     }
     Node(T data, Node * left, Node * right)
     : data(data)
     , left(left)
     , right(right){
     }
 
};

template <class T>
class Tree {

	private:
		Node<T> * root;
		void printTree(Node<T> * elem);
    	void deleteTree(Node<T> * elem);

	public:
		Tree(T data);
		~Tree();
		Node<T> * createNode(T data, Node<T>* left, Node<T>* right);
		void print();
		void insert(T data);
		//void insert(T data, Node<T> * root);

};