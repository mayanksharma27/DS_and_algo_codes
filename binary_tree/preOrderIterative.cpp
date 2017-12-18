/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void preOrder(node *root) {
    if(root!=NULL){
        stack<node *>s;
        node * temp = root;
        //s.push(temp);
        while(1){
            while(temp!=NULL){
                cout<<temp->data<<" ";
                s.push(temp);
                temp=temp->left;
            }    
            if(s.empty() == true) break;
            else{
                temp = s.top();
                s.pop();
                temp = temp->right;
            }
        }
    }
}

