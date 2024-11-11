#include "Heap.h"

int main()
{
	Heap test_heap;

	test_heap.Insert(34);
	test_heap.PrintHeap();
	cout << "\n";
	test_heap.Insert(90);
	test_heap.PrintHeap();
	cout << "\n";
	test_heap.Insert(65);
	test_heap.PrintHeap();
	cout << "\n";
	test_heap.Insert(40);
	test_heap.PrintHeap();
	cout << "\n";
	test_heap.Insert(100);
	test_heap.PrintHeap();
	cout << "\n";
	test_heap.Insert(97);
	test_heap.PrintHeap();
	cout << "\n";
	test_heap.Insert(20);
	test_heap.PrintHeap();
	cout << "\n";
	test_heap.Insert(2);
	test_heap.PrintHeap();
	cout << "\n";
}