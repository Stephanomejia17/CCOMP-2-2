#include <iostream>
#include <string>

using namespace std;

class Date{
    private:
        int month;
        int day;
        int year;

    public:
        Date(); //Constructor
        void setDate(int _day, int _month, int _year){
            month = _month;
            day = _day;
            year = _year;
        }
        void displayDate();
        int getDateM(){
            return month;
        }
        int getDateD(){
            return day;
        }
        int getDateY(){
            return year;
        }
};
Date::Date(){
}
void Date::displayDate(){
    cout << day << "/" << month << "/" << year;
}