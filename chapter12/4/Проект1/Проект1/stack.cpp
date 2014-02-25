// stack.cpp -- Stack member functions
#include "stack.h"
#include <string.h>

Stack::Stack(int n)    // create an empty stack
{
	top = 0;
	pitems = new Item[n];
}

Stack::Stack(const Stack &st){
	
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	memcpy(pitems, st.pitems, size);
	//for (int i = 0; i < size; i++){
	//	pitems[i] = st.pitems[i];
	//}
}

Stack::~Stack(){

	delete[]pitems;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item & item)
{
	if (top < MAX)
	{
		pitems[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}

Stack & Stack::operator=(const Stack &st){
	if (this == &st){
		return *this;
	}
	delete []pitems;
	size = st.size;
	top = st.top;
	pitems = new Item [size];
	memcpy(pitems, st.pitems, size);
	return *this;
}