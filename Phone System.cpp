#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    
{
    string pass;
    int selOne = 0;
    int selTwo = 0;
    int phone = 0;
    int loginAttempt = 0;
    
    while (loginAttempt < 5)
    {
// Intro
        cout << "Password is 123\n";
        cout << "︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻\n";
        cout << "********************  Welcome to Phone System *******************\n";
        cout << "︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼\n";
        
// Password 
// Password is 123

        cout << "Please enter your user password: ";
        cin >> pass;

        if (pass == "123")
        {
            cout << "Successful Login!\n";
            cout << endl;
            break;
        }

        else 

// Invalid Login Attempt
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
    }

{
 // Main Phone
 while (phone = 1) {
        cout << "︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻︻\n";
        cout << "*****************************  Phone  ****************************\n";
        cout << "︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼︼\n";
        /// Apps
    cout << endl;
    cout << "+++++++++++++++++++++++++++++++++ Apps +++++++++++++++++++++++++++++++++\n";
    
    // Row 1
    cout << setw(21) << "1. Calculator"
         << setw(21)  << "2. Contacts"
         << setw(21)  << "3. Games\n";

    // Row 2
    cout << setw(21) << "4. Camera"
         << setw(21)  << "5. Facebook";
    //     << setw(21)  << "6. Netflix\n";
    // Row 3
    // cout << setw(18) << "7. Youtube"
    //      << setw(23)  << "6. Netflix"
    //      << setw(25)  << "9. Instagram\n";
        
    /// --------- Addition Stuff i want to add but no time ---------
    
    cout << "What you you like to use?: ";    
    cin >> selOne;
    cout << endl;
    
// Apps when running
 switch (selOne) {
    int cal, dk, conOne, num;
    float num1, num2;
// Calculator
    case 1:
    
    cout << "\n++++++++++++++++++++++++++++++ Calculator ++++++++++++++++++++++++++++++\n";
    cout << setw(29) << "1. Addition"
         << setw(28) << "2. Subtraction";
         << setw(28) << "3. Multiplication"
         << setw(28) << "4. Division\n";

    cout << "Choice what would you like to do?: ";
    cin >> cal;
    
    switch (cal) {
        // Addition
        case 1:
            cout << "Enter two operands: ";
            cin >> num1 >> num2;
            
            cout << "The Answer is: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
            
        // Subtraction
        case 2: 
            cout << "Enter two operands: ";
            cin >> num1 >> num2;
            
            cout << "The Answer is: " << num1 << " - " << num2 << " = " << num1 - num2 << endl << endl;
            break;
        
        // Multiplication
        case 3:
            cout << "Enter two operands: ";
            cin >> num1 >> num2;
            
            cout << "The Answer is: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;

        // Division
        case 4:
            cout << "Enter two operands: ";
            cin >> num1 >> num2;
            
            cout << "The Answer is: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
    }
         
    cout << "Press 1 to return to Apps: ";
    cin >> dk;
    cout << endl;

// loop? i forgot...
    switch (dk) {
        case 1:
            switch (phone) {
                break;
            }
    }
    break;
    
// Contacts
    case 2:
     cout << "+++++++++++++++++++++++++++++++ Contacts +++++++++++++++++++++++++++++++\n";
    // Row 1 of names
        cout << setw(10) << "1. Umar"
             << setw(20) << "4. Dylan"
             << setw(20) << "7. Riley"
             << setw(20) << "10. Ran\n";
    // Row 2 of names
        cout << setw(11) << "2. Khalid"
             << setw(19) << "5. Derek"
             << setw(19) << "8. Baily"
             << setw(22) << "11. Ivan\n";
    // Row 3 of names
        cout << setw(9) << "3. Aiden"
             << setw(22) << "6. Jared"
             << setw(21) << "9. Jaxson"
             << setw(18) << "12. Alex\n";
    
        cout << "Select Someone to Call: ";
        cin >> num;
        cout << endl;
        
        cout << setw(29) << "No Signal...."
             << setw(28) << "Returning to Apps....\n";
        cout << endl;
             
        break;
        
// Games     
    case 3:
    cout << "++++++++++++++++++++++++++++++++ Games +++++++++++++++++++++++++++++++++\n";
        // Row 1 of games
        cout << setw(10) << "1. Mobile Legends"
             << setw(16) << "4. Angry Birds"
             << setw(20) << "7. Minesweeper"
             << setw(20) << "10. Terraria\n";
        // Row 2 of games
        cout << setw(11) << "2. Valorant"
             << setw(24) << "5. Hollow Khight"
             << setw(18) << "8. Left 4 Dead"
             << setw(16) << "11. Osu!\n";
        // Row 3 of games
        cout << setw(2) << "3. Chess"
             << setw(23) << "6. Minecraft"
             << setw(22) << "9. Flappy Bird"
             << setw(18) << "12. Dota 2\n";
        
        cout << "Select a game to play: ";
        cin >> num;
        cout << endl;
        
    cout << setw(60) << "The Game is Updating please return later....\n";
    cout << setw(48) << "Returning to Apps....\n";
        
        break;

//Camera 
    case 4:
        cout << "+++++++++++++++++++++++++++++++ Camera +++++++++++++++++++++++++++++++\n";
        cout << setw(21) << "1. Take Picture"
             << setw(21) << "2. Gallery\n"
             << setw(21) << "3. Return to Apps\n";

        cout << "Select a feature to use: ";
        cin >> num;
        cout << endl;

    cout << setw(60) << "This feature currently unavailable.\n";
    cout << setw(48) << "Returning to Apps....\n";
        break;

//Facebook
    case 5:
        cout << "+++++++++++++++++++++++++++++++ Facebook +++++++++++++++++++++++++++++++\n";

    cout << setw(60) << "This feature currently unavailable.\n";
    cout << setw(48) << "Returning to Apps....\n";
        break;
    
                }
            }
        }
    }
return 0;
}
