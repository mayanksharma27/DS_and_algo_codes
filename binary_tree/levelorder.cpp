//@author = mayank sharma
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root)
{
    if(root != NULL){
        node * temp = root;
        queue<node * > q;
        q.push(temp);
        while(!q.empty()){
            temp = q.front();
            q.pop();
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
            cout<<temp->data<<" ";
        }
    }
}

