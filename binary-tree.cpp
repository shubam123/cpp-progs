/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   binary-tree.cpp
 * Author: shubam
 *
 * Created on 22 June, 2017, 4:49 PM
 */

#include <cstdlib>
#include<iostream>
using namespace std;

struct BTNode{
    int data;
    BTNode* left;
    BTNode* right;
};
BTNode *BTRoot;

BTNode* newnode(int value)
{
    BTNode *temp= new BTNode;
    temp->data=value;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
     
BTNode* insert(BTNode *root,int value)
{
    if(root==NULL)
    {
        BTNode *new_node = newnode(value);
        root=new_node;
    }
    else if(value<=root->data)
    {
        root->left=insert(root->left,value);
    }
    else
    {
        root->right=insert(root->right,value);
    }
    return root;
}

void inorder(BTNode *node)
{
    if(node==NULL)
        return;
    inorder(node->left);
    cout<<node->data;
    inorder(node->right);
}

void preorder(BTNode* node)
{
    if(node==NULL)
        return;
    cout<<node->data;
    preorder(node->left);
    preorder(node->right);
}

void postorder(BTNode* node)
{
    if(node==NULL)
        return;
    cout<<node->data;
    postorder(node->right);
    postorder(node->left);
}



bool search(BTNode *BTNode,int value)
{
    if(BTNode==NULL)
        return false;
    
    if(value==BTNode->data)
        return true;
    else if(value<BTNode->data)
        return search(BTNode->left,value);
    else
        return search(BTNode->right,value);
}
int max(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}


int height(BTNode* node){ 
    if(node==NULL)
    {
        return -1;
    }
    int l_ht = height(node->left);
    int r_ht = height(node->right);
    return max(l_ht,r_ht)+1;
}

void bfs(BTNode* node) // also known as level order
{
    if(node==NULL)
        return;
//    cout<<node->data;
    if(node->left!=NULL)
        cout<<node->left->data;
    if(node->right!=NULL)
        cout<<node->right->data;
    bfs(node->left);
    bfs(node->right);
}

void dfs(BTNode* node)   //inorder, preorder or postorder.. here i am doing pre order
{
    if(node==NULL)
        return;
    cout<<node->data;
    dfs(node->left);
    dfs(node->right);
}
/*
        
int main(int argc, char** argv) {
    BTRoot=NULL; 
    BTRoot=insert(BTRoot,6);
    BTRoot=insert(BTRoot,5);
    BTRoot=insert(BTRoot,9);
    BTRoot=insert(BTRoot,7);
    BTRoot=insert(BTRoot,3);
    BTRoot=insert(BTRoot,1);
    BTRoot=insert(BTRoot,4);
    BTRoot=insert(BTRoot,8);
    BTRoot=insert(BTRoot,2);
    cout<<"Inorder:\t";
    inorder(BTRoot);
    cout<<"\nPreorder:\t";
    preorder(BTRoot);
    cout<<"\nPostorder:\t";
    postorder(BTRoot);
    
    int fnd=10;
    cout<<"\nELEM \""<<fnd<<"\" FOUND:"<<search(BTRoot,fnd);
    
    cout<<endl<<"Height is:\t"<<height(BTRoot);
    
    cout<<endl<<"DFS id is:\t";
    dfs(BTRoot);
    
    cout<<endl<<"BFS id is:\t";
    bfs(BTRoot);
    
    
    
    return 0;
}

*/