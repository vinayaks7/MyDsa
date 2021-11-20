bool search(Node* root,int k){

    if(root==nullptr){
        return false;
    }
    if(root->data == key){
        return true;
    }
    if(root->data>k){
        return(search(root->left,k));
    }
    return (search(root->right,k));
}