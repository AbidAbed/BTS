#include"imp.h"
int main(){
	Tree tree;
	cout<<tree.is_empty();
	tree.AddEL(1);
	tree.AddEL(2);
	tree.AddEL(3);
	tree.AddEL(4);
	tree.AddEL(5);
	tree.Delete_ALL();
	tree.print();

}