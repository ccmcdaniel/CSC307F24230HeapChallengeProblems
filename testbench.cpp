#include "Heap.h"

int main()
{
	Heap test_heap(false);

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


	vector<int> result = test_heap.HeapSort();

	cout << "Sorted Heap: ";
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << ", ";
	cout << "\n";

	test_heap.BuildHeap({ 45, 2, 1, 27, 90, 88, 84, 52, 19, 349, 1, 0, 55, 10 });

	test_heap.PrintHeap();
	cout << "\n";
}