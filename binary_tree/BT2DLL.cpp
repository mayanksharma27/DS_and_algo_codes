#include <iostream> 
using namespace std; 
  
struct node 
{ 
    int data; 
    node* left; 
    node* right; 
}; 

struct node* previous = 0; 

  
void BT2DLL(node *root, node **head) 
{ 

    if(root == 0)return;
    BT2DLL(root->left,head);
    if(previous == 0){
        *head = root;
    }
    else{
        previous->right=root;
        root->left = previous;
    }
    previous = root;
    BT2DLL(root->right,head);
} 

node* getNewNode(int data) 
{ 
    node* new_node = new node; 
    new_node->data = data; 
    new_node->left = new_node->right = 0; 
    return (new_node); 
} 
  
  
int main() 
{ 
    node *root        = getNewNode(4); 
    root->left        = getNewNode(2); 
    root->right       = getNewNode(6); 
    root->left->left  = getNewNode(1); 
    root->left->right = getNewNode(3); 
    root->right->left = getNewNode(5); 
  
    node *head = 0; 
    BT2DLL(root, &head); 
    node *temp = head;
    while(temp!=0){
        cout << temp->data << " "; 
        temp = temp->right; 
    } 
  
    return 0; 
} 
