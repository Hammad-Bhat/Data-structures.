#include <iostream>
#include<stdlib.h>
#define max 100
using namespace std;
int que[max];
int front=0,rer=-1;
void enque(int item){
    if(rer<max){
        que[++rer]=item;
    }
    else{
        cout<<"overflow";
    }
}
int deque(){
    if(front<=rer){
        front++;
        return que[front];
    }
    else{
        return -1;
    }
    
}
void view(){
    cout<<"hello";
    if(front>rer){
        cout<<"empty";
        
    }
    else{
        int i;
        for(i=front; i<=rer; i++){
            cout<<que[i]<<endl;
        }
    }
    
}

int main() {
    
    int ch;
    int item;
    while(1){
         cout<<"1 fr enque 2 for deque 3 for view 4 for braek";
         cin>>ch;
         if(ch==1)
    {
        cout<<"enter the item";
        cin>>item;
        enque(item);
    }    
   
   else if(ch==2){
       item=deque();
       if(item==-1){
           cout<<"underflow";
       }
   }   
   else if(ch==3){
      view();
  }
  else break;
    
        
    }

    return 0;
}
