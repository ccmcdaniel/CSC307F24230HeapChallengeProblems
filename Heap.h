#pragma once
#include <vector>
#include <iostream>

using std::cout;
using std::vector;


class Heap
{
private:
	vector<int> heap;
	bool max;


public:
	Heap(bool max = true)
	{
		this->max = max;
	}

	void Insert(int item)
	{
		//1. Add to end of array
		heap.push_back(item);
		
		//2. Compare the item to its current parent:
			//Swap if priority is greater than parent.
		
		if (heap.size() == 1)
			return;
		else
		{
			int curr_pos = heap.size() - 1;
			int parent_index = (curr_pos - 1) / 2;

			while ((curr_pos != 0) && HasPriority(curr_pos, parent_index))
			{
				
				swap(curr_pos, parent_index);
				curr_pos = parent_index;
				parent_index = (curr_pos - 1) / 2;
				//3. Repeat until heap property is restored
			}
		}
	}

	bool RemoveHeap(int& item)
	{
		if (heap.size() == 0)
			return false;

		else if (heap.size() == 1)
		{
			item = heap[0];
			heap.erase(heap.begin());
			return true;
		}
		//1. remove the root node and copy the last element to roots position.  return the old root's value.
		else
		{
			//set aside item to be returned.
			item = heap[0];

			//copy the last element to the roots location.
			heap[0] = heap[heap.size() - 1];

			//erase the last item to remove that position from the heap
			heap.erase(heap.end());

			//restore the heap property
		}

		//2. Restore the heap property on the new root by comparing it to its children and repeating until restored.
	}

	void PrintHeap()
	{
		for (int i = 0; i < heap.size(); i++)
		{
			cout << heap[i] << " - ";
		}
	}



private:

	bool HasPriority(int item_index, int compare_index)
	{
		if (max == true && heap[item_index] > heap[compare_index])
			return true;
		else if (max == false && heap[item_index] < heap[compare_index])
			return true;
		else
			return false;
	}

	void swap(int index_a, int index_b)
	{
		int temp = heap[index_a];
		heap[index_a] = heap[index_b];
		heap[index_b] = temp;
	}

};