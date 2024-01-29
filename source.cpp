#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Room {
private:
    string type;
    double price;
    vector<string> amenities;

public:
    Room(string t, double p) : type(t), price(p) {}

    void addAmenity(string amenity) 
	{

    }

    void displayRoomDetails() 
	{
       
    }

    }
};

class HotelRoom {
private:
    char location;
    vector<Room> rooms;

public:
    HotelRoom(string loc) : location(loc) {}

    void addRoom(Room room) 
	{
		
    }

    void displayHotelDetails() 
	{
       
    }
    }

};

int main() {

    return 0;
}

