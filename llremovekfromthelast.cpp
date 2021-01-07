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
    cout<<head->val<<' ';
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

ListNode* oddEvenList(ListNode* head,int k) {
      if(head == NULL) return NULL;

      ListNode* slow = head;
      ListNode* fast = head;
      for(int i=1;i<=k;i++) fast=fast->next;
      while(fast->next!=NULL)
      {
          slow=slow->next;
          fast=fast->next;
      }
      slow->next=slow->next->next;
      return head;
}




int main() {
    int n; cin>>n;
    int k;
    cin>>k;
    ListNode* head = createList(n);
    printList(oddEvenList(head,k));
    cout<<endl;
    return 0;
}
