void push(int x) {
    Node* temp = new Node(x);
    temp->next = top;
    top = temp;
}
//Time Complexity: O(1)
//Auxiliary Space: O(1)

