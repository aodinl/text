#include "Hotel.h"
#include <malloc.h>
#include <stdlib.h>
Room* create(int n){             //n为创建房间个数,不能是0，不然输出的时候会出错
    Room *p, *q;
    Room* head = (Room*)malloc(sizeof(Room));
    int i = 1;
    head->next = NULL;
    p = head;
    while(i<=n){
        q = (Room*)malloc(sizeof(Room));

        //this place needs a function to load information from the disk

        loadInformation(q);

        p->next = q;
        p = q;
        i++;
    }
    p ->next = NULL;
    return head;
}
void roomList(Room* phead){

    Room *p = phead->next;
    int i = 1;
    while(1)
    {
        printf("----------------%d号房间----------------\n",i);
        printf("房间星级：%d\n",p->rate);//其他的需要输出的内容
        i++;
        if((p->next)!=NULL)
            p = p->next;
        else break;
    }








};


void loadInformation(Room* q){

//    printf("请输入房间每小时的价格（12位以内数字，可为小数）\n");
//    scanf("%lf",&q->price);
//    printf("请输入房间可容纳人数（10人及以内）\n");
//    scanf("%d",&q->capacity);
    printf("请输入房间星级（1-10整数）\n");
    scanf("%d",&q->rate);
//    printf("请输入房间号（20位以内整数）\n");
//    scanf("%s",&q->id);
}



void deleteRoom(Room* head){

    printf("请输入需要删除房间的房间号： ");
    scanf()







}
