#include "linked_list.cc"

void main() {
	LinkedList<int> lst1;
	lst1.push_tail(1);
	lst1.push_tail(2);
	lst1.push_tail(3);
	lst1.print_list();
	lst1.push_tail(4);
	lst1.reverse();
	lst1.print_list();
}
	