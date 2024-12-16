#include "BinTree.h"

int main()
{
	BinTree<int> bin;
	bin.insert(12);
	bin.insert(52);
	bin.insert(8);
	bin.insert(17);
	bin.insert(42);
	bin.insert(10);
	bin.insert(28);

	auto item = bin.search(-8);
	if (item == nullptr)
		cout << "Not found!\n";
	else item->showNode();

	cout << "-------------------------------\n";
	bin.showTree();
	cout << "\n-------------------------------\n";
 

}

