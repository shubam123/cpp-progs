/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   all_zeroes_to_end.cpp
 * Author: shubam
 *
 * Created on 23 June, 2017, 9:00 PM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


int main(int argc, char** argv) {
    int x[8]={3,0,9,0,2,0,5,0};
    int endp=7,nz=0;
    for(int i=0; i<endp;i++)
    {
        if(x[i]!=0)
            x[nz++]=x[i];
    }
    while(nz<=endp)
    {
        x[nz++]=0;
    }
    
    for(int i=0;i<8;i++)
    {
        cout<<x[i];
    }
    
    
    
    
    

    return 0;
}

