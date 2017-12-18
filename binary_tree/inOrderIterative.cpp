/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void inOrder(node *root) {
    if(root!= NULL){
        stack<node *> s;
        node * temp = root;
        while(1){
           while(temp){
               s.push(temp);
               temp= temp->left;
           } 
            if(s.empty())break;
            temp = s.top();
            s.pop();
            cout<<temp->data<<" ";
            temp = temp->right;
        }
    }
}

