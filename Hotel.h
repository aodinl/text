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
    double price; // 总价格
    char name[20];
    int age;
    int sex;        //female: 0, male: 1
    char id[20];
    Checktime staytime;   //出入住时间段

}Customer;

typedef struct {
    double price;
    int capacity;
    int rate;       //星级
    char id[20];     //房间号
    Customer people[10];
    Checktime occupied_time[100]; //出入住时间段（最多支持100个时间段）
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



