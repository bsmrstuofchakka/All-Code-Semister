#include<iostream>
using namespace std;

class building
{
private:
    int rooms;
    int floors;
    int area;

public:
    void set_rooms(int num);
    int get_rooms();
    void set_floors(int num);
    int get_floors();
    void set_area(int num);
    int get_area();
};

class house:public building
{
private:
    int bedrooms;
    int baths;
public:
    void set_bedrooms(int num);
    int   get_bedrooms();
    void set_baths(int num);
    int get_baths();

};

class school:public building
{
private:

    int classrooms;
    int offices;
public:
    void set_classrooms(int num);
    int get_classrooms;
    void set_offices(int num);
    int get_offices;
};

void building::set_rooms(int num)
{
    rooms=num;

}
void building::set_floors(int num)
{
    floors=num;
}
void building::set_area(int num)
{
    area=num;
}

int building::get_rooms()
{
    return rooms;
}

int building::get_floors()
{
    return floors;
}

int building::get_area()
{
    return area;
}

void house::set_bedrooms(int num)
{
    bedrooms=num;
}
void house::set_baths(int num)
{
    baths=num;
}
int house::get_bedrooms()
{
    return bedrooms;
}
int house::get_baths()
{
    return baths;
}

void school::set_classrooms(int num)
{
    classrooms=num;
}
void school::set_offices(int num)
{
    offices=num;
}
int school::get_classrooms()
{
    return classrooms;
}

int school::get_offices()
{
    return offices;
}

int main()
{
    house h;
    school s;

    h.set_rooms(3);
    h.set_floors(4);
    h.set_area(400);
    h.set_bedrooms(4);
    h.set_baths(3);

    cout<<"House has: "<<h.get_bedrooms();
    cout<<"bedrooms : "<<endl;


    s.set_rooms(4);
    s.set_floors(3);
    s.set_area(200);
    s.set_classrooms(6);
    s.set_offices(5);

    cout<<"School has: "<<s.get_classrooms()<<endl;
    cout<<"Classrooms: ";
    cout<<"Its area: "<<s.get_area();

    return 0;
}
