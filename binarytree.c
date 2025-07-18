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
//preorder traversal
void preOrderTraversal(struct Node *root){
    if(root!=NULL){
        printf("%d\n",root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}
void postOrderTraversal(struct Node *root){
    if(root!=NULL){
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d\n",root->data);
    }
}

//inoder traversal
void inOrderTraversal(struct Node *root){
    if(root!=NULL){
        inOrderTraversal(root->left);
        printf("%d\n",root->data);
        inOrderTraversal(root->right);
    }
}

int main(){
    struct Node *p=createNode(4);
    struct Node *p1=createNode(1);
    struct Node *p2=createNode(6);
    struct Node *p3=createNode(5);
    struct Node *p4=createNode(2);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    printf("pre order traversal\n");
    preOrderTraversal(p);
    printf("post order traversal\n");
    postOrderTraversal(p);
    printf("inorder traversal\n");
    inOrderTraversal(p);
    return 0;
}