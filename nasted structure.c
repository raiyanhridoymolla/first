#include<stdio.h>
#include<stdlib.h>
struct node
{
int x;
int y;
};
struct node2
{
 struct node point;
 int z;
}m;
struct node3
{
    struct node2 point2;
    struct node3 *next2;

}n;
//typedef struct node3 num;
int main(){
n.node2.point2.z=12;



}
