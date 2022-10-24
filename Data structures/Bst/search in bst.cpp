#include <iostream>
#include<stdlib.h>
using namespace std;

typedef struct node {
    int data;
    struct node *Left, *Right; 
}Node;

Node *Root = NULL, *Temp, *Trav;

void Create()
{
    int n;
    cout << "Enter the Number of Nodes : ";
    cin >> n;

    for(int i = 0; i <= n; i++)
    {
        Temp = (Node *)malloc(sizeof(Node));

        cout << "Enter the Elements : ";
        cin >> Temp -> data;

        Temp -> Left = Temp -> Right = NULL;

        if(Root == NULL)
            Root = Temp;
        else{
            Trav = Root;
            while (1)
            {
                if(Temp -> data < Trav -> data)
                {
                    if(Trav -> Left == NULL) {
                        Trav -> Left = Temp;
                        break;
                    }
                    else
                        Trav = Trav -> Left;
                }
                else if(Temp -> data > Trav -> data)
                {
                    if(Trav -> Right == NULL) {
                        Trav -> Right = Temp;
                        break;
                    }
                    else
                        Trav = Trav -> Right;
                }
                else
                    cout << "Duplicate Items are Not Allowded" << endl;
            }
            
        }
    }
}
void Search_Node()
{
    int item;
    cout << "Enter Node to Find : ";
    cin >> item;
    Trav = Root;
    int Flag = 0;
    while (Trav != NULL)
    {
        if(Trav -> data == item){
            cout << "Found in BST" << endl;
            Flag = 1;
            break;
        }
        else if(item < Trav ->data)
            Trav = Trav -> Left;
        else if(item > Trav -> data)
            Trav = Trav -> Right;
    }
    if(Flag == 0)
        cout << "Not Found" << endl;
    
}
int main()
{
    int ch;
    while (1)
    {
        cout << "1 for Create\n2 for Find search\n8 for Exit\nEnter your Choice : ";
        cin >> ch;
        if(ch == 1)
            Create();
         else if(ch == 2)
            Search_Node();
         else {
         
           break;
         }
         
         
      }
   
return 0;
}
