typedef struct {

    int year;
    int month;
    int day;
    int hour;

}time;

typedef struct {

    time intime,outtime;

}Checktime;

typedef struct {
    double price; // �ܼ۸�
    char name[20];
    int age;
    int sex;        //female: 0, male: 1
    char id[20];
    Checktime staytime;   //����סʱ���

}Customer;

typedef struct {
    double price;
    int capacity;
    int rate;       //�Ǽ�
    char id[20];     //�����
    Customer people[10];
    Checktime occupied_time[100]; //����סʱ��Σ����֧��100��ʱ��Σ�
    struct Room* next;
}Room;


//add
Room* create();
void loadInformation(Room* q);

//show
void roomList(Room* head);


//delete

void deleteRoom(Room* head); //input the id of the room which is required to be deleted



                                    //change
                                    //search
                                    //sort



