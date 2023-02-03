#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

void login();
void deposite_milk();
void menu();
void purchaseMilk();
void about();

class info
{
public:
    char name[50];
    int no, fat;
    float milk;
    char day[10];

public: 
    void getdata()
    {
        cout << "\nEnter Your Name(without space): ";
        cin >> name;
        cout << "\nEnter Your Number : ";
        cin >> no;
        cout << "\nEnter Morning OR Evening : ";
        cin >> day;
        cout << "\nEnter Milk in litre: ";
        cin >> milk;
        cout << "\nEnter Milk fat %: ";
        cin >> fat;
    }
    void putdata();
};
void info ::putdata()
{
    float fat_rate = 6.43, total;
    float fat_t = (fat * fat_rate);
    total = (fat * fat_rate) * milk;
    system("cls");
    cout << "\n\tYOUR BILL-";
    cout << "\n\t\t  ====================================";
    cout << "\n\t\t|          GrassLand Meadows           |" << endl;
    cout << "\n\t\t  Name : " << name << "       No. - " << no << endl;
    cout << "\n\t\t  Milk session: " << day << endl;
    cout << "\n\t\t  Milk : " << milk << " Litre"
         << "      Fat: " << fat << endl;
    cout << "\n\t\t| Fat rate: " << fat_t << "     Total: " << total << "rs  |";
    cout << "\n\t\t  ====================================" << endl;
}

char user[50];
int pass;
int i, opt;

int main()
{
    login();
    menu();
}
//login function,for entering into Milk dairy system
void login()
{

    cout << "\n\n\t\t\t|--------------LOGIN----------------|" << endl;
    cout << "\n\t\t\t Enter User_name: ";
    cin >> user;
    cout << "\n\t\t\t Enter Password[4914]: ";
    cin >> pass;
    cout << "\n\t\t\t|-----------------------------------|" << endl;
    if (pass == 4914)
    {
        system("cls");
        cout << "\n\tsuccessfully logging";
        for (int i = 0; i < 10; i++)
        {
            cout << ".";
            Sleep(250);
        }
        Beep(523, 900);
    }
    else
    {
        cout << "\nERROR.....! PLEASE CHECK YOUR PASSWORD.";
        main();
    }
}
//deposite_milk function, for deposite todays milk and bill
void deposite_milk()
{
    info n;
    int animal;
    char back;

    cout << "\n\n__________________________________________\n";
    cout << "\n**Enter your Milk animal NO. from below**";
    cout << "\n\n\t|1. BUFFALO |2. COW |\n";
    cin >> animal;

    if (animal == 1)
        cout << "\nYou choose 'BUFFALO' \n";
    else if (animal != 1 && animal != 2)
    {
        cout << "\nError! choose only option [1/2] ....." << endl;
        Sleep(2500);
        system("cls");
        deposite_milk();
    }

    else
        cout << "\nYou choose 'COW' \n";

    n.getdata();
    //cout << "\n\n__________________________________________";
    n.putdata();
    cout << "\nWant to go back to the Menu [y/n]-";
    cin >> back;

    if (back == 'y' || back == 'Y')
    {
        menu();
    }
    else
    {
        deposite_milk();
    }
}
//function for purchasing mlik
void purchaseMilk()
{
    int choice;
    char name1[50];
    char address[50];
    float milk1;
    int fat1;
    float tot;
    float tot1;
    float tot2;
    float tot3;
    cout<<"Enter your name"<<endl;
    cin>>name1;
    cout<<"Enter your address"<<endl;
    cin>>address;

        cout<<"~~~~~~~~~~varities avaliable~~~~~~~~~~~~~"<<endl;
        cout<<"1.whole mlik "<<endl<<"2. low-fat-milk "<<endl<<"3.fat-free-milk."<<endl<<"4.Lactose-Free Milk"<<endl;
       /* cout << "\nEnter Milk in litre: ";
        cin >> milk1;
        float tot=milk1*40;
        cout<<"Your Bill"<<endl<<"NAME:"<<name1<<endl<<"ADDRESS:"<<address<<endl;
        cout<<"Your bill is RS:"<<tot;
        */
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1: 
         cout<<"you have choosed whole Milk"<<endl;
            cout << "Enter Milk in litre: "<<endl;
         cin >> milk1;
         tot=milk1*43.50;
         cout<<"Your Bill"<<endl<<"NAME:"<<name1<<endl<<"ADDRESS:"<<address<<endl;
        cout<<"Your bill is RS:"<<tot;
         cout<<"~~~~~~~THANK YOUR VISIT AGAIN~~~~~~"<<endl;
            break;
        case 2:
       // cout<"you have choosed low-fat-milk"<<endl;
            cout << "\nEnter Milk in litre: ";
        cin >> milk1;
         tot1=milk1*58;;
       cout<<"Your Bill"<<endl<<"NAME:"<<name1<<endl<<"ADDRESS:"<<address<<endl;
        cout<<"Your bill is RS:"<<tot1;
         cout<<"~~~~~~~THANK YOUR VISIT AGAIN~~~~~~"<<endl;
        break;
        case 3:
    cout<<"you have choosed  fat-free-milk"<<endl;
    cout << "\nEnter Milk in litre: ";
        cin >> milk1;
         tot2=milk1*63;;
      cout<<"Your Bill"<<endl<<"NAME:"<<name1<<endl<<"ADDRESS:"<<address<<endl;
        cout<<"Your bill is RS:"<<tot2;
         cout<<"~~~~~~~THANK YOUR VISIT AGAIN~~~~~~"<<endl;
        break;
        case 4:
        cout<<"you have choosed lactose-free-milk"<<endl;
        cout << "\nEnter Milk in litre: ";
        cin >> milk1;
         tot3=milk1*54;;
        cout<<"Your Bill"<<endl<<"NAME:"<<name1<<endl<<"ADDRESS:"<<address<<endl;
        cout<<"Your bill is RS:"<<tot3<<endl;
         cout<<"~~~~~~~THANK YOUR VISIT AGAIN~~~~~~"<<endl;
        break;
        default :
        cout<<"Sorry sir the item is currently not avaliable"<<endl;
            break;
            }
        
 
}

//function for main menu
void menu()
{
    system("cls");
  
    cout << "\n\n\t\t******welcome in GrassLand Meadows [ " << user << " ]******";
    time_t my_time = time(NULL);

    cout << "\t    DATE: " << ctime(&my_time);
    cout << "\n\n1.Deposit Milk";
    
    cout << "\n2.purchase milk";
    cout << "\n3.About our Dairy";
    cout << "\n4.Logout";

    cout << "\n\nEnter option: ";
    cin >> opt;

    switch (opt)
    {
    case 1:
        deposite_milk();
        break;

    case 2:
         purchaseMilk();
        break;

    case 3:
      about();
        break;
    case 4:
        cout << "\n\t\t\tThank you | keep visiting";
        exit(0);
    default:
        break;
    }
}



void about()
{
    char mn;
    system("cls");
    cout << "\n\n\t\t******Welcome In GrassLand Meadows [ " << user << " ]******";

    cout << "\n\n\n\tEstablishment date:13/11/2021";
    cout << "\n\n\tThank's for visiting our dairy,Nirmal milk dairy was established on\n\t13 November 2021. in our dairy, all new technology devices\n\tare present to make customers easy to deposit their animal milk\n\tand all other work. here you can get lots of benefits in any festival\n\t like Diwali bonus, or Ganesh Chaturthi bonus.\n\n\twe also arrange a trip for our associate 2 times yearly for free.\n\tOur loan rate is also less than others. here you can get up to 10 \n\tlakh loan at a time with less loan rate. we can due different types\n\tof loan like for home, you can get our home loan plan [rate-12%], for\n\t buying vehicle [loan rate-10%] and for agriculture [loan rate 7%]\n\t only. you can also get other benefits, for that make associate\n\t of our milk dairy if you are not yet. ";

    cout <<"\n\n\t\t\tThank you | Keep visiting\n\n\t    \n|_______________________________________________________________|\n\n";
    cout << "\nBack to the Menu [y/n]- ";
    cin >> mn;

    if (mn == 'y' || mn == 'Y')
        menu();
    else
        about();
}

