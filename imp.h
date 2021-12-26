#include"class.h"


bool Tree::AddEL(Node*r,int data){
	if(r==0)
	root=new Node(data);
	
	else if(r->data==data)
	return false;

	else if(r->data<data)
	AddEL(r->left,data);

	else if(r->data>data)
	AddEL(r->right,data);

	return true;
}

bool Tree::AddEL(int data){
	Node* r=root;
	AddEL(r,data);
}



	bool Tree::DeleteEl(int data){
	return true;
}
	int Tree::size(){
	int result=-1;
	return result;
}
	int Tree::is_empty(){
	return root==0;
}
	Tree::Tree(){
	root=0;
}
bool Tree::Delete_ALL(){
	return true;
}
	void Tree::operator=(Tree tree){
	
	Node*r=tree.root;
	
	if(!is_empty()){
		Delete_ALL();
	}
	
}