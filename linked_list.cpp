#include <iostream>

using namespace std;
void DesplayMenu();
void DesplayType();

enum listType { Doubly = 1, Singly = 2, Circular = 3, Doubly_Circular = 4 };

//Node
//template <typename T>
class Node
{
public:
	Node(Node * previous, Node * next, int value) 
	{
		this->next = next;
		this->previous = previous;
		this->value = value;
	}
private:
	Node * previous;
	Node * next;
	int value;
};

//LinkedList
//template <typename T>
class LinkedList
{
public:
	LinkedList()
	{
		head = NULL;
		tail = NULL;
		SizeCount = 0;
		ListType = -1;
	}
	//checks if list is empty
	bool isEmpty()
	{
		return head == NULL;
	}

	//Adds node to front of list
	//template <typename T>
	void push(Node* n)
	{
		if (isEmpty())
		{
			head = new Node(NULL, NULL, value);
			tail = head;
		}
		else {
			if (ListType != Circular || ListType != Doubly_Circular)
			{
				head->previous = new Node(NULL, head, value);
				head = head->previous;
			}
			else
			{
				head->previous = new Node(tail, head, value);
				head = head->previous;
			}

		}
		SizeCount++;
	}

	//adds node at end of list
	//Node(previus, next, value)
	//template <typename T>
	void append(Node * n)  //void append(T value) He wants me to pass a pointer to a Node
	{
		if (isEmpty())
		{
			head->next = n;
			n->previous = head;
			tail->previous = n;
			n->next = tail;
		//	head = new Node(NULL, NULL, value);
		//	tail = head;
		}
		else {
			if (ListType != Circular || ListType != Doubly_Circular)
			{
				//temp->previous = tail->previous;
				tail->next = new Node(tail, NULL, value);
				tail = tail->next;
			}
			else
			{
				tail->next = new Node(tail, head, value);
				tail = tail->next;
			}
		}
		SizeCount++;
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

	void setListType(int ListType)
	{
		this -> ListType = ListType;
	}


	//template <typename T>
	bool perform_operation(int op_code, int value)
	{
		switch (op_code)
		{
		case 1:
			cout << "Choice 1" << endl;
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

		}
	}
private:
	Node * head;
	Node * tail;
	int SizeCount;
	int ListType;

};

//main function
int main()
{
	DesplayType();
	int ListType = -1;
	while (ListType < 1 && ListType > 4)
	{
		cin >> ListType;
	}
	
	LinkedList List1;
	List1.setListType(ListType);

	Node myNode(NULL, NULL, 5);

	List1.append(myNode);

	DesplayMenu();
	system("pause");
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
	cout << "+------------------------------------+" << endl;
}
