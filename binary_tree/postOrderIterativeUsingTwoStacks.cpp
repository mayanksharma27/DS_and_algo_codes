/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/


void postOrder(node *root) {
    if(root != NULL){
        node * temp = root;
        stack<node *> s1,s2;
        s1.push(temp);
        while(!s1.empty()){
            temp = s1.top();
            s1.pop();
            if(temp -> left)s1.push(temp->left);
            if(temp -> right)s1.push(temp->right);
            s2.push(temp);
        }
        while(!s2.empty()){
            cout<<s2.top()->data<<" ";
            s2.pop();
        }
    }
}

