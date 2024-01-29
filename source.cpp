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
    HotelRoom hotel("New York City");

    Room room1("Single", 100.00);
    room1.addAmenity("Free WiFi");
    room1.addAmenity("TV");

    Room room2("Double", 150.00);
    room2.addAmenity("Free Breakfast");
    room2.addAmenity("Gym Access");

    hotel.addRoom(room1);
    hotel.addRoom(room2);

    hotel.displayHotelDetails();

    return 0;
}

