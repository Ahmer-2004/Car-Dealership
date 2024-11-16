#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
char p;	double cnic,phno;                     
void Userchoice(char c);
void pur();
void UserInfo();
using namespace std; 
string Pr,NC;  //stroring car info which is purchased Pr for Price NC for Car name
string name,S1="HONDA-CIVIC",S2="TOYOTA-GRANDE",S3="HUYANDI-SONATA",PS1="9Million",PS2="8Million",PS3="10Million";  //sedan Info
string SU1="TOYOTA-FORTUNER",SU2="TOYOTA-REVO",SU3="KIA-SPORTAGE",PSU1="20Million",PSU2="15Million",PSU3="7Million"; //SUV Info
string C1="MERCEDES_BENZ",C2="BMW_M5",C3="AUDI_ETRON",PC1="50Million",PC2="45Million",PC3="40Million";       //comfort Info
int main()
{ fstream cat;
	int choice,ch2;char c;
	cout<<"Welcome To ABC Car Dealership:  "<<"\n\n";
a:	cout<<"BUY "<<": "<<"0"<<endl;
	cout<<"RENT "<<": "<<"1"<<endl;
	cin>>choice;
	if(choice==0)
	{  cout<<"Please Select Category :"<<endl;
		cat.open("cars.txt",ios::in);
		string car;
		while(cat>>car)
		{
			cout<<car<<endl;
		}
		cat.close();
		cin>>c;
	Userchoice(c);
	if(p=='a'||p=='b'||p=='c')
	{
	UserInfo();
	pur();
}
	}
	else if(choice==1)
	{
		cout<<"Rent";
	}
	else
	{
		cout<<"Wrong Selction"<<endl;
		cout<<"You Want to Select Again (press 1)"<<endl;
		cin>>ch2;
		if(ch2==1)
		goto a;
		else
		cout<<"Thankyou for Visiting ";
	}
}
void Userchoice(char c)
{ 
	switch(c)
			{
				case '0':
					{
					    cout<<"In Sedan We have Following Collection for Buying:\n";
					    cout<<"(a)"<<S1<<"----------------------------------"<<"Price="<<PS1<<endl;
						cout<<"(b)"<<S2<<"--------------------------------"<<"Price="<<PS2<<endl;
						cout<<"(c)"<<S3<<"-------------------------------"<<"Price="<<PS3<<endl;
				        cout<<"For Buying Click the Characters written before Name Of Car: "<<endl;
					cin>>p;
				switch(p)
				{
					case 'a':
						Pr=PS1;NC=S1;break;
						case 'b':
							Pr=PS2;NC=S2;break;
							case 'c':
								Pr=PS3;NC=S3;break;
				}
					
					}break;
					case '1':
						{
							cout<<"In SUV We have Following Collection for Buying:\n";
								cout<<"(a)"<<SU1<<"----------------------------"<<"Price="<<PSU1<<endl;
						        cout<<"(b)"<<SU2<<"--------------------------------"<<"Price="<<PSU2<<endl;
							    cout<<"(c)"<<SU3<<"-------------------------------"<<"Price="<<PSU3<<endl;
                                 cout<<"For Buying Click the Characters written before Name Of Car: "<<endl;
					 cin>>p;
					 	switch(p)
				{
					case 'a':
						Pr=PSU1;NC=SU1;break;
						case 'b':
							Pr=PSU2;NC=SU2;break;
							case 'c':
								Pr=PSU3;NC=SU3;break;
				}	} break;
						case '2':
							{
							cout<<"In COMFORT We have Following Collection for Buying:\n";
								cout<<"(a)"<<C1<<"----------------------------------"<<"Price="<<PC1<<endl;
						        cout<<"(b)"<<C2<<"-----------------------------------------"<<"Price="<<PC2<<endl;
							    cout<<"(c)"<<C3<<"-------------------------------------"<<"Price="<<PC3<<endl;
							    cout<<"For Buying Click the Characters written before Name Of Car: "<<endl;
						cin>>p;
							switch(p)
				{
					case 'a':
						Pr=PC1;NC=C1;break;
						case 'b':
							Pr=PC2;NC=C2;break;
							case 'c':
								Pr=PC3;NC=C3;break;
				}	}break;
							default:
								cout<<"Wrong Selection";
			}

	
}
void pur()
{        cout<<"\n\t\t                       ABC Dealership - Customer Invoice                  "<<endl;
     cout<<"\t\t	///////////////////////////////////////////////////////////"<<endl;
     cout<<"\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
     cout<<"\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<name<<" |"<<endl;
     cout<<"\t\t	| Customer CNIC:"<<"-----------------|"<<cnic<<" |"<<endl;
     cout<<"\t\t	| Customer Phone No:"<<"-------------|"<<phno<<" |"<<endl;
     cout<<"\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<NC<<" |"<<endl;
     cout<<"\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<"3818"<<" |"<<endl;
     cout<<"\t\t	| Price :"<<"------------------------|"<<setw(10)<<Pr<<" |"<<endl;
     cout<<"\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
     cout<<"\t\t	 ________________________________________________________"<<endl;
     cout<<"\n";
     cout<< "\t\t	 ________________________________________________________"<<endl;
     cout<< "\t\t	 # This is a computer generated invoce and it does not"<<endl;
     cout<<"\t\t	 require an authorised signture #"<<endl;
     cout<<" "<<endl;
     cout<<"\t\t	///////////////////////////////////////////////////////////"<<endl;
     cout<<"\t\t	You are advised to pay up the amount before due date."<<endl;
     cout<<"\t\t	Otherwise penelty fee will be applied"<<endl;
     cout<<"\t\t	///////////////////////////////////////////////////////////"<<endl;
  fstream invoice;
    invoice.open("Invoice.txt",ios::out);
    invoice<<"\n\t\t                       ABC Dealership - Customer Invoice                  "<<endl;
    invoice<<"\t\t	///////////////////////////////////////////////////////////"<<endl;
    invoice<<"\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
    invoice<<"\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<name<<" |"<<endl;
    invoice<<"\t\t	| Customer CNIC:"<<"-----------------|"<<cnic<<" |"<<endl;
    invoice<<"\t\t	| Customer Phone No:"<<"-------------|"<<phno<<" |"<<endl;
    invoice<<"\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<NC<<" |"<<endl;
    invoice<<"\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<"3818"<<" |"<<endl;
    invoice<<"\t\t	| Price :"<<"------------------------|"<<setw(10)<<Pr<<" |"<<endl;
    invoice<<"\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
    invoice<<"\t\t	 ________________________________________________________"<<endl;
    invoice<<"\n";
    invoice<< "\t\t	 ________________________________________________________"<<endl;
    invoice<< "\t\t	 # This is a computer generated invoce and it does not"<<endl;
    invoice<<"\t\t	 require an authorised signture #"<<endl;
    invoice<<" "<<endl;
    invoice<<"\t\t	///////////////////////////////////////////////////////////"<<endl;
    invoice<<"\t\t	You are advised to pay up the amount before due date."<<endl;
    invoice<<"\t\t	Otherwise penelty fee will be applied"<<endl;
    invoice<<"\t\t	///////////////////////////////////////////////////////////"<<endl;
    invoice.close();
	cout<<"Invoice is Generated Download It Thankyou For Trusting Our Dealership hope to see you again"<<endl;}
void UserInfo()
{

	cout<<"Enter Your Full Name:(no space) "<<endl;
	cin>>name;
	cout<<"Enter Your Valid CNIC:"<<endl;
	cin>>cnic;
	cout<<"Enter Your Phone Number: "<<endl;
	cin>>phno;
}
