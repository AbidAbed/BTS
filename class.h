#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int data,Node* left=0,Node*right=0){
		Node::data=data;
		Node::left=left;
		Node::right=right;
	}
};
class Tree{
	Node* root;
	bool AddEL(Node*&root,int);
	bool Delete_ALL(Node*&);
	void print(Node*);
public:
	void print();	
	bool AddEL(int);
	bool DeleteEl(int);
	int size();
	int is_empty();
	Tree();
	void operator=(Tree);
	bool Delete_ALL();
};