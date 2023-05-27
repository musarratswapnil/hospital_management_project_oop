#include<iostream>
#include<fstream>
#include<conio.h>
#include<iomanip>
#include<cstring>
#include<windows.h>

using namespace std;

void menu();

class manageMenu
{
 protected:
    string userName;
 public:
    manageMenu()
    {
        system("color F5");
        cout<<"\n\n\n\n\n\n\t\t\t\t\t\t    Welcome!\n\n\n\t\t\t\t\tEnter Any key to go to Main Menu: ";
        string x;
        cin>>x;
        system("cls");
        menu();
    }
    ~manageMenu(){}
};

class management
{

public:
    virtual void get()=0;
    virtual void show()=0;

};

class patient
{
public:
    string name, gender, address;
    int age, mobile;
    static int ID;
    char all[999];

    void getPatient()
    {

        ofstream out("old-patient.txt", ios::app);
        {
            cout<<"Enter Patient ID: ";
            cin>>ID;
            cout<<"Enter Patient Name: ";
            cin>>name;
            cout<<"Enter Patient Age: ";
            cin>>age;
            cout<<"Enter Patient Mobile Number: ";
            cin>>mobile;
            cout<<"Enter Patient Address: ";
            cin>>address;
            cout<<"Enter Patient Gender: ";
            cin>>gender;
        }
        out<<"\n\t\t\t\tPatient ID: "<<ID;
        out<<"\n\t\t\t\tPatient Name: "<<name;
        out<<"\n\t\t\t\tPatient Age: "<<age;
        out<<"\n\t\t\t\tPatient Mobile No: "<<mobile;
        out<<"\n\t\t\t\tPatient Address: "<<address;
        out<<"\n\t\t\t\tPatient Gender: "<<gender;
        out.close();
        cout<<"\n\t\t\t\tSaved \n\t\t\t\tNOTE: We save your details record for future purposes\n"<<endl;
    }

    void showPatient()
    {
        ifstream in("old-patient.txt");
        {
            if(!in)
            {
                cout<<"File Error!"<<endl;
            }
            while(!(in.eof()))
            {
                in.getline(all,999);
                cout<<all<<endl;
            }
            in.close();
        }
    }

};

int patient::ID;

class medicine
{
public:
    void getMedicine()
    {
        system("cls");
        system("color F3");
        cout<<"\n\t\t\t-------------------------WELCOME TO MEDICINE DEPARTMENT--------------------------\n"<<endl;
        cout<<"\n\t\t\t\tWe collaborated with the best medicine doctors of Bangladesh"<<endl;
        cout<<"\t\t\t\t\t\tOur Medicine Specialists are:"<<endl;
        cout<<"\n\t\t\t=================================================================================\n";
        cout<<"\n\n\t\t\t\t\t(Two Doctor Available) \n\n\t\t\t\t\t[Information and Timing Are Given Below]\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";

        cout<<"\t\t\t\t\t Dr Rana\n\n";
        cout<<"\t\t\t\t\t\t [[Timing]]:\n\n";
        cout<<"\t\t\tMonday to Friday\t\t\t\t\t9AM TO 5PM\n";
        cout<<"\t\t\t\tSaturday\t\t\t\t\t9AM TO 1PM\n";
        cout<<"\t\t\t\tSunday\t\t\t\t\t off\n\n";
        cout<<"\t\t\t\tDoctor Fee 500.00 taka\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";

        cout<<"\t\t\t\t\t Dr Himi\n\n";
        cout<<"\t\t\t\t\t\t [[Timing]]:\n\n";
        cout<<"\t\t\tMonday to Friday\t\t9AM TO 5PM\n";
        cout<<"\t\t\t\tSaturday\t\t9AM TO 1PM\n";
        cout<<"\t\t\t\tSunday\t\t 12PM TO 9PM\n\n";
        cout<<"\t\t\t\tDoctor Fee 500.00 taka\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";
        cout<<"\n\t\t\tPress doctor number to Continue or any other number to redirect to previous menu:";
    }
};

class eye
{
public:
    void getEye()
    {
        system("cls");
        system("color F3");
        cout<<"\n\t\t\t---------------------------WELCOME TO EYE DEPARTMENT-----------------------------\n"<<endl;
        cout<<"\n\t\t\t\tWe collaborated with the best eye doctors of Bangladesh"<<endl;
        cout<<"\t\t\t\t\t\tOur Eye Specialists are:"<<endl;
        cout<<"\n\t\t\t=================================================================================\n";
        cout<<"\n\n\t\t\t\t\t(Two Doctor Available) \n\n\t\t\t\t\t[Information and Timing Are Given Below]\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";

        cout<<"\t\t\t\t\t Dr Sinthia\n\n";
        cout<<"\t\t\t\t\t\t [[Timing]]:\n\n";
        cout<<"\t\t\tMonday to Friday\t\t\t\t\t9AM TO 5PM\n";
        cout<<"\t\t\t\tSaturday\t\t\t\t\t9AM TO 1PM\n";
        cout<<"\t\t\t\tSunday\t\t\t\t\t off\n\n";
        cout<<"\t\t\t\tDoctor Fee 500.00 taka\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";

        cout<<"\t\t\t\t\t Dr Sultana\n\n";
        cout<<"\t\t\t\t\t\t [[Timing]]:\n\n";
        cout<<"\t\t\tMonday to Friday\t\t9AM TO 5PM\n";
        cout<<"\t\t\t\tSaturday\t\t9AM TO 1PM\n";
        cout<<"\t\t\t\tSunday\t\t 12PM TO 9PM\n\n";
        cout<<"\t\t\t\tDoctor Fee 500.00 taka\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";
        cout<<"\n\t\t\tPress doctor number to Continue or any other number to redirect to previous menu:";
    }
};

class orthopedics
{
public:
    void getOrthopedics()
    {
        system("cls");
        system("color F3");
        cout<<"\n\t\t\t------------------------WELCOME TO ORTHOPEDICS DEPARTMENT------------------------\n"<<endl;
        cout<<"\n\t\t\t\tWe collaborated with the best orthopedics doctors of Bangladesh"<<endl;
        cout<<"\t\t\t\t\t\tOur Orthopedics Specialists are:"<<endl;
        cout<<"\n\t\t\t=================================================================================\n";
        cout<<"\n\n\t\t\t\t\t(Two Doctor Available) \n\n\t\t\t\t\t[Information and Timing Are Given Below]\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";

        cout<<"\t\t\t\t\t Dr Mayesha\n\n";
        cout<<"\t\t\t\t\t\t [[Timing]]:\n\n";
        cout<<"\t\t\tMonday to Friday\t\t\t\t\t9AM TO 5PM\n";
        cout<<"\t\t\t\tSaturday\t\t\t\t\t9AM TO 1PM\n";
        cout<<"\t\t\t\tSunday\t\t\t\t\t off\n\n";
        cout<<"\t\t\t\tDoctor Fee 500.00 taka\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";

        cout<<"\t\t\t\t\t Dr Mim\n\n";
        cout<<"\t\t\t\t\t\t [[Timing]]:\n\n";
        cout<<"\t\t\tMonday to Friday\t\t9AM TO 5PM\n";
        cout<<"\t\t\t\tSaturday\t\t9AM TO 1PM\n";
        cout<<"\t\t\t\tSunday\t\t 12PM TO 9PM\n\n";
        cout<<"\t\t\t\tDoctor Fee 500.00 taka\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";
        cout<<"\n\t\t\tPress doctor number to Continue or any other number to redirect to previous menu:";
    }
};

class net
{
public:
    void getNet()
    {
        system("cls");
        system("color F3");
        cout<<"\n\t\t\t---------------------WELCOME TO NOSE_EAR_THROAT DEPARTMENT-----------------------\n"<<endl;
        cout<<"\n\t\t\t\tWe collaborated with the best nose,ear&throat doctors of Bangladesh"<<endl;
        cout<<"\t\t\t\t\t\tOur Specialists are:"<<endl;
        cout<<"\n\t\t\t=================================================================================\n";
        cout<<"\n\n\t\t\t\t\t(Two Doctor Available) \n\n\t\t\t\t\t[Information and Timing Are Given Below]\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";

        cout<<"\t\t\t\t\t Dr Sakib\n\n";
        cout<<"\t\t\t\t\t\t [[Timing]]:\n\n";
        cout<<"\t\t\tMonday to Friday\t\t\t\t\t9AM TO 5PM\n";
        cout<<"\t\t\t\tSaturday\t\t\t\t\t9AM TO 1PM\n";
        cout<<"\t\t\t\tSunday\t\t\t\t\t off\n\n";
        cout<<"\t\t\t\tDoctor Fee 500.00 taka\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";

        cout<<"\t\t\t\t\t Dr Tamim\n\n";
        cout<<"\t\t\t\t\t\t [[Timing]]:\n\n";
        cout<<"\t\t\tMonday to Friday\t\t9AM TO 5PM\n";
        cout<<"\t\t\t\tSaturday\t\t9AM TO 1PM\n";
        cout<<"\t\t\t\tSunday\t\t 12PM TO 9PM\n\n";
        cout<<"\t\t\t\tDoctor Fee 500.00 taka\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";
        cout<<"\n\t\t\tPress doctor number to Continue or any other number to redirect to previous menu:";
    }
};

class surgery
{
public:
    void getSurgery()
    {
        system("cls");
        system("color F3");
        cout<<"\n\t\t\t--------------------------WELCOME TO SURGERY DEPARTMENT--------------------------\n"<<endl;
        cout<<"\n\t\t\t\tWe collaborated with the best surgeons of Bangladesh"<<endl;
        cout<<"\t\t\t\t\t\tOur Surgeons are:"<<endl;
        cout<<"\n\t\t\t=================================================================================\n";
        cout<<"\n\n\t\t\t\t\t(Two Doctor Available) \n\n\t\t\t\t\t[Information and Timing Are Given Below]\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";

        cout<<"\t\t\t\t\t Dr Nahar\n\n";
        cout<<"\t\t\t\t\t\t [[Timing]]:\n\n";
        cout<<"\t\t\tMonday to Friday\t\t\t\t\t9AM TO 5PM\n";
        cout<<"\t\t\t\tSaturday\t\t\t\t\t9AM TO 1PM\n";
        cout<<"\t\t\t\tSunday\t\t\t\t\t off\n\n";
        cout<<"\t\t\t\tDoctor Fee 500.00 taka\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";

        cout<<"\t\t\t\t\t Dr Nubah\n\n";
        cout<<"\t\t\t\t\t\t [[Timing]]:\n\n";
        cout<<"\t\t\tMonday to Friday\t\t9AM TO 5PM\n";
        cout<<"\t\t\t\tSaturday\t\t9AM TO 1PM\n";
        cout<<"\t\t\t\tSunday\t\t 12PM TO 9PM\n\n";
        cout<<"\t\t\t\tDoctor Fee 500.00 taka\n";
        cout<<"\t\t\t---------------------------------------------------------------------------------\n";
        cout<<"\n\t\t\tPress doctor number to Continue or any other number to redirect to previous menu:";
    }
};


class departments: public medicine,orthopedics,eye,net,surgery
{
public:
    int choiceDept;
    int doctorChoice;
    static float doctorFee;

    void getdepartment()
    {
        string deptName[]={"Medicine", "Orthopedic", "Eye_Specialist","Surgery","Neck_Ear_Throat_Specialist"};
        for(int i=0; i<5; i++)
        {
            cout<<"\t\t\t\t"<<(i+1)<<"--->"<<deptName[i]<<endl;
        }
        cout<<"\n\t\t\t\tCurrently we have above departments!"<<endl;
        cout<<"\n\t\t\t\tPress any other number to back or\n Enter number of the department you want to get information: ";
        cin>>choiceDept;

        system("cls");

        if(choiceDept==1)
        {
            getMedicine();

            cin>>doctorChoice;

            if(doctorChoice==1)
            {
                doctorFee=500.00;
                cout<<"\n\t\t\t\tYou have successfully appointed to Dr Rana"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else if(doctorChoice==2)
            {
                doctorFee=600.00;
                cout<<"\n\t\t\t\tYou have successfully appointed to Dr Himi"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else
            {
                cout<<"\n\t\t\t\tInvalid Input! Redirecting to Previous Menu \nPlease Wait!"<<endl;
                Sleep(1100);
                system("cls");
                getdepartment();
            }

            int gotoMenu;
            cout<<"\n\t\t\t\tPress any other number to Redirect to Previous Menu: "<<endl;
            cin>>gotoMenu;
            system("cls");
            if(gotoMenu==1)
            {
                getdepartment();
            }
            else
                getdepartment();
        }

        else if(choiceDept==2)
        {
            getOrthopedics();

            cin>>doctorChoice;

            if(doctorChoice==1)
            {
                doctorFee=500.00;
                cout<<"\n\t\t\t\tYou have successfully appointed Dr Mayesha"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else if(doctorChoice==2)
            {
                doctorFee=600.00;
                cout<<"\n\t\t\t\tYou have successfully appointed Dr Mim"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else
            {
                cout<<"\n\t\t\t\tInvalid Input! Redirecting to Previous Menu \nPlease Wait!"<<endl;
                Sleep(1100);
                system("cls");
                getdepartment();
            }

            int gotoMenu;
            cout<<"\n\t\t\t\tPress any other number to Redirect to Previous Menu: "<<endl;
            cin>>gotoMenu;
            system("cls");
            if(gotoMenu==1)
            {
                getdepartment();
            }
            else
                getdepartment();
        }

        else if(choiceDept==3)
        {
            getEye();

            cin>>doctorChoice;

            if(doctorChoice==1)
            {
                doctorFee=500.00;
                cout<<"\n\t\t\t\tYou have successfully appointed Dr Sinthia"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else if(doctorChoice==2)
            {
                doctorFee=600.00;
                cout<<"\n\t\t\t\tYou have successfully appointed Dr Sultana"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else
            {
                cout<<"\n\t\t\t\tInvalid Input! Redirecting to Previous Menu \nPlease Wait!"<<endl;
                Sleep(1100);
                system("cls");
                getdepartment();
            }

            int gotoMenu;
            cout<<"\n\t\t\t\tPress any other number to Redirect to Previous Menu: "<<endl;
            cin>>gotoMenu;
            system("cls");
            if(gotoMenu==1)
            {
                getdepartment();
            }
            else
                getdepartment();
        }
        else if(choiceDept==4)
        {
            getNet();

            cin>>doctorChoice;

            if(doctorChoice==1)
            {
                doctorFee=500.00;
                cout<<"\n\t\t\t\tYou have successfully appointed to Dr Sakib"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else if(doctorChoice==2)
            {
                doctorFee=600.00;
                cout<<"\n\t\t\t\tYou have successfully appointed to Dr Tamim"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else
            {
                cout<<"\n\t\t\t\tInvalid Input! Redirecting to Previous Menu \nPlease Wait!"<<endl;
                Sleep(1100);
                system("cls");
                getdepartment();
            }

            int gotoMenu;
            cout<<"\n\\t\t\t\tPress any other number to Redirect to Previous Menu: "<<endl;
            cin>>gotoMenu;
            system("cls");
            if(gotoMenu==1)
            {
                getdepartment();
            }
            else
                getdepartment();
        }

        else if(choiceDept==5)
        {
            getSurgery();

            cin>>doctorChoice;

            if(doctorChoice==1)
            {
                doctorFee=500.00;
                cout<<"\n\t\t\t\tYou have successfully appointed to Dr Nahar"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else if(doctorChoice==2)
            {
                doctorFee=600.00;
                cout<<"\n\t\t\t\tYou have successfully appointed to Dr Nubah"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else
            {
                cout<<"\n\t\t\t\tInvalid Input! Redirecting to Previous Menu \nPlease Wait!"<<endl;
                Sleep(1100);
                system("cls");
                getdepartment();
            }

            int gotoMenu;
            cout<<"\n\t\t\t\tPress any other number to Redirect to Previous Menu: "<<endl;
            cin>>gotoMenu;
            system("cls");
            if(gotoMenu==1)
            {
                getdepartment();
            }
            else
                getdepartment();
        }
        else
        {
            cout<<"\n\t\t\t\tInvalid Input! Redirecting to Previous Menu \nPlease Wait!"<<endl;
            Sleep(1100);
            system("cls");
            menu();
        }

    }
};

float departments::doctorFee;


class tests
{
public:
    int testChoice;
    float testCost;
    int atest;
    static float lastTestCost;

    void testDetails()
    {
        cout<<"\n\tWe provide the best test facilities with modern up to date equipments with cheapest rate!!\n\t\t\tTests we provide are given below:\n\n"<<endl;
        cout<<"\t\t\t\t|------------TESTS-----------|"<<endl;
        cout<<"\t\t\t\t|  1. X-Ray - taka 150       |"<<endl;
        cout<<"\t\t\t\t|  2. Blood Test - taka 200  |"<<endl;
        cout<<"\t\t\t\t|  3. Covid Test - taka 100  |"<<endl;
        cout<<"\t\t\t\t| Press 4 to go to Main Menu |"<<endl;
        cout<<"\t\t\t\t|----------------------------|\n"<<endl;

        cout<<"\t\t\t\tEnter the number of test you want: ";
        cin>>testChoice;

        if(testChoice==1)
        {
            testCost= 150;
            cout<<"\n\t\t\t\tYour test cost "<< testCost<<endl;
            cout<<"\t\t\t\tPress 1 to hire take this test: or";
            cout<<"\n\t\t\t\tPress 2 to select another test: ";
            cin>>atest;

            system("cls");

            if(atest==1)
            {
                lastTestCost=testCost;
                cout<<"\n\t\t\t\tYou have successfully registered this test!"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else if(atest==2)
            {
                testDetails();
            }
            else
            {
                cout<<"\n\t\t\t\tInvalid Input! Redirecting to previous menu \nPlease Wait!"<<endl;
                Sleep(999);
                system("cls");
                testDetails();
            }

        }

        else if(testChoice==2)
        {
            testCost= 200;
            cout<<"\n\t\t\t\tYour test cost "<< testCost<<endl;
            cout<<"\t\t\t\tPress 1 to take this this: or";
            cout<<"\n\t\t\t\tPress 2 to select another test: ";
            cin>>atest;

            system("cls");

            if(atest==1)
            {
                lastTestCost=testCost;
                cout<<"\n\t\t\t\tYou have successfully registered this test!"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else if(atest==2)
            {
                testDetails();
            }
            else
            {
                cout<<"\n\t\t\t\tInvalid Input! Redirecting to previous menu \nPlease Wait!"<<endl;
                Sleep(999);
                system("cls");
                testDetails();
            }

        }

        else if(testChoice==3)
        {
            testCost= 100;
            cout<<"\n\t\t\t\tYour test cost "<< testCost<<endl;
            cout<<"\t\t\t\tPress 1 to take this test: or";
            cout<<"\n\t\t\t\tPress 2 to select another test: ";
            cin>>atest;

            system("cls");

            if(atest==1)
            {
                lastTestCost=testCost;
                cout<<"\n\t\t\t\tYou have successfully registered this test!"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else if(atest==2)
            {
                testDetails();
            }
            else
            {
                cout<<"\n\t\t\t\tInvalid Input! Redirecting to previous menu \nPlease Wait!"<<endl;
                Sleep(999);
                system("cls");
                testDetails();
            }

        }

        else if(testChoice==4)
        {
            cout<<"\n\t\t\t\tThanks! Redirecting to Main Menu."<<endl;
            Sleep(1100);
            system("cls");
            menu();
        }

        else
        {
            cout<<"\t\t\t\tInvalid Input! Redirecting to previous menu \nPlease Wait!"<<endl;
            Sleep(1100);
            system("cls");
            menu();
        }
        cout<<"\n\t\t\t\tPress 1 to Redirect Main Menu: ";
        cout<<"\n\t\t\t\tPress 2 to Redirect to Previous Menu: ";
        cin>>atest;
        system("cls");
        if(atest==1)
        {
            menu();
        }
        else if(atest==2)
        {
            testDetails();
        }
        else
        {
            menu();
        }

    }
};

float tests::lastTestCost;

class admit
{
public:
    int admitChoice;
    int noDays;
    float admitCost;
    int aadmit;
    static float lastAdmitCost;

    void admitDetails()
    {
        cout<<"\n\t\t\t\tWe provide given admit facilities:"<<endl;
        cout<<"\t\t\t\t|-----------------------------------------|"<<endl;
        cout<<"\t\t\t\t|                                         |"<<endl;
        cout<<"\t\t\t\t|  1. Emergency ward - taka 2000 per day  |"<<endl;
        cout<<"\t\t\t\t|  2. Double cabin -   taka 1500 per day  |"<<endl;
        cout<<"\t\t\t\t|  3. Single cabin -   taka 2500 per day  |"<<endl;
        cout<<"\t\t\t\t|       Press 4 to go to Main Menu        |"<<endl;
        cout<<"\t\t\t\t|                                         |"<<endl;
        cout<<"\t\t\t\t|-----------------------------------------|"<<endl;

        cout<<"\t\t\t\tEnter the number of test you want: ";
        cin>>admitChoice;

        if(admitChoice==1)
        {
            cout<<"\t\t\t\tEnter number of days: ";
            cin>>noDays;
            admitCost= noDays*2000;
            cout<<"\n\t\t\t\tYour admit cost "<< admitCost<<endl;
            cout<<"\t\t\t\tPress 1 to select emergency ward: or";
            cout<<"\n\t\t\t\tPress 2 to select another option: ";
            cin>>aadmit;

            system("cls");

            if(aadmit==1)
            {
                lastAdmitCost=admitCost;
                cout<<"\n\t\t\t\tYou have successfully registered this test!"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else if(aadmit==2)
            {
                admitDetails();
            }
            else
            {
                cout<<"\n\t\t\t\tInvalid Input! Redirecting to previous menu \nPlease Wait!"<<endl;
                Sleep(999);
                system("cls");
                admitDetails();
            }

        }

        else if(admitChoice==2)
        {
            cout<<"Enter number of days: ";
            cin>>noDays;
            admitCost= noDays*1500;
            cout<<"\n\t\t\t\tYour admit cost "<< admitCost<<endl;
            cout<<"\t\t\t\tPress 1 to select single ward: or";
            cout<<"\n\t\t\t\tPress 2 to select another option: ";
            cin>>aadmit;

            system("cls");

            if(aadmit==1)
            {
                lastAdmitCost=admitCost;
                cout<<"\n\t\t\t\tYou have successfully registered this test!"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else if(aadmit==2)
            {
                admitDetails();
            }
            else
            {
                cout<<"\n\t\t\tInvalid Input! Redirecting to previous menu \n\t\t\tPlease Wait!"<<endl;
                Sleep(999);
                system("cls");
                admitDetails();
            }

        }

        else if(admitChoice==3)
        {
            cout<<"Enter number of days: ";
            cin>>noDays;
            admitCost= noDays*2500;
            cout<<"\n\t\t\t\tYour test cost "<< admitCost<<endl;
            cout<<"\t\t\t\tPress 1 to select single cabin: or";
            cout<<"\n\t\t\t\tPress 2 to select another option ";
            cin>>aadmit;

            system("cls");

            if(aadmit==1)
            {
                lastAdmitCost=admitCost;
                cout<<"\n\t\t\t\tYou have successfully registered this!"<<endl;
                cout<<"\n\t\t\t\tGoto Menu and take the receipt"<<endl;
            }
            else if(aadmit==2)
            {
                admitDetails();
            }
            else
            {
                cout<<"\n\t\t\t\tInvalid Input! Redirecting to previous menu \nPlease Wait!"<<endl;
                Sleep(999);
                system("cls");
                admitDetails();
            }

        }

        else if(admitChoice==4)
        {
            cout<<"\n\t\t\t\tThanks! Redirecting to Main Menu."<<endl;
            Sleep(1100);
            system("cls");
            menu();
        }


        else
        {
            cout<<"\t\t\tInvalid Input! Redirecting to previous menu \n\t\t\tPlease Wait!"<<endl;
            Sleep(1100);
            system("cls");
            admitDetails();
        }
        cout<<"\n\t\t\t\tPress 1 to Redirect Main Menu: ";
        cout<<"\n\t\t\t\tPress 2 to Redirect to Previous Menu: ";
        cin>>aadmit;
        system("cls");
        if(aadmit==1)
        {
            menu();
        }
        else if(aadmit==2)
        {
            admitDetails();
        }
        else
        {
            menu();
        }

    }
};

float admit::lastAdmitCost;

class charges: public patient,departments,tests,admit
{
public:
    void printBill()
    {
        ofstream out("receipt.txt");
        {
            out<<"\n\n\n\n\n\t\t\t\t\t------------KUET HOSPITAL------------"<<endl;
            out<<"\t\t\t\t\t---------------Receipt---------------"<<endl;
            out<<"\t\t\t\t\t_____________________________________"<<endl;

            out<<"\t\t\t\t\tPatient ID: "<<patient::ID<<endl<<endl;
            out<<"\t\t\t\t\tDescription:   \t\tTotal: "<<endl;
            out<<"\t\t\t\t\tDoctor Fee:    \t\t"<<fixed<<setprecision(2)<<departments::doctorFee<<endl;
            out<<"\t\t\t\t\tTest cost:     \t\t"<<fixed<<setprecision(2)<<tests::lastTestCost<<endl;
            out<<"\t\t\t\t\tAdmission cost:\t\t"<<fixed<<setprecision(2)<<admit::lastAdmitCost<<endl;
            out<<"\t\t\t\t\t______________________________________"<<endl;
            out<<"\t\t\t\t\tTotal Charge:\t\t"<<fixed<<setprecision(2)<<departments::doctorFee+tests::lastTestCost+admit::lastAdmitCost<<endl;
            out<<"\t\t\t\t\t______________________________________"<<endl;
            out<<"\t\t\t\t\t---------------THANK YOU--------------";
        }

        out.close();
    }

    void showBill()
    {
        ifstream in("receipt.txt");
        {
            if(!in)
            {
                cout<<"\n\t\t\t\tFile opening error!"<<endl;
            }
            while(!(in.eof()))
            {
                in.getline(all,999);
                cout<<all<<endl;
            }
        }
        in.close();
    }
};


void menu()
{
    system("cls");
    system("color F3");

    cout<<"\n";
    cout<<"\n";

    cout<<"\t\t\t\t  +++++++++++ HOSPITAL MANAGEMENT SYSTEM +++++++++++  \n";
    cout<<"\t\t\t\t  +                                                +  \n";
    cout<<"\t\t\t\t  +            WELCOME TO KUET HOSPITAL            +  \n";
    cout<<"\t\t\t\t  +                                                +  \n";
    cout<<"\t\t\t\t  ++++++++++++++++++++++++++++++++++++++++++++++++++  \n";
    cout<<"\n\t\t\t--------------------------------------------------------------------\n";
    cout<<"\n\t\t\t\t\t\tPlease Select Any Option\n\n\n";
    cout<<"\t\t\t\t\t Press 1 for Available Departments\n\n";
    cout<<"\t\t\t\t\t Press 2 for Test Facilities\n\n";
    cout<<"\t\t\t\t\t Press 3 for Patient Admit Facilities\n\n";
    cout<<"\t\t\t\t\t Press 4 for Patient Management\n\n";
    cout<<"\t\t\t\t\t Press 5 for Download Receipt\n\n";
    cout<<"\t\t\t\t\t Press 0 for Exit\n\n";

    cout<<"\n\t\t\t---------------------------------------------------------------------\n";
    cout<<"\n\n\t\t\t\tPlease Enter Your Choice:"<<endl;

    int choice;
    cin>>choice;

    management *ptr;
    patient p;
    departments d;
    tests t;
    admit a;
    charges c;

    if(choice==1)
    {
        d.getdepartment();
    }

    else if(choice==2)
    {
        t.testDetails();
    }

    else if(choice==3)
    {
        a.admitDetails();
    }

    else if(choice==4)
    {
        cout<<"\n\n\t\t\t\t|--------Patient-----------|"<<endl;
        cout<<"\t\t\t\t|                          |"<<endl;
        cout<<"\t\t\t\t|   1.Enter New Patient    |"<<endl;
        cout<<"\t\t\t\t|   2.See Old Patients     |"<<endl;
        cout<<"\t\t\t\t|                          |"<<endl;
        cout<<"\t\t\t\t|--------------------------|"<<endl;

        cout<<"\n\t\t\t\tEnter Choice: "<<endl;

        int x;
        cin>>x;
        system("cls");

        if(x==1)
        {
            p.getPatient();
        }
        else if(x==2)
        {
            p.showPatient();
        }
        else
        {
            cout<<"\n\t\t\t\tInvalid Input! Redirecting to Previous Menu \n\t\t\t\t\tPlease Wait!"<<endl;
            Sleep(1100);
            system("cls");
            menu();
        }
        cout<<"\n\t\t\t\tPress any other number to Redirect main menu: ";
        int a;
        cin>>a;
        system("cls");
        menu();
    }

    else if(choice==5)
    {
        cout<<"\n\n\n\t\t\t\t\t\t-->Get your receipt<--\n"<<endl;
        c.printBill();
        cout<<"\t\t\tYour receipt is already printed. You can get it from file path\n"<<endl;
        cout<<"\t\t\tPress 1 to display your receipt in the screen \nor\n\t\t\tEnter another key to back main menu: \n";

        int a;
        cin>>a;

        if(a==1)
        {
            system("cls");
            c.showBill();
            cout<<"\n\t\t\t\tPress any other number to redirect to main menu: ";
            cin>>a;
            system("cls");
            menu();
        }
        else
        {
            system("cls");
            menu();
        }

    }

    else if(choice==0)
    {
        cout<<"\n\n\t\t\t\t\t\t--GOOD-BYE--"<<endl;
        Sleep(999);
        system("cls");
        manageMenu();

    }

    else
    {
        cout<<"\n\t\t\t\tInvalid Input! Redirecting to Previous Menu \n\t\t\t\t\tPlease Wait!"<<endl;
        Sleep(1100);
        system("cls");
        menu();
    }

}

int main()
{
    manageMenu x;
    return 0;

}
