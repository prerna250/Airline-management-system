#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cctype>
#include<ctime>
using namespace std;

string de,bo,namel[15],genl[15],b[10],f[30],s;
int o,agel[10],people,g[30],j,e,i=0,y=0,ag=0,m,food = 0,cost = 0,sum,date,month,year,tot=0,k,c,z,items,flight,a,it,bnk;
double num;
char gender;
void maini(),hungry(),bill(),pay(),feedback();


//-------------------- SEAT RESERVATION --------------------


void flightsd()        //DOMESTIC FLIGHTS
{
    cout << "\n";
    cout << "----------   FLIGHT DETAILS!   ----------";
    cout << "\n";
    cout << "FLIGHTS AVAILABLE:\n";
    cout << "1.INDIGO\n";
    cout << "2.VISTARA\n";
    cout << "3.GOAIR\n";
    cout << "4.AIR INDIA\n";
    cout << "5.JET AIRWAYS\n";
    cout << "ENTER THE NUMBER:";
    cin >> a;
    if (a == 1)
        {
            cout << "DEPARTURE TIME: 3:00       ARRIVAL TIME: 6:00       COST (per person): 5500";
            b[it] = "INDIGO";
            it++;
            c = 5500 * people;
            cout << "   TOTAL COST OF TICKETS:" << c << endl;
        } 

    else if (a == 2)
        {
            cout << "DEPARTURE TIME: 13:05       ARRIVAL TIME: 16:55       COST (per person): 6000";
            b[it] = "VISTARA";
            it++;
            c = 6000 * people;
            cout << "   TOTAL COST OF TICKETS:" << c << endl;
        }

    else if (a == 3)
        {
            cout << "DEPARTURE TIME: 1:35       ARRIVAL TIME: 3:00       COST (per person): 8000";
            b[it] = "GOAIR";
            it++;
            c = 8000 * people;
            cout << "   TOTAL COST OF TICKETS:" << c << endl;
        }

    else if (a == 4)
        {
            cout << "DEPARTURE TIME: 3:20       ARRIVAL TIME: 5:45       COST (per person): 8500";
            b[it] = "AIR INDIA";
            it++; 
            c = 8500 * people;
            cout << "   TOTAL COST OF TICKETS:" << c << endl;
        }
    else
    {
            cout << "DEPARTURE TIME: 10:00      ARRIVAL TIME: 12:35       COST (per person): 9000";
            b[it] = "JET AIRWAYS";
            it++;
            c = 9000 * people;
            cout << "   TOTAL COST OF TICKETS:" << c << endl;
    }
    hungry();
}

//-------------------- INTERNATIONAL FLIGHTS --------------------
void flightsi()
{
    cout << "\n";
    cout << "----------   FLIGHT DETAILS!   ----------";
    cout << "\n";
    cout << "FLIGHTS AVAILABLE:\n";
    cout << "1.QANTAS\n";
    cout << "2.KOREAN AIR\n";
    cout << "3.AIR ASIA\n";
    cout << "4.QATAR AIRWAYS\n";
    cout << "5.EMIRATES\n";
    cout << "ENTER THE NUMBER:";
    cin >> a;
    if (a == 1)
    {
        cout << "DEPARTURE TIME: 3:00       ARRIVAL TIME: 7:15       COST (per person): 19000";
        b[it] = "QUANTAS";
        it++;
        c = 19000 * people;
        cout << "   TOTAL COST OF TICKETS:" << c << endl;
    }

    else if (a == 2)
    {
        cout << "DEPARTURE TIME: 13:05       ARRIVAL TIME: 18:55       COST (per person): 23000";
        b[it] = "KOREAN AIR";
        it++;
        c = 23000 * people;
        cout << "   TOTAL COST OF TICKETS:" << c << endl;
    }

    else if (a == 3)
    {
        cout << "DEPARTURE TIME: 1:35       ARRIVAL TIME: 5:00       COST (per person): 30000";
        b[it] = "AIR ASIA";
        it++;
        c = 30000 * people;
        cout << "   TOTAL COST OF TICKETS:" << c << endl;
    }
    else if (a == 4)
    {
        cout << "DEPARTURE TIME: 3:20       ARRIVAL TIME: 8:45       COST (per person): 34000";
        b[it] = "QATAR AIRWAYS";
        it++;
        c = 34000 * people;
        cout << "   TOTAL COST OF TICKETS:" << c  << endl;
    }
    else
    {
        cout << "DEPARTURE TIME: 10:00      ARRIVAL TIME: 14:35       COST (per person): 40000";
        b[it] = "EMIRATES";
        it++;
        c = 40000 * people;
        cout << "   TOTAL COST OF TICKETS:" << c << endl;
    }
    hungry();
}
   
    //-------------------- FLIGHT DETAILS -------------------- 
    void maini()
    {
        cout << "\n";
        cout << "----------   TRAVELLING DETAILS!   ----------";
        cout << "\n";
        cout << "FROM:";
        cin >> bo;
        cout << "TO:";
        cin >> de;
        cout << "ENTER DATE:";
        cin >> date;
        cout << "ENTER MONTH:";
        cin >> month;
        cout << "ENTER YEAR:";
        cin >> year;
        cout << "\n";
        cout << "----------   PASSENGER DETAILS!   ----------";
        cout << "\n";
        cout << "ENTER NUMBER OF PASSENGERS:";
        cin >> people;

        for(int ii= 0 ;ii<people; ii++)
        {
            string name;
            int age;
            cout << "NAME OF PASSENGER "<< i+1 << ": ";
            cin >> name;
            namel[i] = name;
            i++;
            cout << "AGE OF PASSENGER "<< i << ": ";
            cin >> age;
            agel[ag] = age;
            ag++;
            while (true)
            {
                char gender;
                cout << "GENDER OF PASSENGER "<< i << "(M/F/O): ";
                cin >> gender;
                if (gender == 'M'||'F'||'O'||'m'||'f'||'o')
                {
                    genl[y] = gender;
                    y++;
                    break;
                }
                else
                {
                    cout << "INVALID ENTRY!:(";
                    cout << "PLEASE TRY AGAIN!:)";
                    continue;
                }
            }

            cout << "IDENTITY PROOF OF PASSENGER "<< i << ": " << endl;
            cout << "1.AADHAR CARD.\n";
            cout << "2.PAN CARD.\n";
            cout << "3.VOTER ID.\n";
            cout << "ENTER YOUR CHOICE:";
            cin >> k;
            switch(k)
            {
                case 1:                
                    cout << "ENTER AADHAR CARD NUMBER:";
                    cin >> s;

                    if(s.length() == 12)
                    {
                        cout<<"\n";
                    }
                    else
                    {
                        cout<<"INVALID! TRY AGAIN\n";
                    }
                    break;

                case 2:
                    cout << "ENTER YOUR PAN CARD NUMBER:";
                    cin >> s;

                    if(s.length() == 10)
                    {
                        cout<<"\n";
                    }
                    else
                    {
                        cout<<"INVALID! TRY AGAIN\n";
                    }
                    break;

                case 3:
                    cout << "ENTER YOUR VOTER ID NUMBER:";
                    cin >> s;

                    if(s.length() == 5)
                    {
                        cout<<"\n";
                    }
                    else
                    {
                        cout<<"INVALID! TRY AGAIN\n";
                    }
                    break;
                default:
                    cout << "WRONG CHOICE!:/\n";
            }
        } 
        cout << "\nBOOKING SUCCESSFULL!:)\n";

        if (j == 1)
        {
            flightsd();
        }
        else
        {
            flightsi();
        }
    }
    //---------------------FEEDBACK-----------------------------

    void feedback()
    {
        int aa;
        string bb;
        cout << "FEEDBACK IS HIGHLY APPRECIATED\n";
        cout << "DO YOU HAVE ANY FEEDBACK?\n1.YES\n2.NOPE\nENTER: ";
        cin >> aa;
        if (aa == 1)
        {
            cout << "FEEDBACK OVER HERE!==\n";
            cin >> bb;
            cout << "THANKS FOR YOUR FEEDBACK!!!\n";
            cout << "THANKS FOR CHOOSING JP BOOKINGS\n";
        }
        else
            cout << "OK!";
    }


    //-------------------- IN-FLIGHT MEALS SERVED  ----------------------

    void fooda()
    {
        int r;
        for(int i=0 ;i<people; i++)
        {
            cout << "\n";
            cout << "\n";
            cout << "MENU:";
            cout << "\n";
            cout << "\n";
            cout << "FOOD PREFERRED BY PASSENGER " << i+1 << ": " << endl;
            cout << "1.SNACKS.\n";
            cout << "2.SANDWICH.\n";
            cout << "3.CAFE.\n";
            cout << "4.BEVERAGES.\n";
            cout << "5.DESSERTS.\n";
            cout << "ENTER YOUR CHOICE(ONLY ONE): ";
            cin >> m;
            switch (m)
            {
                case 1:
                    cout << "\n";
                    cout << "SUB MENU:\n";
                    cout << "\n";
                    cout << "1.FRENCH FRIES, Rs 70\n";
                    cout << "2.GARLIC POPS, Rs 90\n";
                    cout << "3.MASALA MAGGIE, Rs 50\n";
                    cout << "ENTER YOUR CHOICE(ONLY ONE): ";
                    cin >> r;
                    if (r == 1)
                    {
                        f[food] = "FRENCH FRIES";
                        food++;
                        g[cost] = 70;
                        cost++;
                        break;
                    }
                    else if (r == 2)
                    {
                        f[food] = "GARLIC POPS";
                        food++;
                        g[cost] = 90;
                        cost++;
                        break;
                    }
                    else if (r == 3)
                    {
                        f[food] = "MASALA MAGGIE";
                        food++;                            
                        g[cost] = 50;
                        cost++;
                        break;
                    }
                    else
                    {
                        cout << "INVALID ENTRY!:/\n";
                        cout << "PLEASE TRY AGAIN!:)\n";
                        continue;
                    } 
                    break;
                case 2:
                    cout << "\n";
                    cout << "SUB MENU:\n";
                    cout << "\n";
                    cout << "1.VEG SANDWICH, Rs 60\n";
                    cout << "2.PLAIN CHEESE SANDWICH, Rs 70\n";
                    cout << "3.CHICKEN SANDWICH, Rs 80\n";
                    cout << "ENTER YOUR CHOICE(ONLY ONE): ";
                    cin >> r;
                    if (r == 1)
                    {
                        f[food] = "VEG SANDWICH";
                        food++;
                        g[cost] = 60;
                        cost++;
                        break;
                    }
                    else if (r == 2)
                    {
                        f[food] = "PLAIN CHEESE SANDWICH";
                        food++;
                        g[cost] = 70;
                        cost++;
                        break;
                    }
                    else if (r == 3)
                    {
                        f[food] = "CHICKEN SANDWICH";
                        food++;
                        g[cost] = 80;
                        cost++;
                        break;
                    }
                    else
                    {
                        cout << "INVALID ENTRY!:/\n";
                        cout << "PLEASE TRY AGAIN!:)\n";
                        continue;
                    }
                    break;
                case 3:
                    cout << "\n";
                    cout << "SUB MENU:\n";
                    cout << "\n";
                    cout << "1.HOT COFFEE, Rs 127\n";
                    cout << "2.CAPPUCCINO, Rs 90\n";
                    cout << "3.TEA, Rs 40\n";
                    cout << "ENTER YOUR CHOICE(ONLY ONE): ";
                    cin >> r;
                    if (r = 1)
                    {
                        f[food] = "HOT COFFEE";
                        food++;
                        g[cost] = 127;
                        cost++;
                        break;
                    }
                    else if (r == 2)
                    {
                        f[food] = "CAPPUCCINO";
                        food++;
                        g[cost] = 90;
                        cost++;
                        break;
                    }
                    else if (r == 3)
                    {
                        f[food] = "TEA";
                        food++;
                        g[cost] = 40;
                        cost++;
                        break;
                    }
                    else
                    {
                        cout << "INVALID ENTRY!:/\n";
                        cout << "PLEASE TRY AGAIN!:)\n";
                        continue;
                    }
                    break;
                case 4:
                    cout << "\n";
                    cout << "SUB MENU:\n";
                    cout << "\n";
                    cout << "1.FANTA, Rs 90\n";
                    cout << "2.SPRITE, Rs 81\n";
                    cout << "3.FROOTI, Rs 50\n";
                    cout << "ENTER YOUR CHOICE(ONLY ONE): ";
                    cin >> r;
                    if (r == 1)
                    {
                        f[food] = "FANTA";
                        food++;
                        g[cost] = 90;
                        cost++;
                        break;
                    }
                    else if (r == 2)
                    {
                        f[food] = "SPRITE";
                        food++;
                        g[cost] = 81;
                        cost++;
                        break;
                    }
                    else if (r == 3)
                    {
                        f[food] = "FROOTI";
                        food++;
                        g[cost] = 50;
                        cost++;
                        break;
                    }
                    else 
                    {
                        cout << "INVALID ENTRY!:/\n";
                        cout << "PLEASE TRY AGAIN!:)\n";
                        continue;
                    }
                    break;
                case 5:
                    cout << "\n";
                    cout << "SUB MENU:\n";
                    cout << "\n";
                    cout << "1.PASTRY, Rs 45\n";
                    cout << "2.PANCAKES, Rs 90\n";
                    cout << "3.WAFFLE, Rs 110\n";
                    cout << "ENTER YOUR CHOICE(ONLY ONE): ";
                    cin >> r;
                    if (r == 1)
                    {
                        f[food] = "PASTRY";
                        food++;
                        g[cost] = 45;
                        cost++;
                        break;
                    }
                    else if (r == 2)
                    {
                        f[food] = "PANCAKES";
                        food++;
                        g[cost] = 90;
                        cost++;
                        break;
                    }
                    else if (r == 3)
                    {
                        f[food] = "WAFFLE";
                        food++;
                        g[cost] = 110;
                        cost++;
                        break;
                    }
                    else 
                    {
                        cout << "INVALID ENTRY!:/\n";
                        cout << "PLEASE TRY AGAIN!:)\n";
                    }
                    break;

                default:
                    cout << "INVALID ENTRY!:/\n";
                    cout << "PLEASE TRY AGAIN!:)\n";  
                    break;              
            }
        }
        for(z=0; z<10; z++)
            sum = sum + g[z];
        cout << "ITEMS CHOOSED: ";
        for(items=0; items<10; items++)
            cout << f[items] << " ";
        cout << "\n";
        cout << "TOTAL AMOUNT:"<< sum << endl;
        cout << "THANK YOU FOR ORDERING!:)";
        bill();
    }  

    void hungry()
    {
        int o;
        cout << "\n";
        cout << "\n";
        cout << "WANNA HAVE SOMETHING?\n1.YES!\n2.NO,THANK YOU!\n";
        cout << "ENTER YOUR CHOICE:";
        cin >> o;
        if (o == 1)
        {
            fooda();
        }    
        else if (o == 2)
        {
            cout << "OKAY!:)";
            bill();
        }
        else
            cout << "INVALID ENTRY!:/";
    }
    //---------------------- FINAL FLIGHT DETAILS ---------------------------

    void bill()
    {
        cout << "\n";          
        cout << "----------   BILLING!   ----------";
        cout << "\n";
        cout << "....FLIGHT DETAILS....\n";
        int x=0;
        for( i=0 ;i<people; i++)
        {
            cout << "DETAILS OF PASSENGER " << i+1 << endl;
            cout << "NAME: " << namel[x];
            cout << "\n";
            cout << "AGE: " << agel[x];
            cout << "\n";
            cout << "GENDER: " << genl[x];
            cout << "\n";
            x++;
        }

        cout << "BOARDING: " << bo;
        cout << "\nDESTINATION: " << de;
        cout << "\nDATE: " << date << "|" << month << "|" << year;
        cout << "\nTICKETS: " << people;
        cout << "\nFLIGHT: " << b;
        for(flight=0; flight<10; flight++)
            cout << b[flight] << " ";
        cout << "\n";
        cout << "ITEMS CHOOSED: \n";
        for(items=0; items<10; items++)
            cout << f[items] << " ";
        cout << "\n";
        cout << "TICKET COST:Rs. " << c;
        cout << "\nFOOD COST:Rs. " << sum;
        cout << "\nTOTAL AMOUNT:Rs. " << sum+c;
        cout << "\nTHANK YOU FOR CHOOSING JP BOOKINGS!:)\n";
        pay();
    }
    //-------------------- PAYMENT --------------------------------

    void pay()
    {
        cout << "\n";
        cout << "----------   PAYMENT OPTIONS!   ----------";
        cout << "\n";
        string un,pas,bank[15];
        int p,ch;
        cout << "\n";
        cout << "PAYMENT OPTIONS:\n";
        cout << "\n";
        cout << "1.NET BANKING.\n";
        cout << "2.CREDIT/DEBIT CARD.\n";
        cout << "ENTER YOUR CHOICE:\n";
        cin >> o;
        cout << "\n";
        switch (o)
        {
            case 1:
                cout << "\n";
                cout << "BANKS:\n";
                cout << "\n";
                cout << "1.AXIS BANK.\n";
                cout << "2.HDFC BANK.\n";
                cout << "3.ICICI BANK.\n";
                cout << "4.STATE BANK OF INDIA.\n";
                cout << "\n";
                cout << "ENTER YOUR CHOICE:";
                cin >> ch;
                if (ch == 1)
                {
                    bank[i] = "AXIS BANK";
                    cout << "\n";
                }
                else if (ch == 2)
                {
                    bank[i] = "HDFC BANK";
                    cout << "\n";
                }
                else if (ch == 3)
                {
                    bank[i] = "ICICI BANK";
                    cout << "\n";
                }
                else if (ch == 4)
                {
                    bank[i] = "STATE BANK OF INDIA";
                    cout << "\n";
                }
                else
                {
                    cout << "CHOOSE A VALID BANK!";
                    cout << "\n";
                    break;
                }
                cout << "USERNAME:";
                cin >> un;
                cout << "PASSWORD:";
                cin >> pas;
                while (true)
                {
                    cout << "ENTER YOUR 6 DIGIT PIN:";
                    cin >> s;
                    if(s.length() == 6)
                    {
                        cout << "\n";
                        cout << "TRANSACTION SUCCESSFUL!\n";
                        break;
                    }
                    else
                    {
                        cout << "INVALID PIN!:(\n";
                        cout << "PLEASE TRY AGAIN!:)\n";
                        continue;
                    }
                }    
                time_t tt;
                struct tm * ti;
                time (&tt);
                ti = localtime(&tt);  
                cout << "CONFIRMATION MAIL AND BILL HAS BEEN SENT TO YOUR MAIL ID.\n";
                cout << "HOPE YOU ENJOY YOUR JOURNEY!\n";
                cout << "BILL SUMMARY:\n";     
                cout << "BANK: ";
                for(bnk=0; bnk<10; bnk++)
                    cout << bank[bnk] << " ";
                cout << "AMOUNT PAID: " << sum+c << "      TRANSACTION DETAILS: " << asctime(ti) << endl;
                break;

            case 2:
                while (true)
                {
                    cout << "\n";
                    cout << "ENTER CARD NUMBER:";
                    cin >> s;
                    if(s.length() == 16)
                    {
                        cout << "\n";
                        break;
                    }
                    else
                    {
                        cout << "INVALID CARD NUMBER!\n";
                        continue;
                    }
                }
                while (true)
                {
                    cout << "ENTER CVV CODE:";
                    cin >> s;
                    if(s.length() == 3)
                    {
                        cout << "\n";
                        break;
                    }
                    else 
                    {
                        cout << "INVALID CVV!\n";
                        continue;
                    }
                }
                time_t t;
                struct tm * tii;
                time (&t);
                tii = localtime(&t);
                cout << "\n";
                cout << "TRANSACTION SUCCESSFUL!\n";
                cout << "CONFIRMATION MAIL AND BILL HAS BEEN SENT TO YOUR MAIL ID.\n";
                cout << "HOPE YOU ENJOY YOUR JOURNEY!\n"; 
                cout << "BILL SUMMARY:\n";     
                cout << "AMOUNT PAID:" << sum+c << "      TRANSACTION DETAILS: " << asctime(tii) << endl;  
                break;
        }
        feedback();
    }
        
        
    //---------------------CODE EXECUTION WILL START FROM HERE-------------------------------------
int main()
{
    
    cout << "FLIGHT RESERVATION.\n";
    cout << "\n";
    cout << "1.DOMESTIC FLIGHTS.\n2.INTERNATIONAL FLIGHTS.\n";
    cout << "ENTER YOUR CHOICE: ";
    cin >> j;
        if (j == 1)
        {
            maini();
        }
        else if (j == 2)
        {
            maini();
        }
        else 
        {
            cout << "invalid choice!" << endl;
        }
}
//***********************************************************************END OF THE PROGRAM********************************************************************

