#include <stdio.h>
#include <stdlib.h>

struct vertex{
	
	int vertex_number;
	int visit;
	struct vertex *next;
};

struct list
{
	struct vertex *address;
	struct vertex *next;
	
};



struct vertex *graph[8];

void buildVertex();

void buildGraph();

void bfs(struct vertex *);	


void main()
{
	
	buildVertex();
	
	buildGraph();
	
	struct vertex *head;
	head=graph;
	
	bfs(head);
		
}


 buildVertex()
{
	struct vertex one;
	one.vertex_number=1;
	one.next=NULL;
	graph[0]=&one;
	
	struct vertex two;
	two.vertex_number=2;
	two.next=NULL;
	graph[1]=&two;
	
	struct vertex three;
	three.vertex_number=3;
	three.next=NULL;
	graph[2]=&three;
	
	struct vertex four;
	four.vertex_number=4;
	four.next=NULL;
	graph[3]=&four;
	
	struct vertex five;
	five.vertex_number=5;
	five.next=NULL;
	graph[4]=&five;
	
	struct vertex six;
	six.vertex_number=6;
	six.next=NULL;
	graph[5]=&six;
	
	struct vertex seven;
	seven.vertex_number=7;
	seven.next=NULL;
	graph[6]=&seven;
	
	struct vertex eight;
	eight.vertex_number=8;
	eight.next=NULL;
	graph[7]=&eight;
		
	
}



void buildGraph()
{
	int i;
	for(i=0;i<8;i++)
	{
		struct vertex *pointer;
		pointer=graph[i];
		
		printf("%s%d%s","Enetr Degree of vertex -> ",i+1,"\n");
		
		int degree;
		scanf("%d",&degree);
		
		int j;
		for(j=0;j<degree;j++)
		{
			int x;
			printf("%s","Eneter Vertex Number \n");
			scanf("%d",&x);
			
			struct list temp;
			temp.address=&graph[x-1];
			pointer->next=&temp;
			pointer=pointer->next;
	
		}
		
		pointer = NULL;
		free(pointer);
	}
}

int queue[8];
int i=-1;
void Enqueue(int *queue,int vertex)
{
if(i<8)
{

i++;
queue[i]= vertex;
}
else
i=-1;

}

int count=0;



 bfs(struct vertex *head)
{
	
	struct list *adjacent[8];
	int j=0;
if(head->visit==0)
{
	head->visit=1;
	Enqueue(queue,head->vertex_number);
while(head!=NULL)
{
	
	head=head->next;
	j++;
	adjacent[j]=head;
	
}
}
	
	
}




















