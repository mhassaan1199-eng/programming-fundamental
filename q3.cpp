/*
  Name        : Muhammad Hassaan
  Roll Number : 26i-2579
  Assignment  : Assignment 2 - Question 2
*/  

#include <iostream>
using namespace std;

int main()
{ 

short  roomSignal;
cout << "enter roomsignal :" ;

cin >> roomSignal;
 
bool main_door = roomSignal & 1;
bool window_open = (roomSignal >> 1) & 1;
bool motion_detected = (roomSignal >> 2) & 1;
bool emergency_button = ( roomSignal >> 3) & 1;
 
int zone_number = (roomSignal >> 4) & 7;
int acess = (roomSignal >> 7) & 3;
int incident = (roomSignal >> 9 ) & 15;
bool maintenance_mode = (roomSignal >> 13 ) & 1;
int decode = incident ^ 5;

if (emergency_button == 1  )
{ cout << "EMERGENCY "; 
}

else if (maintenance_mode == 1)
{ cout<< "MAINTENANCE" ;
}

else if (main_door == 1 || window_open == 1 && acess == 0 )
{ cout << "UNAUTHORIZED ACCESS" ;
}

else if (motion_detected == 1 && decode >=9)
{ cout << "SECURITY ALERT" ;
}

else if ( (main_door == 0) ||( window_open == 0) || (motion_detected == 0)|| (emergency_button == 0) && (decode ==0))

{ cout << " Room Secure";
}

else 
{ cout << "MONITOR REQUIRED" ;
}



return 0;


}
