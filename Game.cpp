// PROJECT QUIZ GAME

// All headers files
#include <iostream>
#include <vector>
#include <fstream>
#include <time.h>
#include <windows.h>
#include <conio.h>
// #include <cstdlib>

using namespace std;

// Global variables
string FIRST_NAME, LAST_NAME, UID;
int counter = 0, computer = 0, math = 0, science = 0, score = 0;

// All functions declaration
void gotoxy(int x, int y);
void print_rectangle(int x, int y, int row, int col);
void main_menu();
void sub_menu();
void add_sub_menu();
void add_questions_in_computers();
void add_questions_in_math();
void add_questions_in_science();
void computer_question();
void math_question();
void science_question();
void your_details();
void score_board();

// Function for change cursor position in console
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// Function for print rectangle
void print_rectangle(int x, int y, int row, int col)
{
    for (int i = 1; i <= row; i++)
    {
        gotoxy(x, y);
        Sleep(8);
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row ||
                j == 1 || j == col)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
        y++;
    }
}

// Function for computer questions
void computer_question()
{
    system("cls");
    counter = 0;
    score = 0;
    computer = 0;

    srand(time(0));
    vector<int> check_repeat(30, 0);

    string question;
    string options;
    string answer;
    char user_asnwer;

    char hold;

    while (counter < 5)
    {

        int line_counter = 0;
        int rand_line = rand() % 10;
        if (check_repeat[rand_line] == 0)
        {

            check_repeat[rand_line] = 1;

            ifstream file("Question_Database//computer_questions.txt");
            while (rand_line != line_counter)
            {
                getline(file, question);
                getline(file, options);
                getline(file, answer);
                line_counter++;
            }

            getline(file, question);
            getline(file, options);
            getline(file, answer);

            print_rectangle(8, 5, 7, 40);

            gotoxy(42, 8);
            cout << "COMPUTER QUIZ";

            print_rectangle(8, 12, 32, 40);

            gotoxy(12, 16);
            cout << "Question Number: " << counter + 1;
            gotoxy(12, 18);
            cout << question;
            gotoxy(12, 20);
            cout << options;
            gotoxy(12, 22);
            cout << "Enter Your Answer: ";
            cin >> user_asnwer;
            user_asnwer = toupper(user_asnwer);
            if (answer[0] == user_asnwer)
            {
                computer++;
                score++;
            }
            else
            {
                gotoxy(12, 16);
                cout << "Question Number: " << counter + 1;
                gotoxy(12, 18);
                cout << question;
                gotoxy(12, 20);
                cout << options;
                gotoxy(12, 24);
                cout << "You Choose Wrong Option Correct Answer Is: " << answer;

                gotoxy(35, 38);
                cout << "Press Enter To Continue...";
                cin.get();
                cin.get();
            }

            counter++;
        }
    }
    score_board();
}

// Function for math questions
void math_question()
{
    system("cls");
    counter = 0;
    score = 0;
    math = 0;

    srand(time(0));
    vector<int> check_repeat(30, 0);

    string question;
    string options;
    string answer;
    char user_asnwer;

    char hold;

    while (counter < 5)
    {

        int line_counter = 0;
        int rand_line = rand() % 10;
        if (check_repeat[rand_line] == 0)
        {

            check_repeat[rand_line] = 1;

            ifstream file("Question_Database//math_questions.txt");
            while (rand_line != line_counter)
            {
                getline(file, question);
                getline(file, options);
                getline(file, answer);
                line_counter++;
            }

            getline(file, question);
            getline(file, options);
            getline(file, answer);

            print_rectangle(8, 5, 7, 40);

            gotoxy(42, 8);
            cout << "MATHEMATICS QUIZ";

            print_rectangle(8, 12, 32, 40);

            gotoxy(12, 16);
            cout << "Question Number: " << counter + 1;
            gotoxy(12, 18);
            cout << question;
            gotoxy(12, 20);
            cout << options;
            gotoxy(12, 22);
            cout << "Enter Your Answer: ";
            cin >> user_asnwer;
            user_asnwer = toupper(user_asnwer);
            if (answer[0] == user_asnwer)
            {
                math++;
                score++;
            }
            else
            {
                gotoxy(12, 16);
                cout << "Question Number: " << counter + 1;
                gotoxy(12, 18);
                cout << question;
                gotoxy(12, 20);
                cout << options;
                gotoxy(12, 24);
                cout << "You Choose Wrong Option Correct Answer Is: " << answer;

                gotoxy(35, 38);
                cout << "Press Enter To Continue...";
                cin.get();
                cin.get();
            }

            counter++;
        }
    }
    score_board();
}

// Function for science questions
void science_question()
{
    system("cls");
    counter = 0;
    score = 0;
    science = 0;

    srand(time(0));
    vector<int> check_repeat(30, 0);

    string question;
    string options;
    string answer;
    char user_asnwer;

    char hold;

    while (counter < 5)
    {

        int line_counter = 0;
        int rand_line = rand() % 10;
        if (check_repeat[rand_line] == 0)
        {

            check_repeat[rand_line] = 1;

            ifstream file("Question_Database//science_questions.txt");
            while (rand_line != line_counter)
            {
                getline(file, question);
                getline(file, options);
                getline(file, answer);
                line_counter++;
            }

            getline(file, question);
            getline(file, options);
            getline(file, answer);

            print_rectangle(8, 5, 7, 40);

            gotoxy(42, 8);
            cout << "SCIENCE QUIZ";

            print_rectangle(8, 12, 32, 40);

            gotoxy(12, 16);
            cout << "Question Number: " << counter + 1;
            gotoxy(12, 18);
            cout << question;
            gotoxy(12, 20);
            cout << options;
            gotoxy(12, 22);
            cout << "Enter Your Answer: ";
            cin >> user_asnwer;
            user_asnwer = toupper(user_asnwer);
            if (answer[0] == user_asnwer)
            {
                science++;
                score++;
            }
            else
            {
                gotoxy(12, 16);
                cout << "Question Number: " << counter + 1;
                gotoxy(12, 18);
                cout << question;
                gotoxy(12, 20);
                cout << options;
                gotoxy(12, 24);
                cout << "You Choose Wrong Option Correct Answer Is: " << answer;

                gotoxy(35, 38);
                cout << "Press Enter To Continue...";
                cin.get();
                cin.get();
            }

            counter++;
        }
    }
    score_board();
}

// Function for sub-menu
void sub_menu()
{
    int menu_item = 0, x = 24;
    bool running = true;

    print_rectangle(18, 11, 5, 30);

    gotoxy(42, 13);
    cout << "CHOOSE SUBJECT";

    print_rectangle(18, 15, 25, 30);

    print_rectangle(18, 37, 4, 30);

    gotoxy(28,39);
    cout << "<UP & DOWN> = MOVE    <ENTER> = SELECT";

    gotoxy(39, 24);
    cout << ">> ";

    while (running)
    {
        gotoxy(42, 24);
        cout << "1. COUMPUTERS";
        gotoxy(42, 25);
        cout << "2. SCIENCE";
        gotoxy(42, 26);
        cout << "3. MATHEMATICS";
        gotoxy(42, 27);
        cout << "4. MAIN MENU";

        system("pause>nul"); // the >nul bit causes it the print no message

        if (GetAsyncKeyState(VK_DOWN) && x != 11) //down arrow pressed
        {
            gotoxy(39, x);
            cout << "  ";
            x++;
            gotoxy(39, x);
            cout << ">> ";
            menu_item++;
            continue;
        }

        if (GetAsyncKeyState(VK_UP) && x != 7) //up arrow pressed
        {
            gotoxy(39, x);
            cout << "  ";
            x--;
            gotoxy(39, x);
            cout << ">> ";
            menu_item--;
            continue;
        }

        if (GetAsyncKeyState(VK_RETURN)) // Enter key pressed
        {
            switch (menu_item)
            {

            case 0:
            {
                running = false;
                system("cls");
                your_details();
                computer_question();
                break;
            }

            case 1:
            {
                running = false;
                system("cls");
                your_details();
                science_question();
                break;
            }

            case 2:
            {
                running = false;
                system("cls");
                your_details();
                math_question();
                break;
            }

            case 3:
            {
                running = false;
                system("cls");
                main_menu();
            }
            }
        }
    }
}

// Function for choose subject file to add question
void add_sub_menu()
{
    int menu_item = 0, run, x = 24;
    bool running = true;

    print_rectangle(18, 11, 5, 30);

    gotoxy(40, 13);
    cout << "CHOOSE SUBJECT FIlE";

    print_rectangle(18, 15, 25, 30);

    print_rectangle(18, 37, 4, 30);

    gotoxy(28,39);
    cout << "<UP & DOWN> = MOVE    <ENTER> = SELECT";

    gotoxy(37, 24);
    cout << ">> ";

    while (running)
    {
        gotoxy(40, 24);
        cout << "1. COUMPUTERS FILE";
        gotoxy(40, 25);
        cout << "2. SCIENCE FILE";
        gotoxy(40, 26);
        cout << "3. MATHEMATICS FILE";

        system("pause>nul"); // the >nul bit causes it the print no message

        if (GetAsyncKeyState(VK_DOWN) && x != 11) //down arrow pressed
        {
            gotoxy(37, x);
            cout << "  ";
            x++;
            gotoxy(37, x);
            cout << ">> ";
            menu_item++;
            continue;
        }

        if (GetAsyncKeyState(VK_UP) && x != 7) //up arrow pressed
        {
            gotoxy(37, x);
            cout << "  ";
            x--;
            gotoxy(37, x);
            cout << ">> ";
            menu_item--;
            continue;
        }

        if (GetAsyncKeyState(VK_RETURN)) // Enter key pressed
        {
            switch (menu_item)
            {

            case 0:
            {
                running = false;
                system("cls");
                add_questions_in_computers();
                break;
            }

            case 1:
            {
                running = false;
                system("cls");
                add_questions_in_science();
                break;
            }

            case 2:
            {
                running = false;
                system("cls");
                add_questions_in_math();
                break;
            }
            }
        }
    }
}

// Function for add questions in computer file
void add_questions_in_computers()
{
    system("cls");

    print_rectangle(8, 5, 7, 40);

    gotoxy(38, 8);
    cout << "ADD COMPUTERS QUESTIONS";

    print_rectangle(8, 11, 32, 40);
    print_rectangle(8, 33, 10, 40);

    gotoxy(42 , 34);
    cout << "QUESTION FORMET";

    gotoxy(12, 36);
    cout << "1. Questions should be in one line.";

    gotoxy(12, 37);
    cout << "2. All options should be in one line.";

    gotoxy(12, 38);
    cout << "3. Currect answer also should be in one line.";

    gotoxy(12, 39);
    cout << "4. You can use only 'A B C D' for numbring.";



    int num_of_que;

    gotoxy(10, 14);
    cout << "Enter Number of Questions: ";
    cin >> num_of_que;

    string question;
    string options;
    string answer;

    ofstream questionFile;
    questionFile.open("Question_Database//computer_questions.txt", ios ::app);

    bool i = true;
    int question_number = 1;
    while (num_of_que > 0)
    {
        if (i)
        {
            cin.ignore();
        }

        gotoxy(10, 16);
        cout << "Enter Question " << question_number << " -";
        gotoxy(10, 17);
        cout << "-: ";
        gotoxy(12, 17);
        getline(cin, question);
        questionFile << question << endl;

        gotoxy(10, 19);
        cout << "Enter Options - ";
        gotoxy(10, 20);
        cout << "-: ";
        gotoxy(12, 20);
        getline(cin, options);
        questionFile << options << endl;

        gotoxy(10, 22);
        cout << "Enter Correct Answer - ";
        gotoxy(10, 23);
        cout << "-: ";
        gotoxy(12, 23);
        getline(cin, answer);
        questionFile << answer << endl;

        num_of_que--;
        i = false;
        question_number++;

        if (num_of_que > 0)
        {
            system("cls");

            print_rectangle(8, 5, 7, 40);

            gotoxy(42, 8);
            cout << "ADD QUESTION";

            print_rectangle(8, 11, 32, 40);
        }
    }
    questionFile.close();

    gotoxy(35, 31);
    cout << "Press Enter to continue...";

    cin.get();
    system("cls");
    main_menu();
}

// Function for add questions in science file
void add_questions_in_science()
{
    system("cls");

    print_rectangle(8, 5, 7, 40);

    gotoxy(38, 8);
    cout << "ADD SCIENCE QUESTIONS";

    print_rectangle(8, 11, 32, 40);
    print_rectangle(8, 33, 10, 40);

    gotoxy(42 , 34);
    cout << "QUESTION FORMET";

    gotoxy(12, 36);
    cout << "1. Questions should be in one line.";

    gotoxy(12, 37);
    cout << "2. All options should be in one line.";

    gotoxy(12, 38);
    cout << "3. Currect answer also should be in one line.";

    gotoxy(12, 39);
    cout << "4. You can use only 'A B C D' for numbring.";

    int num_of_que;

    gotoxy(10, 14);
    cout << "Enter Number of Questions: ";
    cin >> num_of_que;

    string question;
    string options;
    string answer;

    ofstream questionFile;
    questionFile.open("Question_Database//science_questions.txt", ios ::app);

    bool i = true;
    int question_number = 1;
    while (num_of_que > 0)
    {
        if (i)
        {
            cin.ignore();
        }

        gotoxy(10, 16);
        cout << "Enter Question " << question_number << " -";
        gotoxy(10, 17);
        cout << "-: ";
        gotoxy(12, 17);
        getline(cin, question);
        questionFile << question << endl;

        gotoxy(10, 19);
        cout << "Enter Options - ";
        gotoxy(10, 20);
        cout << "-: ";
        gotoxy(12, 20);
        getline(cin, options);
        questionFile << options << endl;

        gotoxy(10, 22);
        cout << "Enter Correct Answer - ";
        gotoxy(10, 23);
        cout << "-: ";
        gotoxy(12, 23);
        getline(cin, answer);
        questionFile << answer << endl;

        num_of_que--;
        i = false;
        question_number++;

        if (num_of_que > 0)
        {
            system("cls");

            print_rectangle(8, 5, 7, 40);

            gotoxy(42, 8);
            cout << "ADD QUESTION";

            print_rectangle(8, 11, 32, 40);
        }
    }
    questionFile.close();

    gotoxy(35, 31);
    cout << "Press Enter to continue...";

    cin.get();
    system("cls");
    main_menu();
}

// Function for add questions in math file
void add_questions_in_math()
{
    system("cls");

    print_rectangle(8, 5, 7, 40);

    gotoxy(38, 8);
    cout << "ADD MATH QUESTIONS";

    print_rectangle(8, 11, 32, 40);
    print_rectangle(8, 33, 10, 40);

    gotoxy(42 , 34);
    cout << "QUESTION FORMET";

    gotoxy(12, 36);
    cout << "1. Questions should be in one line.";

    gotoxy(12, 37);
    cout << "2. All options should be in one line.";

    gotoxy(12, 38);
    cout << "3. Currect answer also should be in one line.";

    gotoxy(12, 39);
    cout << "4. You can use only 'A B C D' for numbring.";

    int num_of_que;

    gotoxy(10, 14);
    cout << "Enter Number of Questions: ";
    cin >> num_of_que;

    string question;
    string options;
    string answer;

    ofstream questionFile;
    questionFile.open("Question_Database//math_questions.txt", ios ::app);

    bool i = true;
    int question_number = 1;
    while (num_of_que > 0)
    {
        if (i)
        {
            cin.ignore();
        }

        gotoxy(10, 16);
        cout << "Enter Question " << question_number << " -";
        gotoxy(10, 17);
        cout << "-: ";
        gotoxy(12, 17);
        getline(cin, question);
        questionFile << question << endl;

        gotoxy(10, 19);
        cout << "Enter Options - ";
        gotoxy(10, 20);
        cout << "-: ";
        gotoxy(12, 20);
        getline(cin, options);
        questionFile << options << endl;

        gotoxy(10, 22);
        cout << "Enter Correct Answer - ";
        gotoxy(10, 23);
        cout << "-: ";
        gotoxy(12, 23);
        getline(cin, answer);
        questionFile << answer << endl;

        num_of_que--;
        i = false;
        question_number++;

        if (num_of_que > 0)
        {
            system("cls");

            print_rectangle(8, 5, 7, 40);

            gotoxy(42, 8);
            cout << "ADD QUESTION";

            print_rectangle(8, 11, 32, 40);
        }
    }
    questionFile.close();

    gotoxy(35, 31);
    cout << "Press Enter to continue...";

    cin.get();
    system("cls");
    main_menu();
}

// Function for score board
void score_board()
{
    system("cls");

    print_rectangle(18, 11, 5, 30);

    gotoxy(42, 13);
    cout << "SCORE BOARD";

    print_rectangle(18, 15, 25, 30);

    gotoxy(28, 18);
    cout << "Player's Name        : " << FIRST_NAME << " " << LAST_NAME;

    gotoxy(28, 20);
    cout << "Player's UID         : " << UID;

    gotoxy(28, 22);
    cout << "Question Attempted   : " << counter;

    gotoxy(28, 24);
    cout << "Correct Answer       : " << score;

    gotoxy(28, 26);
    cout << "Wrong Answer         : " << counter - score;

    gotoxy(28, 30);
    cout << "Score (Out of " << counter * 5 << ")    "
         << ": " << score * 5;

    gotoxy(28, 32);
    cout << "Percentage           : " << ((score * 5) * 100) / (counter * 5) << "%";

    gotoxy(35, 37);
    cout << "Press Enter to continue...";

    cin.get();
    cin.get();

    main_menu();
}

// Funtion for main menu
void main_menu()
{
    int menu_item = 0, run, x = 24;
    bool running = true;

    print_rectangle(18, 11, 5, 30);

    gotoxy(42, 13);
    cout << "Quiz  Game";

    print_rectangle(18, 15, 25, 30);

    print_rectangle(18, 37, 4, 30);

    gotoxy(28,39);
    cout << "<UP & DOWN> = MOVE    <ENTER> = SELECT";

    gotoxy(44, 19);
    cout << "Options";
    gotoxy(39, 24);
    cout << ">> ";

    while (running)
    {
        gotoxy(42, 24);
        cout << "1. Play";
        gotoxy(42, 25);
        cout << "2. Add Questions";
        gotoxy(42, 26);
        cout << "3. Exit";

        system("pause>nul"); // the >nul bit causes it the print no message

        if (GetAsyncKeyState(VK_DOWN) && x != 11) //down arrow pressed
        {
            gotoxy(39, x);
            cout << "  ";
            x++;
            gotoxy(39, x);
            cout << ">> ";
            menu_item++;
            continue;
        }

        if (GetAsyncKeyState(VK_UP) && x != 7) //up arrow pressed
        {
            gotoxy(39, x);
            cout << "  ";
            x--;
            gotoxy(39, x);
            cout << ">> ";
            menu_item--;
            continue;
        }

        if (GetAsyncKeyState(VK_RETURN)) // Enter key pressed
        {
            switch (menu_item)
            {

            case 0:
            {
                running = false;
                system("cls");
                sub_menu();
                break;
            }

            case 1:
            
            {
                running = false;
                system("cls");
                add_sub_menu();
                break;
            }

            case 2:
            {
                system("cls");
                gotoxy(36, 18);
                cout << " Exit Successful!! Thank You :) ";
                gotoxy(38, 35);
                exit(0);
            }
            }
        }
    }
}

// Function for person details
void your_details()
{
    system("cls");

    print_rectangle(18, 11, 5, 30);

    gotoxy(42, 13);
    cout << "YOUR DETAILS";

    print_rectangle(18, 15, 25, 30);

    gotoxy(25, 24);
    cout << "Enter Your First Name: ";
    cin >> FIRST_NAME;

    gotoxy(25, 26);
    cout << "Enter Your Last Name: ";
    cin >> LAST_NAME;

    gotoxy(25, 28);
    cout << "Enter Your UID: ";
    cin >> UID;
}

int main()
{
    //	Welcome screen start
    /*
    In print_rectangle function we pass x, y for console coordinates and row, column for print rectangle.
    */

    Sleep(3000);

    // Welcome screen outer rectangle
    print_rectangle(18, 11, 30, 30);

    // Welcome screen inner rectangle 1
    print_rectangle(32, 20, 5, 16);

    // Welcome text
    gotoxy(38, 22);
    cout << "Welcome To Quiz Game!";

    // Welcome screen inner rectangle 2
    print_rectangle(22, 29, 7, 26);

    //Auther details
    gotoxy(26, 31);
    cout << "Made By:-";
    gotoxy(26, 33);
    cout << "Ramanuj & Lavish";

    gotoxy(35, 38);
    cout << "Press Enter to continue...";
    cin.get();
    system("cls");

    //    Welcome screen end

    // Main menu screen start

    main_menu();

    // Main menu screen end

    getch();

    return 0;
}
