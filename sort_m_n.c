#include<stdio.h>
#include <stdlib.h>
#define M 5
#define N 4

struct ln                                      //global variable maxium is 50
{ 
		int array[50]; 
		int num;
}s[50];

int cmp( const void *a , const void *b )          //cmpÊÇ×Ô¶¨ÒåµÄ±È½Ïº¯Êý£¬Êä´¦°´´ÓÐ¡µ½´óÅÅÁÐ
{ 
	int i=0;
	struct ln *c; 
	struct ln *d; 
	c = (struct ln *)a;
	d = (struct ln *)b; 


	while(c->array[i]==d->array[i])              //if the value is equal then the next col
	{
		i++;
		
	}
	return (c->array[i]-d->array[i]);
} 

void sort(int **buf,int row,int col)
{
	int i,j;

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			s[i].array[j]=*(*(buf+i)+j);

		s[i].num = i;
	
	}

	qsort(s,row,sizeof(s[0]),cmp);        //qsort ÓÃÓÚ¿ìËÙÅÅÁÐ
/*	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",s[i].array[j]);
		}
		printf("\n");
	}*/

	for(i=0;i<row;i++)
	{
		printf("buffer[%d] ",s[i].num);
	}
	printf("\n");

}


void main()
{
	int buffer[M][N]={{4,5,3,2},{3,4,2,5},{5,3,2,2},{4,3,2,1},{5,3,2,1}};
	int *ptr[5]={buffer[0],buffer[1],buffer[2],buffer[3],buffer[4]};
	sort(ptr,M,N);
}



/*
//most effecient code

unsigned parity(unsigned x)
{
	unsiged char[256]={
				0,1,1,0,1,0,0,1,
				1,0,0,0,0,1,1,0,
				0,1,1,,0,1,0,0,1,
				.......
	  };
	  return char[x];
}


  */

/*有无环 函数测试
// return value is 0 means no circle,and is 1 means ring occurred
int is_Looplist(Nodelist *Head)
{
	Nodelist *p1,*p2;
	if(head ==NULL || head->next ==NULL)
	{
		printf("no circle!\n");
		return 0;

	}
	p1 = Head;
	p2 = Head;

	while(p1->next!=NULL && p1->next->next !=NULL )
	{
		p2 = p2->next;
		p1 = p1->next->next;
		if(p1 =p2)
		{
			printf("there is circle!\n");
			return 1;
		}

	}
	return 0;
}





}






*/