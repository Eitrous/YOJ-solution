#include<bits/stdc++.h>
using namespace std;
#define int long long

struct node{
    int m;
    node *next;
};

node *insertNode( node *head,int n,int m)
{
    node *tmp = NULL;
    node *newnode = (node*)malloc(sizeof(node)); 
    if(n == 0){
        newnode->m = m;
        newnode->next = head;
        return newnode;
    }
    else{
        tmp = head;
        for (int i = 1; i < n; i++){
            tmp = tmp->next;
        }
        newnode->next = tmp->next;
        newnode->m = m;
        tmp->next = newnode;
        return head;
    } 
}

node *delNode( node *head,int n)
{
    node *tmp1 = head,*tmp2 = NULL;
    if(n == 1){
        return head->next;
    }
    else{
        for (int i = 1; i < n-1; i++){
            tmp1 = tmp1->next;
        }
        tmp2 = tmp1->next;
        tmp1->next = tmp2->next;
        return head;
    }
}

void printNode( node *head,int n)
{
    node *tmp = head;
    for (int i = 1; i < n; i++){
        tmp = tmp->next;
    }
    cout << tmp->m << '\n';
}

signed main()
{
    node head,*headp = &head;
    //node1.m = 1,node2.m = 2,node3.m = 3;
    //head.next = &node1,node1.next = &node2,node2.next = &node3;
    int k; cin >> k;
    char op;
    int n,m;
    while (k--){
        cin >> op;
        if(op == 'C'){
            cin >> n >> m;
            headp = insertNode(headp,n,m);
        }
        else if(op == 'D'){
            cin >> n;
            *headp = *delNode(headp,n);
        }
        else if(op == 'P'){
            cin >> n;
            printNode(headp,n);
        }
    }
    return 0;
}