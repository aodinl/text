#include "Hotel.h"
#include <malloc.h>
#include <stdlib.h>
Room* create(int n){             //nΪ�����������,������0����Ȼ�����ʱ������
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
        printf("----------------%d�ŷ���----------------\n",i);
        printf("�����Ǽ���%d\n",p->rate);//��������Ҫ���������
        i++;
        if((p->next)!=NULL)
            p = p->next;
        else break;
    }








};


void loadInformation(Room* q){

//    printf("�����뷿��ÿСʱ�ļ۸�12λ�������֣���ΪС����\n");
//    scanf("%lf",&q->price);
//    printf("�����뷿�������������10�˼����ڣ�\n");
//    scanf("%d",&q->capacity);
    printf("�����뷿���Ǽ���1-10������\n");
    scanf("%d",&q->rate);
//    printf("�����뷿��ţ�20λ����������\n");
//    scanf("%s",&q->id);
}



void deleteRoom(Room* head){

    printf("��������Ҫɾ������ķ���ţ� ");
    scanf()







}
