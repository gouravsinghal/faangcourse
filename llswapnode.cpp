#include <iostream>
using namespace std;
class ListNode{
  public:
   int val;
   ListNode* next;
   ListNode(int val){
       this->val = val;
       next = NULL;
   }
};
ListNode* createList(int num){
    if(num == 0) return NULL;
    int a; cin>>a;
    ListNode* n = new ListNode(a);
    n->next = createList(num-1);
    return n;
}
void printList(ListNode* head){
    if(head == NULL) return ;
    cout<<head->val;
    if(head->next!=NULL)cout<<"->";
    printList(head->next);
    return ;
}


// Definition of a node of LinkedList
// class ListNode{
//   public:
//    int val;
//    ListNode* next;
//    ListNode(int val){
//        this->val = val;
//        next = NULL;
//    }
// };

ListNode* swaplist(ListNode* head) {
      if(head == NULL || head->next==NULL) return head;
      ListNode* newhead = swaplist(head->next->next);
      ListNode* temp = head->next;
      temp->next=head;
      head->next=newhead;
      return temp;
}




int main() {
    int n; cin>>n;
    ListNode* head = createList(n);
    printList(head);
    cout<<endl;
    printList(swaplist(head));
    cout<<endl;
    return 0;
}
