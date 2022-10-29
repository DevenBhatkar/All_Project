include<iostream>
#include<string.h>
using namespace std;
class Hospital
{
public:
 string H_name;
 string location;
 int available_beds;
 float rating;
 string contact;
 string doctor_name;
 int price;
 void getHospitalData();
 void printhospitaldata();
 void searchHospitalbyName(string);
 void searchbyavailablebeds(int);
 void updateinfo();
};
class Patient : public Hospital
{
public:
 string P_name;
 int P_id;
 void getPatientData();
 void printpatientdata();
};
void Hospital::printhospitaldata()
{
 cout<<"Hospital's name:"<<H_name<<endl;
 cout<<"Location:"<<location<<endl;
 cout<<"Available beds:"<<available_beds<<endl;
 cout<<"Rating:"<<rating<<endl;
 cout<<"Contact:"<<contact<<endl;
 cout<<"Doctor's name :"<<doctor_name<<endl;
 cout<<"Price per bed:"<<price<<endl;
}
void Hospital::getHospitalData()
{
 cout<<"Enter the hospital name:"<<endl;
 cin>>H_name;
 cout<<"Enter the location:"<<endl;
 cin>>location;
 cout<<"Enter the rating:"<<endl;
 cin>>rating;
 cout<<"Enter contact:"<<endl;
 cin>>contact;
 cout<<"Enter doctor name:"<<endl;
 cin>>doctor_name;
 cout<<"enter price per bed"<<endl;
 cin>>price;
}
void Patient::printpatientdata()
{
 cout<<"patient Name:"<<P_name<<endl;
 cout<<"Patient's Id:"<<P_id<<endl;
}
void Patient::getPatientData()
{
 cout<<"Enter Patient's Name:"<<endl;
 cin>>P_name;
 cout<<"Enter Patient's Id:"<<endl;
 cin>>P_id;
}
void Hospital::searchHospitalbyName(string hosp_name)
{
 if(H_name==hosp_name)
 cout<<"match found"<<endl;
}
void Hospital::searchbyavailablebeds(int avail_bed)
{
 if(available_beds==avail_bed)
 cout<<"match found"<<endl;
}
void Hospital::updateinfo()
{
 cout<<"Enter the hospital name:"<<endl;
 cin>>H_name;
 cout<<"Enter the location:"<<endl;
 cin>>location;
 cout<<"Enter the rating:"<<endl;
 cin>>rating;
 cout<<"Enter contact:"<<endl;
 cin>>contact;
 cout<<"Enter doctor name:"<<endl;
 cin>>doctor_name;
 cout<<"enter price per bed"<<endl;
 cin>>price;
}
int main()
{
 Hospital h[50];
 Patient p[50];
 int choice, i=0;
 string hosp_name;
 int avail_bed,t;
 for(i=0;i<1;i++)
 {
 h[i].getHospitalData();
 }
 {
 for(i=0;i<1;i++)
 p[i].getPatientData();
 }
 while(1)
 {
 cout<<"1.print hospital's data"<<endl;
 cout<<"2.print patient's data"<<endl;
 cout<<"3.search hospital by name"<<endl;
 cout<<"4.search by available beds"<<endl;
 cout<<"5.update info"<<endl;
 cout<<"6.exit"<<endl;
 cout<<"enter choice"<<endl;
 cin>>choice;
 switch(choice)
 {
 case 1:
 for(i=0;i<1;i++)
 h[i].printhospitaldata();
 i++;
 break;
 case 2:
 for(i=0;i<1;i++)
 p[i].printpatientdata();
 break;
 case 3:
 cin>>hosp_name;
 for(t=0;t<i;t++)
 {
 h[t].searchHospitalbyName(hosp_name);
 h[t].printhospitaldata();
 }
 break;
 case 4:
 cin>>avail_bed;
 for(t=0;t<i;t++)
 {
 h[t].searchbyavailablebeds(avail_bed);
 h[t].printhospitaldata();
 }
 break;
 case 5:
 h[i].updateinfo();
 break;
 case 6:
 exit(0);
 break;
 }
 }
 return 0;
}
