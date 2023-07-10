#include<bits\stdc++.h>
using namespace std;
//b.t.
class node{
    public:
        int data;
        node* left;
        node* right;
    node(){
        left = nullptr;
        right = nullptr;
    }
    node(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};
node* buildTree(node* root){
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;
    //null
    if(data == -1){
        return nullptr;
    }
    root = new node(data);
    //left node
    cout<<"left node "<<data<<endl;
    root->left = buildTree(root->left);

    //right node
    cout<<"right node "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversel(node* root){

}
void InOrderTraversel(node* root){
    if(root == NULL){
        return;
    }
    //LNR
    //left 
    InOrderTraversel(root->left);
    //print
    cout<<root->data<<" ";
    //right
    InOrderTraversel(root->right);
}
void PreOrderTraversel(node* root){
    if(root == NULL){
        return;
    }
    //NLR
    //print
    cout<<root->data<<" ";
    //left 
    PreOrderTraversel(root->left);
    //right
    PreOrderTraversel(root->right);
}
void PostOrderTraversel(node* root){
    if(root == NULL){
        return;
    }
    //LRN
    //left 
    PostOrderTraversel(root->left);
    //right
    PostOrderTraversel(root->right);
    //print
    cout<<root->data<<" ";
}
node* buildFromLevelOrder(node* root){
    //using queue
}
int main(){
    node* root = nullptr;
    root = buildTree(root);
    InOrderTraversel(root);
    cout<<endl;
    PreOrderTraversel(root);
    cout<<endl;
    PostOrderTraversel(root);
    return 0;
}