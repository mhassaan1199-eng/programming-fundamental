/*
  Name       : Muhammad Hassaan
  Roll Number: 26i-2579
  Assignment : Assignment 2 - Question 8
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age, tickets;
    char is_member;
    string ticket_type;
     
    double baseprice = 0, ticketprice = 0;
    double memberdiscount = 0;
    double quantitydiscount = 0;
    double totaldiscount = 0;
    double finalbill = 0;

    cout << "Enter age: ";
    cin  >> age;
    
    cout << "Are you a member? (Y/N): ";
    cin  >> is_member;
    
    cout << "Enter number of tickets: ";
    cin  >> tickets;
    
    cout << "Enter ticket type (e.g., 2D or 3D): ";
    cin  >> ticket_type;
    
    // Base price according to age 
    if (age < 13)
    {
        baseprice = 500;
    }
    else
    {
        if (age <= 59)
        {
            baseprice = 800;
        }
        else
        {
            baseprice = 600;
        }
    }
    
    // Add 3D charge before applying discounts
    ticketprice = baseprice;
    if (ticket_type == "3D" || ticket_type == "3")
    {
        ticketprice = ticketprice + 200;
    }
    
    // Calculate total before discounts 
    double totalamount = ticketprice * tickets;
    
    // Member discount (10%)
    if (is_member == 'Y' || is_member == 'y')
    {
        memberdiscount = totalamount * 0.10;
    }
    
    // 5 or more tickets discount (5%)
    if (tickets >= 5)
    {
        quantitydiscount = totalamount * 0.05;
    }
    
    totaldiscount = memberdiscount + quantitydiscount;
    finalbill = totalamount - totaldiscount;
    
    // Additional Rs. 300 discount if final bill is 3000 or more
    if (finalbill >= 3000)
    {
        finalbill = finalbill - 300;
    }
    
    // Displaying results 
    cout << "Base Price per ticket: Rs. " << baseprice << endl;
    cout << "Ticket Price (incl. type charges): Rs. " << ticketprice << endl;
    cout << "Member Discount: Rs. " << memberdiscount << endl;
    cout << "Quantity Discount: Rs. " << quantitydiscount << endl;
    cout << "Total Discounts: Rs. " << totaldiscount << endl;
    cout << "Final Bill: Rs. " << finalbill << endl;

    return 0;
}
