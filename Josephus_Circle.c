//! N people have decided to elect a leader by arranging themselves in a circle
//! and eliminating every Mth person around the circle, closing ranks as each 
//! person drops out. Find which person will be the last one remaining 
//! (with rank 1)

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* createnode(int x)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=newnode;
    newnode->data=x;
    return newnode;
}
struct node* insertnode(struct node *head,struct node *tail,int x)
{
    struct node *p=createnode(x);
    tail->next=p;
    p->next=head;
    return p;
}
void display(struct node *p)
{
    struct node *begin=p;
    while(p->next!=begin)
    {
        printf("%d -> ",p->data);
        p=p->next;
    }
    printf("%d -> ...\n",p->data);
}
int chooseleader(struct node *head,int n,int m)
{
    int i=1;
    while(n!=1)
    {
        if((i+1)%m==0)
        {
            struct node *p=head->next;
            head->next=head->next->next;
            free(p);
            n--;
        }
        else
            head=head->next;
        i++;
    }
    return head->data;
}
void solve()
{
    int n,i,m;
    scanf("%d %d",&n,&m);
    struct node *head,*tail;
    head=createnode(1);
    tail=head;
    for(i=2;i<=n;i++)
        tail=insertnode(head,tail,i);
    display(head);
    int ans=chooseleader(head,n,m);
    printf("%d\n",ans);
}
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
        solve();
}