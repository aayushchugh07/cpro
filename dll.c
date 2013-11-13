#include<stdio.h>
#include<stdlib.h>
#define SCAN(x) scanf("%d",&(x))
typedef struct dnode{
  int val;
  struct dnode *next;
  struct dnode *prev;
} dnode;
dnode *newnode(int val){
  dnode* x=(dnode *)malloc(sizeof(double*));
  x->val=val;x->prev=x->next=NULL;
  return x;
}
dnode* insertFirst(dnode *old_head,int x){
  dnode* new_node=newnode(x);
  if(old_head)
    old_head->prev=new_node;
  new_node->next=old_head;
  new_node->prev=NULL;
  return new_node;
}
int find(dnode *head,int valtofind){
  int nodecount=1;
  while(head!=NULL){
    if(head->val==valtofind){
      return nodecount;
    }else nodecount++;
    head=head->next;
  }
  return -1;
}
void print(dnode *head){
  while(head!=NULL){
    printf("%d ",head->val);
    head=head->next;
  }printf("\n");
}
void delete(dnode *head, int val,dnode **ret_head,dnode **ret_tail){
  if(head==NULL){printf("Not found\n");return;}
  if(head->val==val){
    dnode *retVal=head->prev;
    if(head->prev)head->prev->next=head->next;else *(ret_head)=head->next;
    if(head->next)head->next->prev=head->prev;else *(ret_tail)=head->prev;
    free(head);
    return;
  }
  else  delete(head->next,val,ret_head,ret_tail);
}
void pins(){printf("\n1 insert\t2 find\t 3 print\t4 delete\t5 head,tail\t6insert j after k\t\n");} 
void insert(dnode *head, int ins_val,int find_val,dnode **ret_head,dnode **ret_tail){
  //insert ins_val after find_val
  if(head==NULL){printf("Not found p%d\n",find_val); return;}
  if(head->val==find_val){
    dnode *new_node=newnode(ins_val);
    new_node->next=head->next;
    new_node->prev=head;
    if(new_node->next)new_node->next->prev=new_node;else *(ret_tail)=new_node;
    head->next=new_node;
    return;
  }
  insert(head->next,ins_val,find_val,ret_head,ret_tail);
}
int main(){
  int i,j,k,n,m,action;
  dnode *head=NULL,*tail=NULL;
  pins();
  while(SCAN(action)){
    if(action==1){
      //insert first 
      SCAN(j);
      head=insertFirst(head,j);
      if(!tail)tail=head;
    }
    else if(action==2){
      //find
      int val;SCAN(j);
      printf("%d\n",find(head,j));
    }
    else if(action==3){
      //print
      print(head);
    }
    else if(action== 4){
      //delete
      SCAN(j);
      delete(head,j,&head,&tail);
    }
    else if(action==5){
      //print head and tail values
      if(head==NULL || tail==NULL){
	printf("Empty\n");
      }else printf("head: %d\ttail: %d\n",head->val,tail->val);
    }
    else if(action==6){
      //insert j after k
      SCAN(j);SCAN(k);
      insert(head,j,k,&head,&tail);
    }
    pins();
  }
  
  return 0;
}
