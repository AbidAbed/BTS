#include"class.h"


bool Tree::AddEL(Node*&r,int data){
	if(r==0)
	{
		r=new Node(data);
		return true;
	}
	if(data<r->data)
		return AddEL(r->left,data);
	if(data>r->data)
		return AddEL(r->right,data);
	if(data==r->data)
		return false;
}

bool Tree::AddEL(int data){
	Node* r=root;
	return AddEL(r,data);
}


////////////////////////////////////////



	bool Tree::DeleteEl(int data){
	return true;
}
/////////////////////////////////
	int Tree::size(){
	int result=-1;
	return result;
}
/////////////////////////////////////////////
	int Tree::is_empty(){
	return root==0;
}
////////////////////////////////////////////
	Tree::Tree(){
	root=0;
}


////////////////////////////////////////
bool Tree::Delete_ALL(){
	Node*r=root;
	return Delete_ALL(r);
}

bool Tree::Delete_ALL(Node*&r){
	if(r!=0){
	
		Delete_ALL(r->left);
		Delete_ALL(r->right);
		delete r;
		r=0;
	}
	
	return true;
}
////////////////////////////////////////
	void Tree::operator=(Tree tree){
	
	Node*r=tree.root;
	
	if(!is_empty()){
		Delete_ALL();
	}
	
}

///////////////////////////////////////////////

void Tree::print(){
	Node* r= root;
	print(r);
}

void Tree::print(Node* r){
	if(r!=0){
	cout<<r->data;
	print(r->left);
	print(r->right);
	
	}
}