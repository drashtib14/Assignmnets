#include<iostream>
using namespace std;

class Date {
    private:
        int day;
        int month;
        int year;

    public:
        Date(int d,int m,int y) {
            day = d;
            month = m;
            year = y;
        }

        // set data
        void setDay(int d) {
            day = d;
        }

        void setMonth(int m) {
            month = m;
        }

        void setYear(int y) {
            year = y;
        }

        // get data
        int getDay() {
            return day;
        }

        int getMonth() {
            return month;
        }

        int getYear() {
            return year;
        }

        // Function to check valid date
        bool isValid() {
            if(month < 1 || month > 12) return false; 

            if(day < 1) return false;

            int daysInMonth;

            if(month == 2){
                if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                    daysInMonth = 29; // Leap year
                }
				else{
                    daysInMonth = 28;
                }
            }
			else if (month == 4 || month == 6 || month == 9 || month == 11){
                daysInMonth = 30;
            }
			else{
                daysInMonth = 31;
            }

            if(day > daysInMonth) return false; // Day exceeds the number of days in the month
            return true;
        }

        // Function to display
        void displayDate() {
            if (isValid()) {
                cout << "The date is: " << day << "/" << month << "/" << year << endl;
            } else {
                cout << "The date is invalid." << endl;
            }
        }
};

int main() {
    Date date1(29, 2, 2024);
    Date date2(31, 4, 2023);

    date1.displayDate();
    date2.displayDate();

    return 0;
}

