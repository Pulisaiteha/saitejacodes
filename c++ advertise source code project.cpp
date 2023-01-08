
#include<iostream>
#include<fstream>
using namespace std;
class ABOUT
{
    public:
     void aboutus()
     {
        cout<<"Advertisement Management System is a online platform where advertisement agencies provide retailers and wholesalers to promote their products on their website";
 
    cout<<"and sell their products to customer as a subscriber .There is a membership for every subscriber and these subscriber products can reach more customers in their";
          cout<<"online website portal "<<endl;
     }
};
class HOMEPAGE
{
     protected:
	        string userName;
    string userPassword;
    string Name;
     string ID;
  public:
   void homepage()
   {
cout<<"ADVERTISEMENT MANAGEMENT SYSTEM"<<endl<<endl<<endl;
cout<<"Enter full name :";
cin>>Name;
cout<<endl<<endl<<"Enter user id :";
cin>>ID;
cout<<endl<<endl<<"Login To Your Account"<<endl<<endl<<endl;
cout<<"Username :";
cin>>userName;
cout<<endl<<endl<<"Password :";
cin>>userPassword;
cout<<"Submitted"<<endl;
  }
};
class SUBSCRIBER
{
protected:
int a;
int noofsubscriber;
string subscriberName;
string gender;
string email;
string DOB;
string address;
public:
void info_subscriber()
{
cout<<endl<<endl<<"enter number of subscribers to add"<<endl;
cin>>noofsubscriber;
for(a=1;a<=noofsubscriber;a++)
{
cout<<"Enter Subscriber Name :";
cin>>subscriberName;
cout<<endl<<endl<<"Gender (male/female) :";
cin>>gender;
cout<<endl<<endl<<"Email :";
cin>>email;
cout<<endl<<endl<<"Date Of Birth :";
cin>>DOB;
cout<<endl<<endl<<"Address :";
cin>>address;
 }
}
void subscriberReport()
{
cout<<endl<<endl<<"The Subscribers list :"<<endl<<endl;
cout<<"name:"<<subscriberName<<endl<<"Gender:"<<gender<<endl<<"email:"<<email<<endl<<"Dirth of Birth:"<<DOB<<endl;
}
};
class ADVERTISEMENT //in this block, subscriber add advertisement type and to promote his
//product
{
protected:
string subName;
string advType;
string fromDate;
string toDate;
string discription;
public:
void advertisement()
{
cout<<"Subscriber :";
cin>>subName;
cout<<endl<<endl<<"Select type of advetisement 'banner' ,'hoardings ''email', 'web':";
cin>>advType;
cout<<endl<<endl<<"From Date : ";
cin>>fromDate;
cout<<endl<<endl<<"To Date :";
cin>>toDate;
cout<<endl<<endl<<"Description about product : ";
cin>>discription;
}
};
class PRODUCTREPORT
{
protected:
string productName;
string type_of_adv;
double price;
public:
void productreport()
{
cout<<"ProductImage.txt"<<endl<<endl<<endl<<endl;
cout<<"Enter product Name :";
cin>>productName;
cout<<endl<<endl<<"advertisement type :";
cin>>type_of_adv;
cout<<endl<<endl<<"Price of product :";
cin>>price;
ofstream fout;
fout.open("database.txt");
fout<<endl<<"product name is:";
fout<<productName;
fout<<endl<<"type of product is";
fout<<type_of_adv;
fout<<endl<<"price of product";
fout<<price;
fout.close();
ifstream fin;
fin.open("database.txt");
fin>>productName;
fin>>type_of_adv;
fin>>price;
fin.close();
}
};
class CHANGEPASSWORD
{
protected:
string oldPassword;
string newPassword;
string retype_New_Password;
public:
void changepassword()
{
cout<<"Enter old password :";
cin>>oldPassword;
cout<<endl<<endl<<"Enter new password :";
cin>>newPassword;
cout<<endl<<endl<<"Retype New Password :";
cin>>retype_New_Password;
cout<<endl<<endl<<"Password Updated Succesfully"<<endl;
}
};
class LOGOUT
{ protected:
string select;
public:
void logout()
{
cout<<"Are you sure want to logout"<<endl<<endl<<"Select YES to logout and NO to not to logout"<<endl;
cin>>select;
if(select.compare("YES"))
{
cout<<"You are successfully loged out"<<endl;
}
else
{
cout<<"Get back and enjoy our services"<<endl;
}
}
};
class alldata:public HOMEPAGE,public ABOUT,public SUBSCRIBER,public ADVERTISEMENT,public PRODUCTREPORT,public CHANGEPASSWORD,public LOGOUT
{};
main()
{
alldata ams;
int choice;
int a;
cout<<"enter 1) for about Advertisment Management System "<<endl<<"enter 2) for HomePage "<<endl<<"enter 3) for information add subscriber"<<endl;
cout<<"enter 4) to add advertisement type by subscriber"<<"enter 5) for product report"<<endl<<"enter 6) to change password"<<endl;
cout<<"enter 7) to logout"<<endl;
for(a=1;a<=8;a++)
{
cout<<"Enter your choice"<<endl<<endl;
cin>>choice;
    switch (choice)
    {
     case 1:
      ams.aboutus();
        break;
          case 2:
            ams.homepage();
               break;
                 case 3:
                   ams.info_subscriber();
                     cout<<"List of Subscribers "<<endl<<endl;
                         ams.subscriberReport();
                            break;
                              case 4:
                                ams.advertisement();
                                  break;
                                    case 5:
                                     ams.productreport();
                                       break;
                                         case 6:
                                           ams.changepassword();
                                             break;
                                               case 7:
                                                 ams.logout();
                                                    break;
                                                       default:
                                                          cout<<"get bak to main menu"<<endl;
                                                             break;
      }
}
return 0;
}