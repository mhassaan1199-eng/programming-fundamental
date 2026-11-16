/*
  Name       : Muhammad Hassaan
  Roll Number: 26i-2579
  Assignment : Assignment 2 - Question 6
*/

#include <iostream>

using namespace std;

int main() {
    int declared_value, restricted_items, priority_level;
    
    // Using integers instead of strings for all categories/statuses
    int documentation_status, shipment_category, origin_category, importer_type;
    int weight_category, destination_category, custom_flag, insurance_status;

    cout << "Enter documentation status (1 for complete, 0 for incomplete): ";
    cin >> documentation_status;

    // 1. INCOMPLETE DOCUMENTATION CHECK 
    if (documentation_status == 0) {
        cout << "Documents are incomplete. Checking temporary clearance" << endl;
        cout << "Enter shipment category for temporary check (1 for allowed, 0 for not allowed): ";
        cin >> shipment_category;

        if (shipment_category == 1) {
            cout << "DECISION: Granted temporary clearance." << endl;
        }
        if (shipment_category != 1) {
            cout << "DECISION: Rejected due to incomplete documentation." << endl;
        }
    }

    // 2. COMPLETE DOCUMENTATION CHECK 
    if (documentation_status == 1) {
        cout << "Enter the origin category (1 for special, 0 for ordinary): ";
        cin  >> origin_category;
        cout << "Enter the importer type (1 for new, 0 for regular): ";
        cin  >> importer_type;
        
        // Origin & Importer Verification (Flattened)
        if (origin_category == 1 && importer_type == 1) {
            cout << "Require an additional verification" << endl;
        }
        if (origin_category == 1 && importer_type != 1) {
            cout << "Doesn't require an additional verification" << endl;
        }
        
        cout << "Enter the declared value: ";
        cin  >> declared_value;
        cout << "Enter the weight category (1 for heavy, 0 for ordinary): "; 
        cin  >> weight_category;

        // Inspection Status Logic (Flattened)
        if (declared_value > 1000 && weight_category == 1) {
            cout << "Inspection Status: Enhanced financial and physical inspection applied" << endl;
        }
        if (declared_value > 1000 && weight_category == 0) {
            cout << "Inspection Status: Standard high-value inspection applied." << endl;
        }
        if (declared_value <= 1000 && weight_category == 1) {
            cout << "Inspection Status: Ordinary shipment with heavy weight: Additional checks applied." << endl;
        }
        if (declared_value <= 1000 && weight_category == 0) {
            cout << "Inspection Status: Ordinary shipment: Standard inspection applied." << endl;
        }
        if (declared_value < 0) {
            cout << "Re-enter correct declared value" << endl;
        }

        cout << "Enter the number of restricted items: "; 
        cin  >> restricted_items;
        cout << "Enter the destination category (1 for special, 0 for standard): ";
        cin  >> destination_category;

        // Restricted Items Logic (Flattened)
        if (restricted_items > 0 && destination_category == 1) {
            cout << "Restricted items permitted under special destination rules." << endl; 
        }
        if (restricted_items > 0 && destination_category == 0) {
            cout << "Restricted items prohibited for this destination category" << endl;
        }
        if (restricted_items <= 0) {
            cout << "No restricted items found." << endl; 
        }  

        cout << "Enter custom flag (1 for flagged, 0 for clear): ";
        cin  >> custom_flag;  
        cout << "Enter insurance status (1 for valid, 0 for invalid): ";
        cin  >> insurance_status;
        cout << "Enter priority level: ";
        cin  >> priority_level;

        // Final Clearance Decision (Flattened)
        if (custom_flag == 1 && priority_level > 4) {
            cout << "DECISION: Priority status cannot override customs restriction." << endl;
        }
        if (custom_flag == 1 && priority_level <= 4) {
            cout << "DECISION: Shipment flagged by customs and held." << endl;
        }
        if (custom_flag != 1 && insurance_status == 1 && priority_level > 4) {
            cout << "DECISION: Priority shipment cleared successfully." << endl;
        }
        if (custom_flag != 1 && insurance_status == 1 && priority_level <= 4) {
            cout << "DECISION: Shipment cleared normally." << endl;
        }
        if (custom_flag != 1 && insurance_status != 1) {
            cout << "DECISION: Invalid insurance." << endl;
        }
    }

    // Invalid Documentation Status Check
    if (documentation_status != 1 && documentation_status != 0) {
        cout << "Re-enter correct documentation status" << endl;
    }

    return 0;
}
