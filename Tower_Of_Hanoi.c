#include<stdio.h>
void TowerOfHanoi(int n,char start,char mid,char end)
{
    if(n==1)
    {
        printf("Disk %d From %c To %c\n",1,start,end);
        return;
    }
    TowerOfHanoi(n-1,start,end,mid);
    printf("Disk %d From %c To %c\n",n,start,end);
    TowerOfHanoi(n-1,mid,start,end);

}
int main(void)
{
    int n = 4; // can be taken as an input
    TowerOfHanoi(n,'A','B','C');
    return 0;
}
