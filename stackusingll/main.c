#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void display();
void peek();
struct node   
{  
int val;  
struct node *next;  
};  
struct node *top;  
  
void main ()  
{  
    int ch;     
     do
    {   
        printf("\n STACK USING LINKED LIST");
        printf("\n =======================\n ");
        printf("1.Push \t 2.Pop \t 3.peek \t 4.Display \t 5.Exit\n"); 
	    printf("Enter your choice: ");        
        scanf("%d",&ch);  
        switch(ch)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            } 
           case 3:  
            {  
                peek();  
                break;  
            }  
            
            case 4:  
            {  
                display();  
                break;  
            }  
            case 5:   
            {  
               exit(0);
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    };  
} while(ch != 5) ; 
}  
void push ()  
{  
    int val;  
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        printf("Stack Overflow");   
    }  
    else   
    {  
        printf("Enter the value:");  
        scanf("%d",&val);  
        if(top==NULL)  
        {         
            ptr->val = val;  
            ptr -> next = NULL;  
            top=ptr;  
        }   
        else   
        {  
            ptr->val = val;  
            ptr->next = top;  
            top=ptr;  
               
        }  
        
          
    }  
}  
  
void pop()  
{  
    int value;  
    struct node *ptr;  
    if (top == NULL)  
    {  
        printf("Stack Underflow");  
    }  
    else  
    {  
        value = top->val;  
        ptr = top;  
        top = top->next;  
        free(ptr);  
        printf("The deleted element is :%d",value);  
          
    }  
}  
void peek()
{
	if(top!=NULL)
	printf("Top of stack is =%d",top->val);
	else
	printf("Stack is empty");
}
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=top;  
    if(ptr == NULL)  
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf(" Stack elements are:\n");  
        while(ptr!=NULL)  
        {  
            printf("%d \n",ptr->val);  
            ptr = ptr->next;  
        }  
    }  
}  






