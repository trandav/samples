#include <string>

class Node {
public:
	Node();
	Node(int iValue);
	~Node();

	void print();

	std::string getLabel() const
	{ return mstrLabel; }
	void setLabel(const std::string strValue)
	{ mstrLabel = strValue; }

	int getValue() const
	{ return miValue; }
	void setValue(const int iValue)
	{ miValue = iValue; }

	Node * getNext() const
	{ return next; }
	void setNext(Node * nNext)
	{ next = nNext; }

protected:

private:
	std::string mstrLabel;
	int miValue;
	Node * next;
};