#include<stdio.h>
void swap(int ,int);// it is for call by value mean jo value input hogi vhi last me copy ho jygi 
int main () {
    int x=5;
    int y=4;
    printf("\n x:%d,y:%d",x,y);
    swap(x,y);
    printf("\n x:%d,y:%d",x,y);

    return 0;
}
void swap(int first,int second){
    printf("\nfirst %d ,second %d",first,second);
    int temp=first;
    first=second;
    second=temp;
    printf("\nfirst%d ,second %d ",first,second);

}
