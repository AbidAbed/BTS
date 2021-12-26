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
	bool AddEL(Node*root,int);
public:
	bool AddEL(int);
	bool DeleteEl(int);
	int size();
	int is_empty();
	Tree();
	void operator=(Tree);
	bool Delete_ALL();
};