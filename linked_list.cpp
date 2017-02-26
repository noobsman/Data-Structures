#include <iostream>

using namespace std;
void DesplayMenu();
void DesplayType();
void create_List();
enum listType { Doubly = 1, Singly = 2, Singly_Circular = 3, Doubly_Circular = 4 };

class Node
{
public:
	Node(int value) : value(value)
	{
		next = nullptr;
		prev = nullptr;
		this->value = value;
	}
	Node* get_prev()
	{
		return prev;
	}
	Node* get_prev()
	{
		return next;
	}
private:
	Node * prev, * next;
	int value;
};

class LinkedList
{
public:
	LinkedList()
	{
		head = nullptr;
		tail = nullptr;
		SizeCount = 0;
		ListType = -1;
	}
	//checks if list is empty
		bool isEmpty()
	{
		return head == nullptr;
	}
	void append(Node * n) //Adds node to end of the list
	{
		if (isEmpty())
		{
			head = n;
			tail = n;
		}

		else
		{
			if (ListType != Singly_Circular || ListType != Doubly_Circular)
			{
				if (Doubly)
				{
					n->next = nullptr;
					tail->next = n;
					n->prev = tail;
					tail = n;
				}
				else //Singly
				{
					n->next = nullptr;
					tail->next = n;
					tail = n;
				}
			}
			else
			{
				if (Doubly_Circular)
				{
					n->next = head;
					tail->next = n;
					n->prev = tail;
					tail = n;
					head->prev= tail;
				}
				else //Singly_Circular
				{
					n->next = head;
					tail->next = n;
					tail = n;
				}
			}
		}
		SizeCount++;
	}

	Node* create_node(int value)
	{
		Node* n = new Node(value);
		return n;
	}
	
	void remove_tail()
	{

	}

	void push(Node* n)
	{

	}

	Node* pop()
	{

	}

	void remove_i(int i)
	{

	}

	Node* get_i(int i)
	{

	}

	void add_i(Node* n, int i)
	{

	}

	void print()
	{

	}

	void deleteX()
	{

	}

	void reverse()
	{

	}

	void rotate(int rotations)
	{

	}

	void random_shuffle()
	{

	}

	int size()
	{

	}

	void setListType()
	{
		DesplayType();
		int ListType = -1;
		cin >> ListType;
		this->ListType = ListType;
	}
	bool perform_operation(int op_code, int value)
	{
		switch (op_code)
		{
		case 1:
			cout << "appending node" << endl;
			append(create_node(value));
			break;
		case 2:
			cout << "Choice 2" << endl;
			break;
		case 3:
			cout << "Choice 3" << endl;
			break;
		case 4:
			cout << "Choice 4" << endl;
			break;
		case 5:
			cout << "Choice 5" << endl;
			break;
		case 6:
			cout << "Choice 6" << endl;
			break;
		case 7:
			cout << "Choice 7" << endl;
			break;
		case 8:
			cout << "Choice 8" << endl;
			break;
		case 9:
			cout << "Choice 9" << endl;
			break;
		case 10:
			cout << "Choice 10" << endl;
			break;
		case 11:
			cout << "Choice 11" << endl;
			break;
		case 12:
			cout << "Choice 12" << endl;
			break;
		case 13:
			cout << "Choice 13" << endl;
			break;
		case 14:
			cout << "Reopening menu" << endl;
			DesplayMenu();
			break;
		case 0:
			cout << "Exiting" << endl;
			return 0;
			break;
		}
	}

private:
	Node * head;
	Node * tail;
	int SizeCount;
	int ListType;
};

int main()
{
	int value = -1;
	int op_code = -1;
	LinkedList List1;
	List1.setListType();
	DesplayMenu();
	do
	{
		do
		{
			cout << "enter op_code" << endl;
			cin >> op_code;
		} while (op_code >= 0 || op_code <= 14);
		if (op_code == 0)
		{
			value = NULL;
			List1.perform_operation(op_code, value);
		}
		cout << "enter value" << endl;
		cin >> value;
		List1.perform_operation(op_code, value);

	} while (op_code != 0);

	system("pause");
	return 0;
}

void create_List()
{
	
}
//User Display Map
void DesplayType()
{
	cout << "____List_Type?___________OP choice____" << endl;
	cout << "|___Singly_______________#1__________|" << endl;
	cout << "|___Doubly_______________#2__________|" << endl;
	cout << "|___Singly-Circulary_____#3__________|" << endl;
	cout << "|___Doubly-Circulary_____#4__________|" << endl;
	cout << "+------------------------------------+" << endl;
}
void DesplayMenu()
{
	cout << "____Menu_________________OP choice____" << endl;
	cout << "|___Append_______________#1__________|" << endl;
	cout << "|___Remove_Tail__________#2__________|" << endl;
	cout << "|___Push_________________#3__________|" << endl;
	cout << "|___Pop__________________#4__________|" << endl;
	cout << "|___Remove_i_____________#5__________|" << endl;
	cout << "|___Get_i________________#6__________|" << endl;
	cout << "|___Add_i________________#7__________|" << endl;
	cout << "|___Print________________#8__________|" << endl;
	cout << "|___Delete_______________#9__________|" << endl;
	cout << "|___Reverse______________#10_________|" << endl;
	cout << "|___Rotate_______________#11_________|" << endl;
	cout << "|___Random_Shuffle_______#12_________|" << endl;
	cout << "|___Size_________________#13_________|" << endl;
	cout << "|___Show_Menu____________#14_________|" << endl;
	cout << "|___Quit_________________#0__________|" << endl;
	cout << "+------------------------------------+" << endl;
}

