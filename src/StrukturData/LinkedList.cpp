//Linear Singly Linked List
#include<iostream>
#include<stdlib.h>
using namespace std;
struct SIMPUL{
    int data;
    struct SIMPUL *next;
};

SIMPUL *FIRST=NULL, *LAST=NULL,*P;

void InsertKiri(int inputData){
    P=(SIMPUL*)malloc(sizeof(SIMPUL));
    if(P!=NULL)  //berhasil
    {
        if(FIRST==NULL){  //linked list masih kosong
            FIRST=P;
            LAST=P;
            P->next=NULL;
        }
        else{  //sudah ada simpul
            P->next=FIRST;
            FIRST=P;
        }
        P->data=inputData;
    }
}

void InsertKanan(int inputData){
    P=(SIMPUL*)malloc(sizeof(SIMPUL));
    if(P!=NULL)  //berhasil
    {
        if(FIRST==NULL){  //linked list masih kosong
            FIRST=P;
            LAST=P;
            P->next=NULL;
        }
        else{  //sudah ada simpul
            LAST->next=P;
            LAST=P;
            LAST->next=NULL;
        }
        P->data=inputData;
    }
}

void InsertTengah(int noSimpul,int inputData)
{
    int jmlSimpul;
    P=(SIMPUL*)malloc(sizeof(SIMPUL));
    if(P!=NULL)
    {
        if(FIRST==NULL){  //linked list masih kosong
            FIRST=P;
            LAST=P;
            P->next=NULL;
        }
        else
        {
           if(jmlSimpul<noSimpul)
           {
             InsertKanan(inputData);
           }
           else
           {
               struct SIMPUL *current=FIRST;
               for(int j=0;j<noSimpul-1;j++)
               {
                   current=current->next;
               }
              P->next=current->next;
              current->next=P;
           }
       }
       P->data=inputData;
   }
}

int jumlahSimpul(void)
{
    int jmlSimpul=0;
    struct SIMPUL *current=FIRST;
    if(FIRST!=NULL)
    {
        while(current!=NULL)
        {
            jmlSimpul++;
            current=current->next;
        }
    }
    return jmlSimpul;
}

void CetakData(void)
{
    if(FIRST!=NULL)
    {
        struct SIMPUL *current=FIRST;
        while(current!=NULL)
        {
            cout<<current->data<<" ";
            current=current->next;
        }
    }
    else
    {
        cout<<"Data Kosong"<<endl;
    }
}

void FreeMemory(void)
{
    if(FIRST!=NULL)
    {
        struct SIMPUL *current=FIRST;
        while(current!=NULL)
        {
            free(current);
            current=current->next;
        }
    }   
}

int main(void){
    InsertKiri(30);
    InsertKiri(20);
    InsertKiri(10); 
    InsertKanan(40);
    InsertKanan(50);
    InsertKanan(60);
    cout<<"Jumlah Simpul sebelum insert tengah = "<<jumlahSimpul()<<endl;
    CetakData();cout<<endl;
    InsertTengah(4,200);//pada posisi simpul no 5 (antara no 4 dan no 5)
    cout<<"Jumlah Simpul setelah insert tengah = "<<jumlahSimpul()<<endl;
    CetakData();
    FreeMemory();
    return 0;
}
