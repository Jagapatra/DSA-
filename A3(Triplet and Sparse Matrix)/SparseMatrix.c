//name:jagannath patra sic:22bcsi09 rollno:3
#include<stdio.h>
void read_triplet(int a[][3],int m);
void convert_sparse(int a[][3],int b[][20]);
void display_sparse(int b[][20],int x,int y);
main()
{
	int a[20][3],b[20][20],m,n;
	printf("Enter no of rows in the triplet matrix:");
	scanf("%d",&m);
	read_triplet(a,m);
	convert_sparse(a,b);
	printf("SPARSE MATRIX:\n");
	m=a[0][0];
	n=a[0][1];
	display_sparse(b,m,n);
}
void read_triplet(int a[][3],int m)
{
	int i,j;
	printf("Enter the elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\nTRIPLET MATRIX\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}
void convert_sparse(int a[][3],int b[][20])
{
	int i,j,k=1,n;
	int x=a[0][0],y=a[0][1];
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			b[i][j]=0;
	for(i=0;i<=a[0][2];i++)
	{
		for(j=0;j<x;j++)
		{
			for(n=0;n<y;n++)
			{
				if((a[k][0]==j)&&(a[k][1]==n))
				{	b[j][n]=a[k][2];
					k++;
				}
			}
		}
	}
}
void display_sparse(int b[][20],int m,int n)
{
	int i,j,k;
	printf("sparse matrix:\lab4@pc20153:~$ Connect
Enter nasserver Username :22bcsi09
Password required for share 22bcsi09 on 192.168.1.12
Domain [WORKGROUP]: 
Password: 
Nas Server Mounted.
Nasserver/smb-share:server=192.168.1.12,share=22bcsi09,user=22bcsi09$ 
Nasserver/smb-share:server=192.168.1.12,share=22bcsi09,user=22bcsi09$ cd DSA
Nasserver/DSA$ cd assignment3
Nasserver/assignment3$ vi q3.c
Nasserver/assignment3$ cc q3.c
Nasserver/assignment3$ ./a.out
Enter no of rows and columns respectively:4 4
Enter the elements:0 0 9 0
0 1 0 0
5 0 7 0
8 0 0 6
MATRIX
0	0	9	0	
0	1	0	0	
5	0	7	0	
8	0	0	6	

TRIPLET MATRIX:
Row	Column	Value
4	4	6	
0	2	9	
1	1	1	
2	0	5	
2	2	7	
3	0	8	
3	3	6	

TRANSPOSE TRIPLET MATRIX:
Row	Column	Value
4	4	6	
0	2	5	
0	3	8	
1	1	1	
2	0	9	
2	2	7	
3	3	6	
Nasserver/assignment3$ cc q2.c
Nasserver/assignment3$ ./a.out
Enter no of rows in the triplet matrix:7
Enter the elements:4 4 6
0 2 9
1 1 1
2 0 5
2 2 7
3 0 8
3 3 6

TRIPLET MATRIX
4	4	6	
0	2	9	
1	1	1	
2	0	5	
2	2	7	
3	0	8	
3	3	6	
SPARSE MATRIX:
sparse matrix:
0	0	9	4	
0	1	0	0	
5	0	7	0	
8	0	0	6	
Nasserver/assignment3$ cd ..
Nasserver/DSA$ mkdir assignment4
Nasserver/DSA$ cd assignment4
Nasserver/assignment4$ vi q1.c
Nasserver/assignment4$ cc q1.c
q1.c:9:1: error: unknown type name ‘bool’
 bool isfull();
 ^
q1.c:10:1: error: unknown type name ‘bool’
 bool isempty();
 ^
q1.c:27:1: error: unknown type name ‘bool’
 bool isfull()
 ^
q1.c:34:1: error: unknown type name ‘bool’
 bool isempty()
 ^
q1.c: In function ‘push’:
q1.c:43:11: warning: comparison between pointer and integer [enabled by default]
  if(isfull!=1)
           ^
q1.c: In function ‘pop’:
q1.c:53:12: warning: comparison between pointer and integer [enabled by default]
  if(isempty!=1)
            ^
Nasserver/assignment4$ vi q1.c
Nasserver/assignment4$ cc q1.c
q1.c: In function ‘push’:
q1.c:43:11: warning: comparison between pointer and integer [enabled by default]
  if(isfull!=1)
           ^
q1.c: In function ‘pop’:
q1.c:53:12: warning: comparison between pointer and integer [enabled by default]
  if(isempty!=1)
            ^
Nasserver/assignment4$ vi q1.c
Nasserver/assignment4$ cc q1.c
Nasserver/assignment4$ ./a.out
5	
5	10	15	
5	10	

Nasserver/assignment4$ vi q1.c
Nasserver/assignment4$ cc q1.c
Nasserver/assignment4$ ./a.out
5	
5	10	15	
5	10	

Nasserver/assignment4$ vi q1.c
Nasserver/assignment4$ cc q1.c
Nasserver/assignment4$ ./a.out
5	
5	10	15	
Stack is Full.
5	10	

Stack is Empty.
Nasserver/assignment4$ vi q1.c
Nasserver/assignment4$ vi q1.c
Nasserver/assignment4$ vi q1.c
Nasserver/assignment4$ cc q1.c
q1.c:4:19: fatal error: stbool.h: No such file or directory
 #include<stbool.h>
                   ^
compilation terminated.
Nasserver/assignment4$ vi q1.c
Nasserver/assignment4$ cc q1.c
Nasserver/assignment4$ ./a.out
5	
5	10	15	
Stack is Full.
5	10	

Stack is Empty.
Nasserver/assignment4$ vi q1.c
Nasserver/assignment4$ vi q2.c
Nasserver/assignment4$ vi q2.c
Nasserver/assignment4$ cc q2.c
Nasserver/assignment4$ ./a.out
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:1
Enter the element to push:45
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:1
Enter the element to push:34
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:3
45	34	
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:4 
Nasserver/assignment4$ vi q2.c
Nasserver/assignment4$ cc q2.c
Nasserver/assignment4$ ./a.out
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:2 
Stack is Empty.
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:1
Enter the element to push:78
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:1
Enter the element to push:89
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:1
Enter the element to push:90
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:1
Enter the element to push:34
Stack is Full.
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:3
78	89	90	
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:4
Nasserver/assignment4$ vi q2.c
Nasserver/assignment4$ cc q2.c
q2.c: In function ‘main’:
q2.c:35:3: error: ‘else’ without a previous ‘if’
   else
   ^
Nasserver/assignment4$ vi q2.c
Nasserver/assignment4$ cc q2.c
q2.c: In function ‘main’:
q2.c:35:3: error: ‘else’ without a previous ‘if’
   else
   ^
Nasserver/assignment4$ vi q2.c
Nasserver/assignment4$ cc q2.c
Nasserver/assignment4$ ./a.out
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:1
Enter the element to push:34
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:2
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:3
Stack is empty.
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:3
Stack is empty.
MENU:
1)push
2)pop
3)display
4)exit
Enter your choice:4
Thank you.
Nasserver/assignment4$ vi q1.c
Nasserver/assignment4$ 
n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",b[i][j]);
		printf("\n");
	}
}




