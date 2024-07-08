#include<stdio.h>
#include<stdlib.h>
struct Arslan
{
	int Id;
	struct Arslan *next;	
};

void Linkage(struct Arslan * link)
{
	while(link!=NULL)
	{
		printf("%d\n",link->Id);
		link=link->next;
	}
}
struct Arslan * Insertatfirst(struct Arslan * a,int data)
{
	struct Arslan * ptr =(struct Arslan *)malloc(sizeof(struct Arslan));
//	ptr =(struct Arslan *)malloc(sizeof(struct Arslan));
	ptr->next=a;
	ptr->Id=data;
	return ptr;	
}
struct Arslan * InsertatLast(struct Arslan * a,int data)
{
	struct Arslan * ptr =(struct Arslan *)malloc(sizeof(struct Arslan));
	ptr->Id=data;
//	ptr =(struct Arslan *)malloc(sizeof(struct Arslan));
	struct Arslan * p =a;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next = ptr;
	ptr->next=NULL;
	return a;	
}
struct Arslan *InsertatIndex(struct Arslan * b,int data,int index)
{
	struct Arslan * ptr =(struct Arslan *)malloc(sizeof(struct Arslan));
	struct Arslan * p =b;
	for( int i=0; i!=index-1; i++)
	{
		p =p->next;
	}	
	ptr->Id=data;
	ptr->next = p->next;
	p->next = ptr;
	return b;	
}
int main()
{
	struct Arslan * first;
	struct Arslan * second;
	struct Arslan * third;
	struct Arslan * fourth;
	first =(struct Arslan *)malloc(sizeof(struct Arslan));
	second =(struct Arslan *)malloc(sizeof(struct Arslan));
	third =(struct Arslan *)malloc(sizeof(struct Arslan));
//	Memory(first,second,third);
	first->Id = 10;
	first->next = second;
	second->Id = 20;
	second->next = third;
	third->Id=30;
	third->next =NULL;
	Linkage(first);
	printf("---------------------\n");
	//first =Insertatfirst(first,30);
	//Linkage(first);
	first =InsertatIndex(first,50,1);
	Linkage(first);
/*	first =InsertatLast(first,50);
	Linkage(first);*/
	return 1;
}
