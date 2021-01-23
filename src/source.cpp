#include "header/header.h"



template <typename T>
Tree<T>::Tree(T data){
	root = new Node<T>(data);
}


template <typename T>
Tree<T>::~Tree()
{
    deleteTree(root);
}
template <typename T>
void Tree<T>::deleteTree(Node<T> * curr)
{
    if (curr)
    {
        deleteTree(curr->left);
        deleteTree(curr->right);
        delete curr;
    }
}



template <typename T>
Node<T> * Tree<T>::createNode(T data, Node<T>* left, Node<T>* right) {

    Node<T> * root;
    root = new Node<T>(data, left, right);
    return root;
}


template <typename T>
void Tree<T>::insert(T data)
{
    Node<T> * curr = root;
    while (curr && curr->data != data)
    {
        if (curr->data > data && curr->left == NULL)
        {
            curr->left = new Node<T>(data);
            return;
        }
        if (curr->data < data && curr->right == NULL)
        {
            curr->right = new Node<T>(data);
            return;
        }
        if (curr->data > data)
            curr = curr->left;
        else
            curr = curr->right;
    }
    
}

/*template <typename T>
void Tree<T>::insert(T data, Node<T> * root)
{
    if (root == NULL){ 
    	root = createNode(data, NULL, NULL);
    }
    else if (data > root->data) {
    	    cout << root->data<< endl;
        root->right = insert(data, root->right);
    }
    
    else if (data <= root->data) {
    	    cout << root->data<< endl;
        root->left = insert(data, root->left);
    }
    
}*/



template <typename T>
void Tree<T>::print()
{
    printTree(root);
    cout << endl;
}
template <typename T>
void Tree<T>::printTree(Node<T> * curr)
{
    if (curr)
    {
        printTree(curr->left);
        cout << curr->data << " ";
        printTree(curr->right);
    }
}





template class Tree<int>;
template class Tree<float>;
template class Tree<string>;