#include <iostream>
#include "clsMyQueue.h"

using namespace std;

int main()
{
	clsMyQueue <int> MyQueue;

	MyQueue.Push(10);
	MyQueue.Push(20);
	MyQueue.Push(30);
	MyQueue.Push(40);
	MyQueue.Push(50);

	cout << "\nQueue: \n";
	MyQueue.Print();

	cout << "\nQueue Size: " << MyQueue.Size();
	cout << "\nQueue Front: " << MyQueue.Front();
	cout << "\nQueue Back: " << MyQueue.Back();

	MyQueue.Pop();

	cout << "\n\nQueue after Pop()\n";
	MyQueue.Print();

	//Extension #1
	cout << "\nItem(2) : " << MyQueue.GetItem(2);

	//Extension #2
	MyQueue.Reverse();
	cout << "\n\nQueue after Reverse() : ";
	MyQueue.Print();

	//Extension #3
	MyQueue.UpdateItem(2, 600);
	cout << "\nQueue after updating Item(2) to 600 : ";
	MyQueue.Print();

	//Extension #4
	MyQueue.InsertAfter(2, 800);
	cout << "\nQueue after inserting 800 after Item(2) : ";
	MyQueue.Print();

	//Extension #5
	MyQueue.InsertAtFront(1000);
	cout << "\nQueue after Inserting 1000 at front : ";
	MyQueue.Print();

	//Extension #6
	MyQueue.InsertAtBack(2000);
	cout << "\nQueue after Inserting 2000 at end : ";
	MyQueue.Print();

	//Extension #7
	MyQueue.Clear();
	cout << "\nQueue after Clear() : ";
	MyQueue.Print();

	system("pause > 0");
	return 0;
}
