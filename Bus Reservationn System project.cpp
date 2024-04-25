//BUS REGISTREATION

#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream>
#include<windows.h>

using namespace std;

class bus{
	private:
		char b_no[10],b_name[15],d_name[15];
		int b_seats;
	public:
		void menu();
		void new_bus();
		void view_bus();
		void single_view_bus();
		void all_view_bus();
		void update_bus();
		void del_bus();
		void rout_bus();
		void detail_bus();
		void booking();
		void renew_bus();
		void search_booking();
		void update_booking();
		void del_booking();
		void show_booking();
};

void bus::menu()
{
	u:
	system("cls");
	int choice;
	cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
	cout<<"\n1.ADD BUS RECORD";
	cout<<"\n2.VIEW BUS DETAIL";
	cout<<"\n3.UPDATE BUS DETAIL";
	cout<<"\n4.DELETE BUS DETAIL";
	cout<<"\n5.ROUT BUS DETAIL";
	cout<<"\n6.BUS SEATS DETAIL";
	cout<<"\n7.BOOKING RECORD";
	cout<<"\n8.SEAT RENEW";
	cout<<"\n9.SEARCH BOOKING RECORD";
	cout<<"\n10.UPDATE BOOKING RECORD";
	cout<<"\n11.DELETE BOOKING RECORD";
	cout<<"\n12.SHOW ALL BOOKING RECORD";
	cout<<"\n13.EXIT";
	cout<<"\n\nENTER YOUR CHOICE";
	cin>>choice;
	cout<<"Choice "<<choice;
	switch(choice)
	{
		case 1:
			new_bus();
			break;
		case 2:
			view_bus();
			break;
		case 3:
			update_bus();
			break;
		case 4:
			del_bus();
			break;
		case 5:
			rout_bus();
			break;
		case 6:
			detail_bus();
			break;
		case 7:
			booking();
			break;
		case 8:
			renew_bus();
			break;
		case 9:
			search_booking();
			break;
		case 10:
			update_booking();
			break;
		case 11:
			del_booking();
			break;
		case 12:
			show_booking();
			break;
		case 13:
			exit(0);
		default:
			cout<<"\nINVALID CHOICE";
			
	}
	getch();
	goto u;
}

void bus::new_bus()
{
	p:
	system("cls");
	fstream file;
	char t_no[10],tb_name[15],td_name[15];
	int tb_seats,found=0;
	cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
	cout<<"\nBus No. : ";
	fflush(stdin);
	gets(b_no);
	cout<<"\nBus name : ";
	fflush(stdin);
	gets(b_name);
	cout<<"\nTotal seats : ";
	cin>>b_seats;
	cout<<"\n Driver name : ";
	fflush(stdin);
	gets(d_name);
	file.open("bus.txt",ios::in);
	if(!file)
	{
		file.open("bus.txt",ios::app|ios::out);
		file<<b_no<<" "<<b_name<<" "<<b_seats<<" "<<d_name<<"\n";
		file.close();
	}
	else
	{
		file>>t_no>>tb_name>>tb_seats>>td_name;
		while(!file.eof())
		{
			if(strcmp(b_no,t_no)==0)
			{
				found++;
			}
			file>>t_no>>tb_name>>tb_seats>>td_name;
		}
		file.close();
		if(found==0)
		{
			file.open("bus.txt",ios::app|ios::out);
			file<<b_no<<" "<<b_name<<" "<<b_seats<<" "<<d_name<<"\n";
			file.close();
		}	
		else
		{
			cout<<"\n\n Duplicate record found...";
			getch();
			goto p;
		}
	}
	cout<<"\n\n New Bus Insertes Successfully...";
}
	void bus::view_bus()
	{
		p:
		system("cls");
		int choice;
		cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
		cout<<"\n\t1.Single Bus View";
		cout<<"\n\t2.All Buses View";
		cout<<"\n\t3.Go Back";
		cout<<"\n\nEnter Your Choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				single_view_bus();
				break;
			case 2:
				all_view_bus();
				break;
			case 3:
				menu();
			default:
				cout<<"\n\n Invalid choice";
		}
		getch();
		goto p;	
	}
	void bus::single_view_bus()
	{
		system("cls");
		char t_no[10];
		fstream file;
		int found=0;
		cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
		
		file.open("bus.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Openning Error...";
		}
		else
		{
			cout<<"\n Bus no. : ";
			fflush(stdin);
			gets(t_no);
			file>>b_no>>b_name>>b_seats>>d_name;
			while(!file.eof())
			{
				if(strcmp(b_no,t_no)==0)
				{
					cout<<" Bus No.\tBus Name\tNo.of Seats\tDriver Name";
					cout<<"\n "<<b_no<<"\t\t"<<b_name<<"\t\t"<<b_seats<<"\t\t"<<d_name;
					found++;
				}
			file>>b_no>>b_name>>b_seats>>d_name;
			}
			file.close();
			if(found==0)
			{
				cout<<"\n\tInvalid Bus Record...";
			}
			
		}
	}
	void bus::all_view_bus()
	{
		system("cls");
		fstream file;
		cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
		file.open("bus.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Openning Error...";
		}
		else
		{
			cout<<"\n Bus No.\tBus Name\tNo.of Seats\tDriver Name";
			file>>b_no>>b_name>>b_seats>>d_name;
			while(!file.eof())
			{
				cout<<"\n "<<b_no<<"\t\t"<<b_name<<"\t\t"<<b_seats<<"\t\t"<<d_name;
				file>>b_no>>b_name>>b_seats>>d_name;
			}	
			file.close();
		}
	}
	void bus::update_bus()
	{
		system("cls");
		fstream file,file1;
		char t_no[10],no[10],t_name[15],td_name[15];
		int t_seats,found=0;
		cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
		file.open("bus.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Openning Error...";
		}
		else
		{
			cout<<"\n\n Bus No. : ";
			cin>>t_no;
			file1.open("bus1.txt",ios::app|ios::out);
			file>>b_no>>b_name>>b_seats>>d_name;
			while(!file.eof())
			{
				if(strcmp(b_no,t_no)==0)
				{
					cout<<"\n\n New Bus No. : ";
					cin>>no;
					cout<<"\n\n Bus Name : ";
					cin>>t_name;
					cout<<"\n\n No.Of Seats : ";
					cin>>t_seats;
					cout<<"\n\n Driver Name : ";
					cin>>td_name;
					file1<<no<<" "<<t_name<<" "<<t_seats<<" "<<td_name<<"\n";
					cout<<"\n\n\t\tUpdate Bus Record Succesfully...";
					found++;
				}
				else
				{
					file1<<b_no<<" "<<b_name<<" "<<b_seats<<" "<<d_name<<"\n";
				}
			file>>b_no>>b_name>>b_seats>>d_name;
			}
			file.close();
			file1.close();
			remove("bus.txt");
			rename("bus1.txt","bus.txt");
			if(found==0)
			{
				cout<<"\n\n Bus No. is Invalid...";
			}
		}
	}
	void bus::del_bus()
	{
		system("cls");
		fstream file,file1;
		char t_no[10];
		int found=0;
		cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
		file.open("bus.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Openning Error...";
		}
		else
		{
			cout<<"\n\n Bus No. : ";
			cin>>t_no;
			file1.open("bus1.txt",ios::app|ios::out);
			file>>b_no>>b_name>>b_seats>>d_name;
			while(!file.eof())
			{
				if(strcmp(b_no,t_no)==0)
				{
					cout<<"\n\n\t\tDelete Bus Record Succesfully...";
					found++;
				}
				else
				{
					file1<<b_no<<" "<<b_name<<" "<<b_seats<<" "<<d_name<<"\n";
				}
			file>>b_no>>b_name>>b_seats>>d_name;
			}
			file.close();
			file1.close();
			remove("bus.txt");
			rename("bus1.txt","bus.txt");
			if(found==0)
			{
				cout<<"\n\n Bus No. is Invalid...";
			}
		}
	}
	void bus::rout_bus()
	{
		system("cls");
		int choice;
		cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
		cout<<"\n\n1. 1st ROUT DETAILS";	
		cout<<"\n\n2. 2st ROUT DETAILS";	
		cout<<"\n\n3. 3st ROUT DETAILS";	
		cout<<"\n\n ENTER YOUR CHOICE: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nBuses available from nagpur to pune ";
				cout<<"\n--------------------------------------------";
				cout<<"\n\n18:30 - 08:45\t\t\tFARE";
				cout<<"\nHarshkesawari\t\tRs.2,102";
				cout<<"\nAC Sleeper(2+1)\t\t30";
				cout<<"\n--------------------------------------------";
				cout<<"\n\n23:30 - 14:00\t\t\tFARE";
				cout<<"\nSSK Travels  \t\tRs.2,000";
				cout<<"\nExtra legroom\t\t30";
				cout<<"\n--------------------------------------------";
				cout<<"\n\n21:00 - 09:15\t\t\tFARE";
				cout<<"\nST Travels  \t\tRs.1,904";
				cout<<"\nAC Sleeper(2+1)\t\t30";
				break;
			case 2:
				cout<<"\nBuses available from nagpur to mumbai ";
				cout<<"\n\n19:00 - 12:00\t\t\tFARE";
				cout<<"\nKhawashi travels\t\tRs.2,102";
				cout<<"\nAC Sleeper(2+1)\t\t30";
				cout<<"\n--------------------------------------------";
				cout<<"\n\n16:00 - 09:00\t\t\tFARE";
				cout<<"\nVai Travels  \t\tRs.1,700";
				cout<<"\nExtra legroom\t\t30";
				cout<<"\n--------------------------------------------";
				cout<<"\n\n21:00 - 09:15\t\t\tFARE";
				cout<<"\nSSK Travels  \t\tRs.2,200";
				cout<<"\nAC Sleeper(2+1)\t\t30";
				break;
			case 3:
				cout<<"\nBuses available from nagpur to banglore ";
				cout<<"\n\n18:30 - 08:45\t\t\tFARE";
				cout<<"\nMusafir travels\t\tRs.2,102";
				cout<<"\nAC Sleeper(2+1)\t\t30";
				cout<<"\n--------------------------------------------";
				cout<<"\n\n23:30 - 14:00\t\t\tFARE";
				cout<<"\nSSK Travels  \t\tRs.2,000";
				cout<<"\nAC Sleeper(2+1)\t\t30";
				cout<<"\n--------------------------------------------";
				cout<<"\n\n21:00 - 09:15\t\t\tFARE";
				cout<<"\nYaha se Waha Travels  \tRs.1,904";
				cout<<"\nAC Sleeper(2+1)\t\t30";
				break;
			default:
				cout<<"\n\nInvalid choice...";
		}
	}
	void bus::detail_bus()
	{
		system("cls");
		cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
		fstream file,file1;
		char t_no[10],s_no[15],s_b_no[12];
		int count=0,found=0;
		file.open("bus.txt",ios::in);
		file1.open("seat.txt",ios::in);
		if(!file || file1)
		{
			cout<<"\n\n File Opening Error...";
		}
		else
		{
			cout<<"\n\n Bus No. : ";
			cin>>t_no;
			fflush(stdin);
			gets(t_no);
			file1>>s_b_no>>s_no;
			while(!file1.eof())
			{
				if(strcmp(b_no,s_b_no)==0)
				{
					count++;
				}
				file1>>s_b_no>>s_no;
			}
			file.close();
			file>>b_no>>b_name>>b_seats>>d_name;
			while(!file.eof())
			{
				if(strcmp(b_no,t_no)==0)
				{
					system("cls");
					cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
					cout<<"\n\n Total No. of Seats : "<<b_seats;
					cout<<"\n\n Reserved No. of Seats : "<<count;
					cout<<"\n\n Empty No. of Seats : "<<b_seats-count;
					found++;
				}
				file>>b_no>>b_name>>b_seats>>d_name;
			}
			file.close();
			if(found==0)
			{
				cout<<"\n\n Bus No. is Invalid";
			}
		}
	}
	void bus::booking()
	{
		g:
		system("cls");
		char t_no[10],x,s_b_no[10],passenger_name[20],from[10],to[10],phone[12];
		int found=0,s_no,seats,count=0,s_s_no,ss_no[25],i=0,amount,total_amount,r_amount;
		cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
		fstream file;
		file.open("bus.txt",ios::in);
		if(!file)
		{
			cout<<"\n\n File Openning Error...";
		}
		else
		{
			cout<<"\n\n BUS No. : ";
			fflush(stdin);
			gets(t_no);
			file.close();
			file.open("seat.txt",ios::in);
			if(file)
			{
				file>>s_b_no>>s_s_no;
				while(!file.eof())
				{
					if(strcmp(b_no,s_b_no)==0)
					{
						count++;
					}
					file>>s_b_no>>s_s_no;
				}
				
			}
			file.close();
			file.open("bus.txt",ios::in);
			file>>b_no>>b_name>>b_seats>>d_name;
			while(!file.eof())
			{
				if(strcmp(b_no,t_no)==0)
				{
					seats=b_seats;
					found++;
				}
				file>>b_no>>b_name>>b_seats>>d_name;	
			}
			file.close();
			if(seats-count==0)
			{
				cout<<"\n\n All Seats Is Already Reserved...";
			}
			else if(found==1)
			{
				do{
					h:
					cout<<"\n\n Seat No. : ";
					cin>>s_no;
					if(s_no>seats)
					{
						cout<<"\n\n Seat No. is Invalid...\nPlease Try Again...";
						goto h;
					}
					file.open("seat.txt",ios::in);
					if(!file)
					{
						file.open("seat.txt",ios::app|ios::out);
						file<<t_no<<" "<<s_no<<" "<<"\n";
						file.close();
					}
					else
					{
						file>>s_b_no>>s_s_no;
						while(!file.eof())
						{
							if(strcmp(s_b_no,t_no)==0 && s_no==s_s_no)
							{
								cout<<"\n\n Seat is Already Reserved...\nPlease Try Again...";
								goto h;
							}
							file>>s_b_no>>s_s_no;
						}
						file.close();
						file.open("seat.txt",ios::app|ios::out);
						file<<t_no<<" "<<s_no<<" "<<"\n";
						file.close();
					}
					ss_no[i]=s_no;
					i++;
					cout<<"\n\n Booking another Seat (Y,N) : ";
					cin>>x;
				}
				while(x=='Y' || x=='y');
					system("cls");
					cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
					cout<<"\n\n Passenger Name : ";
					fflush(stdin);
					gets(passenger_name);
					cout<<"\n\n Passenger Phone No. : ";
					fflush(stdin);
					gets(phone);
					cout<<"\n\n From : ";
					fflush(stdin);
					gets(from);
					cout<<"\n\n To : ";
					fflush(stdin);
					gets(to);
					cout<<"\n\n Single Seat Amount : ";
					cin>>amount;
					total_amount=amount*i;
					cout<<"\n\n Total Amount : "<<total_amount;
					cout<<"\n\n Recived Amount : ";
					cin>>r_amount;
					file.open("passenger.txt",ios::app|ios::in);
					file<<passenger_name<<" "<<t_no<<" "<<phone<<" "<<i<<" "<<total_amount<<"\n";
					file.close();
					system("cls");
					cout<<"\n\t\t_________BUS MANAGMENT SYSTEM_________";
					cout<<"\n\n\t\t****************************************";
					cout<<"\n\n\t\t_________BOOKING INFORMATION_________";
					cout<<"\n\n\t\t****************************************";
					cout<<"\n\n\t\tName :               "<<passenger_name;
					cout<<"\n\n\t\tFrom :               "<<from;
					cout<<"\n\n\t\tTo :                 "<<to;
					cout<<"\n\n\t\tTotal Seats :        "<<i;
					cout<<"\n\n\t\tReserved Seats :      ";
					for(int a=0;a<i;a++)
					{
							if(a!=0)
							{
								cout<<",";
							}
							cout<<ss_no[a];
					}
					cout<<"\n\n\t\tSingle Seat Amount : "<<amount;
					cout<<"\n\n\t\tTotal Seat Amount : "<<total_amount;
					cout<<"\n\n\t\tRecive Amount : "<<r_amount;
					cout<<"\n\n\t\tReturn Amount : "<<r_amount-total_amount;
					cout<<"\n\n\t\t****************************************";
					cout<<"\n\n\t\t  Thank You So Much For Booking";
					cout<<"\n\n\t\t****************************************";
			}
			else
			{
				cout<<"\n\n Bus No. is Invalid...";
				getch();
				goto g;
			}
		}
	}
	void bus::renew_bus()
	{
		system("cls");
		char x;
		fstream file;
		cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
		file.open("seat.txt",ios::in);
		if(!file)
		{
			cout<<"File Openning Error...";
		}
		else
		{
			cout<<"\n\n Do You Want To Renew All Seats(Y,N) : ";
			cin>>x;
			if(x=='Y' || x=='y')
			{
				remove("seat.txt");
				cout<<"\n\n\t\t All Seats are Empty...";
			}
			else
			{
				cout<<"\n\n\t\t All Seats Are Reserved ...";
			}
		}
	}
	void bus::search_booking()
	{
		system("cls");
		char name[15],t_name[15],no[10],phone[12];
		int t_seats,t_amo,found=0;
		fstream file;
		cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
		file.open("passenger.txt",ios::in);
		if(!file)
		{
			cout<<"File Openning Error...";
		}
		else
		{
			cout<<"\n\n Passenger name : ";
			fflush(stdin);
			gets(t_name);
			file>>name>>no>>phone>>t_seats>>t_amo;
			while(!file.eof())
			{
				if(strcmp(t_name,name)==0)
				{
					if(found==0)
					{
					system("cls");
					cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
					}
					cout<<"\n\nPassenger Name : "<<name;
					cout<<"\n\nBus No. : "<<no;
					cout<<"\n\nPhone No. : "<<phone;
					cout<<"\n\nReserved Seats : "<<t_seats;
					cout<<"\n\nTotal Amount : "<<t_amo;
					cout<<"\n\n---------------------------------";
					found++;
				}
				file>>name>>no>>phone>>t_seats>>t_amo;
			}
			file.close();
			if(found==0)
			{
				cout<<"\n\n Name is Invalid...";
			}
		}
	}
	void bus::update_booking()
	{
		system("cls");
		char name[15],t_name[15],no[10],del_no[5],phone[12],t_phone[12];
		int t_seats,t_amo,found=0,del_seats,i=0;
		fstream file,file1;
		cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
		file.open("passenger.txt",ios::in);
		if(!file)
		{
			cout<<"\n\nFile Openning Error...";
		}
		else
		{
			cout<<"\n\n Phone NO. : ";
			cin>>t_phone;
			file>>name>>no>>phone>>t_seats>>t_amo;
			while(!file.eof())
			{
				if(strcmp(t_phone,phone)==0)
				{
					file.close();
					file.open("passenger.txt",ios::in);
					file1.open("passenger1.txt",ios::app|ios::out);
					file>>name>>no>>phone>>t_seats>>t_amo;
					while(!file.eof())
					{
						if(strcmp(t_phone,phone)==0)
						{
							strcpy(del_no,no);
							del_seats=t_seats;
						}
						if(strcmp(t_phone,phone)!=0)
						{
							file1<<name<<" "<<no<<" "<<phone<<" "<<t_seats<<" "<<t_amo;
						}
						file>>name>>no>>phone>>t_seats>>t_amo;
					}
					file.close();
					file1.close();
					remove("passenger.txt");
					rename("passenger1.txt","passenger.txt");
					file.open("seat.txt",ios::in);
					file.open("seat1.txt",ios::app|ios::out);
					file>>no>>t_seats;
					while(!file.eof())
					{
						if(!(del_no==no && i< del_seats))
						{
							file1<<no<<" "<<t_seats<<"\n";
						}
						file>>no>>t_seats;
					}
					file.close();
					file1.close();
					remove("seat.txt");
					rename("seat1.txt","seat.txt");
					booking();
					found++;
					goto h;
				}
				file>>name>>no>>phone>>t_seats>>t_amo;
			}
			file.close();
			h:
			if(found==0)
			{
				cout<<"\n\n Phone no. is Invalid...";
			}
		}
	}
	void bus::del_booking()
	{
		system("cls");
		char name[15],t_name[15],no[10],del_no[4],phone[12],t_phone[12];
		int t_seats,t_amo,found=0,del_seats,i=0;
		fstream file,file1;
		cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
		file.open("passenger.txt",ios::in);
		if(!file)
		{
			cout<<"\n\nFile Openning Error...";
		}
		else
		{
			cout<<"\n\n Phone NO. : ";
			cin>>t_phone;
			file>>name>>no>>phone>>t_seats>>t_amo;
			while(!file.eof())
			{
				if(strcmp(t_phone,phone)==0)
				{
					file.close();
					file.open("passenger.txt",ios::in);
					file1.open("passenger1.txt",ios::app|ios::out);
					file>>name>>no>>phone>>t_seats>>t_amo;
					while(!file.eof())
					{
						if(strcmp(t_phone,phone)==0)
						{
							strcpy(del_no,no);
							del_seats=t_seats;
						}
						if(strcmp(t_phone,phone)!=0)
						{
							file1<<name<<" "<<no<<" "<<phone<<" "<<t_seats<<" "<<t_amo;
						}
						file>>name>>no>>phone>>t_seats>>t_amo;
					}
					file.close();
					file1.close();
					remove("passenger.txt");
					rename("passenger1.txt","passenger.txt");
					file.open("seat.txt",ios::in);
					file.open("seat1.txt",ios::app|ios::out);
					file>>no>>t_seats;
					while(!file.eof())
					{
						if(!(del_no==no && i< del_seats))
						{
							file1<<no<<" "<<t_seats<<"\n";
						}
						file>>no>>t_seats;
					}
					file.close();
					file1.close();
					remove("seat.txt");
					rename("seat1.txt","seat.txt");
					found++;
					goto h;
				}
				file>>name>>no>>phone>>t_seats>>t_amo;
			}
			file.close();
			h:
			if(found==0)
			{
				cout<<"\n\n Phone no. is Invalid...";
			}
		}
	}
	void bus::show_booking()
	{
		system("cls");
		char name[15],t_name[15],no[10],phone[12];
		int t_seats,t_amo,found=0;
		fstream file;
		cout<<"\n\n\t\t_________BUS MANAGMENT SYSTEM_________";
		file.open("passanger.txt",ios::in);
		if(!file)
		{
			cout<<"File Openning Error...";
		}
		else
		{
			file>>name>>no>>phone>>t_seats>>t_amo;
			while(!file.eof())
			{
				cout<<"\n\nPassenger Name : "<<name;
				cout<<"\n\nBus No. : "<<no;
				cout<<"\n\nPhone No. : "<<phone;
				cout<<"\n\nReserved Seats : "<<t_seats;
				cout<<"\n\nTotal Amount : "<<t_amo;
				cout<<"\n\n---------------------------------";
				found++;
				file>>name>>no>>phone>>t_seats>>t_amo;
			}
			file.close();
			if(found==0)
			{
				cout<<"\n\n No Any Booking Record Found...";
			}
		}
	}
main()
{
	bus b;
	int n;
	char pass1[5]="4444",pass2[3];
	char uname1[10]="saheb",uname2[10];
	cout<<"\n\n\t\t\t******Welcome to Saheb Travel Agency******";
	a:
	cout<<"\nEnter the admin username : ";
	cin>>uname2;
	cout<<"\nEnter the password : ";
	
	for(int i=0;i<4;i++)
	{
		pass2[i]=getch();
		cout<<"*";
	}
	if(strcmp(uname1,uname2)==0 && strcmp(pass1,pass2)==0)
	{
		cout<<"\n\n\t\t\t\tLoading";
		for(int i=0;i<5;i++)
		{
			Sleep(500);
			cout<<".";
		}
		b.menu();
	}
	else
	{
		cout<<"\nInvalid password";
	}
	return 0;
}

