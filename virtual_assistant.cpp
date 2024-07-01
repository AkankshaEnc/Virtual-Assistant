#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<ctime>

using namespace std;

// function to wish user according to time
void wishme(){
    //current time and date based on our time zone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning Boss"<<endl;
        string phrase = "Good Morning Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon Boss"<<endl;
        string phrase = "Good Afternoon Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    
    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening Boss"<<endl;
        string phrase = "Good Evening Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    } 
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl<< dt <<endl;
}

int main(){
    system("cls");

    cout<<"\t\t=============================== HELLO I'M A VIRTUAL ASSISTANT ==============================="<<endl;
    cout<<"\t\t=============================== I AM HERE TO HELP YOU ==============================="<<endl;
    cout<<"\t\t=============================== WELCOME WELCOME WELCOME ==============================="<<endl<<endl;

    char password[20];  // for password
    char ch[100];       // for query command from you/user

    do{
        cout<<"======================"<<endl;
        cout<<" ENTER YOUR PASSWORD "<<endl;
        cout<<"======================"<<endl;
        string phrase = "Enter your password";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        gets(password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(strcmp(password, "Akanksha") == 0){
            cout<<"HURRAY! Correct Password"<<endl<<endl;
            string phrase = "Hurray! correct password";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            wishme();

            do{
                cout<<"*************************************************************************************"<<endl;
                cout<<"How can I help you boss?"<<endl;
                string phrase = "How can I help you boss?";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                cout<<"*************************************************************************************"<<endl;
                cout<<"Query -> ";
                gets(ch);
                cout<<endl;
                cout<<"Response to our query -> ";

                if(strcmp(ch, "hi")==0 || strcmp(ch, "hey")==0 || strcmp(ch, "hello")==0){
                    cout<<"Hello Boss"<<endl;
                    string phrase = "Hello Boss";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(strcmp(ch, "bye")==0 || strcmp(ch, "exit")==0 || strcmp(ch, "stop")==0){
                    cout<<"Good Bye Boss. Have a nice day!"<<endl;
                    string phrase = "Good Bye Boss. Have a nice day!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else if(strcmp(ch, "who are you")==0 || strcmp(ch, "tell me about yourself")==0 || strcmp(ch, "express yourself")==0){
                    cout<<"I am a virtual assistant created by Ak!"<<endl;
                    string phrase = "I am a virtual assistant created by Ak!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(strcmp(ch, "how are you")==0 || strcmp(ch, "how is your day")==0 || strcmp(ch, "whatsup")==0){
                    cout<<"I am fine Boss. "<<endl;
                    string phrase = "I am fine Boss";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(strcmp(ch, "time")==0 || strcmp(ch, "date")==0 || strcmp(ch, "time and date")==0){
                    datetime();
                }
                else if(strcmp(ch, "open notepad") == 0){
                    cout<<"Opening notepad.........."<<endl;
                    string phrase = "Opening notepad......";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if(strcmp(ch, "open google") == 0){
                    cout<<"Opening google.........."<<endl;
                    string phrase = "Opening google........";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }
                else if(strcmp(ch, "open youtube") == 0){
                    cout<<"Opening YouTube.........."<<endl;
                    string phrase = "Opening YouTube.......";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }
                else if(strcmp(ch, "open telegram") == 0){
                    cout<<"Opening telegram.........."<<endl;
                    string phrase = "Opening telegram.";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.telegram.com");
                }
                else{
                    cout<<"Sorry Boss! can't understand your query, Please try again!"<<endl;
                    string phrase = "Sorry Boss! can't understand your query, Please try again!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

            }while(1);
        }
        else{
            cout<<"Incorrect Password"<<endl<<endl;
            string phrase = "Incorrect Password";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }

    }while(1);


    return 0;
}
