#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node* next;
  Node(int data1,Node* next1){
    data=data1;
    next=next1;
  }
  Node(int data1){
    data=data1;
    next=nullptr;
  }
  
};

//removes the first node of linked list
Node* removesHead(Node* head){
  if(head==NULL) return head;
  Node* temp=head;
  head=head->next;
  delete temp;
  return head;

}


//converts arrays to linked list
Node* convertArr2LL(vector<int>&arr){
  if(arr.empty()) return nullptr;

  Node* head = new Node(arr[0]);
  Node* tail = head;
  for(int i=1;i<arr.size();i++){
    tail->next=new Node(arr[i]);
    tail=tail->next;
  }
  return head;
}

//prints the entire linked list
void print(Node* head){
  Node* temp=head;
  while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

//deletes the tail of the linked list
Node* removeTail(Node*head){
  if(head==NULL || head->next==NULL) return NULL;
  Node* temp=head;
  while(temp->next->next != NULL){
    temp=temp->next;
  }
  delete temp->next;
  temp->next= nullptr;
  return head;
}

//deletes kth element of the linked list
Node* deletek(Node* head,int k){
    if(head==NULL) return head;
    if(k==1){
      Node* temp=head;
      head=head->next;
      free(temp);
      return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
      cnt++;
      if(cnt==k) {
        prev->next=prev->next->next;
        free(temp);
        break;
      }
      prev=temp;
      temp=temp->next;
    }
    return head;
}

//removes element using value
Node* removeEl(Node* head,int el){
    if(head==NULL) return head;
    if(head->data==el){
      Node* temp=head;
      head=head->next;
      free(temp);
      return head;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
      if(temp->data==el) {
        prev->next=prev->next->next;
        free(temp);
        break;
      }
      prev=temp;
      temp=temp->next;
    }
    return head;
}

int main(){
vector<int>arr={12,5,8,7};
Node* head=convertArr2LL(arr);
//head=removesHead(head);
//head=removeTail(head);
//head=deletek(head,3);
head=removeEl(head,7);

print(head);


}