/*
Consider the following image 
Doesn’t it represent stack of books? 
Each book has the credentials such as 
Book_Id (int)
Book_Name (char)
Book_Author (char)
Book_Price (float)
You are required to arrange the books in such a way that, only the book at the top can be 
removed, and new book can be added only on to the top of the existing book stack. Imagine 
these books are to be kept in a box. The maximum number of books the box can contain is 5. 
Write C routine to 
• insert book
• remove book
• display the existing book details
The program should also check the following constraints.
• if the box is full then, books can’t be added
• books can’t be removed if the box is empty
Note : Use Structures. Enhance the program with pointer to structure concept (Introduce -> 
operator)
❖ Happy Coding ❖
*/
#include<stdio.h>
typedef struct
{
	int book_id;
	char book_name[20];
	char book_author[20];
	float book_price;
}bk;
void push(bk *book, int *top);
void pop(bk *book, int *top);
void display(bk *book, int *top);
int main()
{
	int choice;
	int top=-1;
	bk book[5]; // stack of 5 books
	while(1)
	{
		printf("1.Insert Book\n2.Remove Book\n3.Display book details\n4.Exit\nYour Choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push(book, &top); break;
			case 2: pop(book, &top); break;
			case 3: display(book, &top); break;
			case 4: return 0;
		}
	}
}
void push(bk *book, int *top)
{
	if(*top==4)
	{
		printf("Stack full\n\n");
		return;
	}
	(*top)++;
	printf("Enter book details(book_id, book_name, book_author, book_price:\n");
	scanf("%d%s%s%f",&book[*top].book_id,book[*top].book_name,book[*top].book_author,&book[*top].book_price);
	printf("\n");
}
void pop(bk *book, int *top)
{
	if(*top==-1)
	{
		printf("Stack empty, cannot delete book details\n\n");
		return;
	}
	printf("Book deleted is:\n");
	printf("%d\t%s\t%s\t%f\n\n",book[*top].book_id,book[*top].book_name,book[*top].book_author,book[*top].book_price);
	(*top)--;
}
void display(bk *book, int *top)
{
	if(*top==-1)
	{
		printf("\nStack empty, no books to display\n\n");
		return;
	}
	printf("\nBook details:\n");
	for(int i=*top;i>=0;i--)
		printf("%d\t%s\t%s\t%f\n\n",book[i].book_id,book[i].book_name,book[i].book_author,book[i].book_price);
}
