//-----------------------------------------------------
// CS41O Project Two Paloma Rodriguez 2/16/24
//-----------------------------------------------------

// CS410 Project One CPP Code Security Vulnerability Analysis
// Comments Included
// Start Project One CPP Code----------------------------------------------
//#include <iostream>

//void DisplayInfo() {
//    std::cout << "DisplayInfo()" << std::endl;
//}

//int CheckUserPermissionAccess() {
//    int result = 0; 
//    //VULNERABILITY: Result is assigned a value of 0 by default 
//    //and code doesnt validate it against any values before using 
    //it to make decisions.

    // Function calls
//    DisplayInfo();
//    DisplayInfo();
//    DisplayInfo();
    //VULNERABILITY: DisplayInfo() is called multiple times
    // w/o any validation which could lead to misuse of this function.

//    if (result == 1)
//        DisplayInfo();
//    else if (result == 2)
//        DisplayInfo();
//    else if (result == 3)
//        DisplayInfo();
//    else
//        result = 0;
    //VULNERABILITY: Function could potentially allow unauthorized access.

//    return result;
//}

//int main() {
    // Add an output statement to the beginning of the C++ code
//    std::cout << "Created by Paloma Rodriguez" << std::endl;

//    int result = CheckUserPermissionAccess();
    //VULNERABILITY: Code doesnt validate the input value from 
    //CheckUserPermissionAccess() function before using it to make decisions.

//    if (result == 1)
//        DisplayInfo();
//    else if (result == 2)
//        DisplayInfo();
//    else if (result == 3)
//        DisplayInfo();
    //VULNERABILITY: DisplayInfo() is called based on the value of result obtained 
    //from CheckUserPermissionAccess(), which could lead to abuse use of this function.

    //VULNERABILITY: Theres no logic to handle errors or exceptions that might occur.

//    return 0;
//}
// End Project One CPP Code -------------------------------------------------



// Start Project Two CPP Code Revision ---------------------------------------
#include <iostream>

void DisplayInfo() {
    std::cout << "DisplayInfo()" << std::endl;
}

int CheckUserPermissionAccess() {
    int result = 0;

    // Simulated Permission check
    // This Would Be Filled With Actual Permission Logic But I Am 
    // Hardcoding Value 1 Here
    result = 1;

    return result;
}

int main() {
    // Add an output statement to the beginning of the C++ code
    std::cout << "Created by Paloma Rodriguez" << std::endl;

    int result = CheckUserPermissionAccess();

    // Validating Result Before Invoking DisplayInfo
    if (result >= 1 && result <= 3) {
        DisplayInfo();
    } else {
        std::cerr << "Error: Invalid user permission access." << std::endl;
    }

    return 0;
}
// End Project Two CPP Code Revision -----------------------------------------
