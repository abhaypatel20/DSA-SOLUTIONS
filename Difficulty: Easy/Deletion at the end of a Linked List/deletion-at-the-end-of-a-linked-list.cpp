/*
class Node {
	public:
	int data;
	Node* next;
	
	Node(int x) {
		data = x;
		next = NULL;
	}
};
*/
class Solution {
	public:
	Node* removeLastNode(Node* head) {
		
		if (head == NULL)
			return NULL;
		if (head->next == NULL)
			return NULL;
		Node* temp = head ;
		Node* prev = NULL;
		while (temp-> next != NULL) {
			prev = temp;
			temp = temp ->next;
		}
		prev-> next= NULL;
		return head;
		
	}
};
