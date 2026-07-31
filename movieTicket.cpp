#include <iostream>
#include <string>
using namespace std;

class Booking
{
private:
    string customerName;
    string movieName;
    int numberOfTickets;
    int ticketPrice;

public:
    static int totalBookings;
    static int totalSeatsBooked;

    // Default Constructor
    Booking()
    {
        numberOfTickets = 0;
        ticketPrice = 0;
    }

    // Input Details
    void inputDetails()
    {
        int choice;

        cout << "Enter Customer Name: ";
        cin >> customerName;

        cout << "Select Movie:\n";
        cout << "1. Avengers - 200\n";
        cout << "2. Leo - 180\n";
        cout << "3. Jawan - 150\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            movieName = "Avengers";
            ticketPrice = 200;
        }
        else if (choice == 2)
        {
            movieName = "Leo";
            ticketPrice = 180;
        }
        else
        {
            movieName = "Jawan";
            ticketPrice = 150;
        }

        cout << "Enter Number of Tickets: ";
        cin >> numberOfTickets;

        totalBookings++;
        totalSeatsBooked += numberOfTickets;
    }

    // Display Booking
    void displayBooking()
    {
        float total = numberOfTickets * ticketPrice;

        cout << "------ Booking Summary ------" << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Movie: " << movieName << endl;
        cout << "Tickets: " << numberOfTickets << endl;

        if (numberOfTickets >= 5)
        {
            cout << "Discount Applied: 10%" << endl;
            total = total - (total * 0.10);
        }

        cout << "Total Amount: " << total << endl;
        cout << "-----------------------------" << endl;
    }

    // Show Statistics
    static void showStatistics()
    {
        cout << "===== Booking Statistics =====" << endl;
        cout << "Total Bookings: " << totalBookings << endl;
        cout << "Total Seats Booked: " << totalSeatsBooked << endl;
        cout << "==============================" << endl;
    }
};

// Static Variable Initialization
int Booking::totalBookings = 0;
int Booking::totalSeatsBooked = 0;

int main()
{
    Booking b1;

    b1.inputDetails();

    b1.displayBooking();

    Booking::showStatistics();

    return 0;
}