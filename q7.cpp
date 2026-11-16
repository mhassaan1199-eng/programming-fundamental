/*
  Name        : Muhammad Hassaan
  Roll Number : 26i-2579
  Assignment  : Assignment 2 - Question 2
*/


#include <iostream>
using namespace std;

int main()
{
    string mealCategory;
    string servingSize;
    int ingredientAvailable;
    string diningMethod;
    int customizationValid;

    cout << "Enter Meal Category (Breakfast, Main Course, or Dessert): ";
    cin >> mealCategory;

    // 1. BREAKFAST BRANCH
    if (mealCategory == "Breakfast")
    {
        cout << "Enter serving size (medium or large): ";
        cin  >> servingSize;

        if (servingSize == "medium")
        {
            cout << "Is ingredient available?( 1=Yes / 0=NO ) : ";

            cin >> ingredientAvailable;

            if (ingredientAvailable == 1)
            {
                cout << "Enter dining method (Dine-in, Takeaway, or Delivery): ";
                cin  >> diningMethod;

                if (diningMethod == "Dine-in")
                {
                    cout << "Result: Normal Prep + Table-Service Handling" << endl;
                }
                else if (diningMethod == "Takeaway")
                {
                    cout << "Result: Normal Prep + Packaging Rules" << endl;
                }
                else if (diningMethod == "Delivery")
                {
                    cout << "Result: Priority Kitchen Handling" << endl;
                }
            }
            else
            {
                cout << "Result: Check Allowed Substitute based on Category & Diet" << endl;
            }
         }
         else if (servingSize == "large")
         {
            cout << "Is dietary requirement accepted? (1 for Yes, 0 for No): ";
            int dietaryAccepted;
            cin >> dietaryAccepted;

            if (dietaryAccepted == 1)
            {
                cout << "Result: Special Dietary Preparation" << endl;
            }
            else
            {
                cout << "Result: Order Rejection" << endl;
            }
        }
        else
        {
            cout << "Result: Order Rejection (Invalid Size)" << endl ;
        }
    }
    
    // 2. MAIN COURSE 
    else if (mealCategory == "Main Course")
    {
        cout << "Enter serving size (medium or large): ";
        cin  >> servingSize;

        if (servingSize == "medium" || servingSize == "large" )
        {
            cout << "Is customization valid for this size? (1 = Yes, 0 = No): " ;
            cin >> customizationValid;

            if (customizationValid == 1)
            {
                cout << "Result: Modified Preparation / Group Routing " << endl;
            }
            else
            {
                cout << "Result: Order Rejection" << endl ;
            }
        }
        else
        {
            cout << "Result: Order Rejection (Invalid Size)\n";
        }
    }

    // 3. DESSERT BRANCH 
    else if (mealCategory == "Dessert")
    {
        cout << "Enter serving size (medium or large): ";
        cin >> servingSize;

        if (servingSize == "medium" || servingSize == "large")
        {
            cout << "Is dietary requirement accepted? (1 for Yes, 0 for No): ";
            int dietaryAccepted;
            cin >> dietaryAccepted;

            if (dietaryAccepted == 1)
            {
                cout << "Enter dining method (Dine-in or Takeaway): ";
                cin >> diningMethod;

                if (diningMethod == "Dine-in")
                {
                    cout << "Result: Normal Preparation" << endl ;
                }
                else if (diningMethod == "Takeaway")
                {
                    cout << "Result: Separate Packaging " << endl ;
                }
            }
            else
            {
                cout << "Result: Order Rejection" << endl ;
            }
        }
        else
        {
            cout << "Result: Order Rejection (Invalid Size) " << endl ;
        }
    }
    else
    {
        cout << "Result: Order Rejection (Invalid Meal Category)" << endl ;
    }

    return 0;
}
