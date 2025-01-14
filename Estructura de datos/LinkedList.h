#pragma once
#include "IList.h"
#include "Node.h"
class LinkedList : public IList
{
    int cantidad;
    Node* top;
    Node* next;
    Node* GetNode(int Index);
    bool ValidIndex(int index);
public:
    LinkedList();
    ~LinkedList();
	void add(int value);
    void add(int value, int index);
    int remove(int index) ;
	int get(int index) ;
	int size() ;
	bool empty();
};

