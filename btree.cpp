///*
// * To change this license header, choose License Headers in Project Properties.
// * To change this template file, choose Tools | Templates
// * and open the template in the editor.
// */
//
///* 
// * File:   btree.cpp
// * Author: shubam
// *
// * Created on 1 June, 2017, 5:47 PM
// */
//
//#include <cstdlib>
//#include<iostream>
//using namespace std;
//struct btree{
//    int node;
//    btree * left;
//    btree * right;
//};
//
//
//void add_new(btree *base)
//{
//    int data;
//    cout<<"enter element to add";
//    cin>>data;
//    btree *elem = new btree;
//    elem->node=data;
//    elem->left=NULL;
//    elem->right=NULL;
//    if(base==NULL)
//    {
//        base = (struct btree*)malloc(sizeof(struct btree));
//        base->node=elem->node;
//        base->left=NULL;
//        base->right=NULL;
//    }
//    else
//    {
//        btree *curr = new btree;
//        curr = base;
//        while(curr!=NULL)
//        {
//            if(data>curr->node)
//            {
//                if(curr->right!=NULL)
//                {
//                    curr=curr->right;
//                }
//                else
//                {
//                    curr->right=elem;
//                }
//            }
//            else
//            {
//                if(curr->left!=NULL)
//                {
//                    curr=curr->left;
//                }
//                else
//                {
//                    curr->left=elem;
//                }
//            }
//        }
//    }
//}
//void del()
//{
//    
//}
//void search_key() 
//{
//    
//}
//
//void d_inorder(btree *base)
//{
//    if(base==NULL)
//    {
//        return;
//    }
//    
//    cout<"1 time----";
//    
//    d_inorder(base->left);
//    cout<<base->node;
//    d_inorder(base->right);    
//}
//void display(btree *base)
//{
//    cout<<"1 inorder, 2 preorder, 3 postorder";
//    int dopt;
//    cin>>dopt;
//    switch(dopt)
//    {
//        //--- inorder ----//
//        case 1:
//            d_inorder(base);
//            break;
//        case 2:
//            break;
//        default:
//            break;
//    }
//}
//
//struct btree* insert(btree * base, btree * single)
//{
//    if(base==NULL)
//    {
//        return single;
//    }
//    
//    if(single->node<base->node)
//    {
//        
//        base->left=insert(base->left,single);
//    }
//    else if(single->node>base->node)
//    {
//        base->right=insert(base->right,single);
//    }
//    
//    return base;
//        
////    while(curr!=NULL)
////            {
////                if(data>curr->node)
////                {
////                    if(curr->right==NULL)
////                    {
////                        curr->right=elem;
////                        
////                    }
////                    else
////                    {
////                        curr=curr->right;
////                    }
////                }
////                else
////                {
////                    if(curr->left!=NULL)
////                    {
////                        curr=curr->left;
////                    }
////                    else
////                    {
////                        curr->left=elem;
////                    }
////                }
////            }
//}
//int main() {
//    btree *base;
//    base=NULL; 
////    while(1)
////    {
////        cout<<"1 create node, 2 delete node, 3 display";
////        int opt;
////        cin>>opt;
////
////        switch(opt)
////        {
////            case 1:
////                add_new(base);
////                break;
////            case 2:
////                del();
////                break;
////            case 3:
////                display(base);
////                break;
////            default:
////                cout<<"invalid option!";
////                break;
////                exit;
////        }
//        
//        
//        
// //   }
//    int xx=3;
//    while(xx>0)
//    {
//        
//        int data;
//        cout<<"enter element to add";
//        cin>>data;
//        btree *elem;
//        elem->node=data;
//        elem->left=NULL;
//        elem->right=NULL;
//        if(base==NULL)
//        {
//            base = (struct btree*)malloc(sizeof(struct btree));
//            base->node=elem->node;
//            base->left=NULL;
//            base->right=NULL;
//        }
//        else
//        {
//            insert(base,elem);
//        }
//        
//        
//        xx--;
//    }
//    
//    
//    
//    
//    
//    d_inorder(base);
//    
//    
//    
//    
//    return 0;
//}
//
