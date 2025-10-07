#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left; //self referencial structure
    struct Node *right;
};
struct Node *createNode(int data){
    struct Node *n;
    n=(struct Node *)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}


//inoder traversal
void inOrderTraversal(struct Node *root){
    if(root!=NULL){
        inOrderTraversal(root->left);
        printf("%d\n",root->data);
        inOrderTraversal(root->right);
    }
}
void isBST(struct Node *root){
    struct Node *ptr=NULL
    if(root!=NULL){
        if(!BST(root)){
            return 0;
        }if(ptr!=NULL && root->data> left->data)
    }else{
        return 1;
    }
}

int main(){
    struct Node *p=createNode(5);
    struct Node *p1=createNode(3);
    struct Node *p2=createNode(6);
    struct Node *p3=createNode(1);
    struct Node *p4=createNode(4);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
  
    printf("inorder traversal\n");
    inOrderTraversal(p);
    return 0;
}