#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

template <typename T>
class Node
{
    Node *right;
    Node *left;
    T data;

public:
    Node(T x)
    {
        data = x;
        right = left = NULL;
    }
};

template <typename T>
class BinaryTree
{
private:
    Node<T> root;

public:
    BinaryTree(Node<T> *ptr)
    {
        root = ptr;
    }
    BinaryTree(T x)
    {
        root = new Node<T>(x);
    }
    void addElement(T data);
    void delElement(T data);
    void inOrder();
    void preOrder();
    void postOrder();
};

int main()
{
    Node<int> *root = new Node<int>(100);
    BinaryTree<int> my_tree(root);
}
