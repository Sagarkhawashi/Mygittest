
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int roll,e_c,h_t,M_ec,pmec,dm,prdm,op,total,per,iec,iht,imec,idm,iop,t1,t2,t3,t4,t5;
char name[30],clg[50],branch[20],GRA[2],G2[2],G3[2],G4[2],G5[2],G_1[2],g[2],maa[20],q,w,l,r,t,y,u,res[5];
char p[] = "pass";
char f[] = "fail";
void input();
void EC1();
void HT();
void MEC();
void mec();
void DM();
void Dm();
void OP();
void cal();
void show();
void result();

int main()
{
	
	char user1[20]="Sag",pass1[20]="Kha";
	char user2[20],pass2[20];
	W:
	printf("\nEnter the user name : ");
	scanf("%s",&user2);
	printf("\nEnter the passsword : ");
	scanf("%s",&pass2);
	
	if(strcmp(user1,user2)==0 && strcmp(pass1,pass2)==0)
	{
		input();
		EC1();
		HT();
		MEC();
		mec();
		DM();
		Dm();
		OP();
		cal();
		result();
		system("color F1");
		show();
	}
	else
	{
		printf("Invalid Password and useername ");
		goto W;
	}
	
	
	return 0;
}

void input()                                            //input data from user
{
	printf("Enter the name of student : ");
	fflush(stdin);
	gets(name);
	printf("Enter the mother name of student : ");
	fflush(stdin);
	gets(maa);
	printf("Enter the roll no. : ");
	scanf("%d",&roll);
	printf("Enter the branch name : ");
	fflush(stdin);
	gets(branch);
	printf("Enter the college name : "); 
	fflush(stdin);                          
	gets(clg);
	
	s1:
		printf("\nEnter marks of ENERGY CONVERSION-I : ");             //subject 1 marks
		scanf("%d",&e_c);
		if(e_c<0 || e_c>80)
		{
			printf("\nEnter marks between 0-80.");
			goto s1;
		}
		
	si1:
		printf("\nEnter the internal marks of ENERGY CONVERSION-I : ");
		scanf("%d",&iec);
		if(iec<0 || iec>20)
		{
			printf("\nEnter marks between 0-20.");
			goto s1;
		}
	s2:                     
		printf("\nEnter the marks of HEAT TRANSFER : ");               //subject 2 marks
		scanf("%d",&h_t);
		if(h_t>80)
		{
			printf("\nEnter the marks between 0-80");
			goto s2;
		}
		
	si2:                     
		printf("\nEnter the internal marks of HEAT TRANSFER : ");               //subject internal 2 marks
		scanf("%d",&iht);
		if(iht<0 || iht>20)
		{
			printf("\nEnter marks between 0-20.");
			goto si2;
		}
		
	s3:		
		printf("\nEnter the marks of MECHATRONICS : ");              //subject 3 marks
		scanf("%d",&M_ec);
		if(M_ec<0 || M_ec>80)
		{
			printf("\nEnter the marks between 0-80");
			goto s3;
		}
	si3:		
		printf("\nEnter the internal marks of MECHATRONICS : ");              //subject 3 marks
		scanf("%d",&imec);	
		if(imec<0 || imec>20)
		{
			printf("\nEnter marks between 0-20.");
			goto si3;
		}
		
	sp3:
		printf("\nEnter the practical marks of MECHATRONICS : ");         //pract 1
		scanf("%d",&pmec);
		if(pmec<0 || pmec>25)
		{
			printf("\nEnter the marks between the 0-25");
			goto sp3;
		}
		
		
	s4:
		printf("\nEnter the marks of DYNAMIC OF MACHINE : ");          //sub 4 mark
		scanf("%d",&dm);
		if(dm<0 || dm>80)
		{
			printf("\nEnter the marks between 0-80");
			goto s4;
		}
		
	si4:
		printf("\nEnter the internal marks of DYNAMIC OF MACHINE : ");          //sub 4 mark
		scanf("%d",&idm);
		if(idm<0 || idm>20)
		{
			printf("\nEnter marks between 0-20.");
			goto si4;
		}
			
	sp4:		
		printf("\nEnter the practical marks of DYNAMIC OF MACHINE : ");        //pract 2
		scanf("%d",&prdm);
		if(prdm<0 || prdm>25)
		{
			printf("\nEnter the marks between the 0-25");
			goto sp4;
		}
			
	s5:		
		printf("\nEnter the marks of OPERATIONS RESEARCH : ");                //sub 5 mark
		scanf("%d",&op);
		if(op<0 || op>80)
		{
			printf("\nEnter the marks between 0-80");
			goto s5;
		}	
	si5:		
		printf("\nEnter the internal marks of OPERATIONS RESEARCH : ");                //sub 5 mark
		scanf("%d",&iop);
		if(iop<0 || iop>20)
		{
			printf("\nEnter marks between 0-20.");
			goto si5;
		}
}

void EC1()
{
	if(e_c+iec<=100 && e_c+iec>90)
	{
		strcpy(GRA,"AA");
	}
	else if(e_c+iec<=90 && e_c+iec>80)
	{
		strcpy(GRA,"AB");
	}
	else if(e_c+iec<=80 && e_c+iec>70)
	{
		strcpy(GRA,"BB");
	}
	else if(e_c+iec<=70 && e_c+iec>60)
	{
		strcpy(GRA,"BC");
	}
	else if(e_c+iec<=60 && e_c+iec>50)
	{
		strcpy(GRA,"CD");
	}
	else if(e_c+iec<=50 && e_c+iec>=40)
	{
		strcpy(GRA,"DD");
	}
	else 
	{
		strcpy(GRA,"FF");
	}
	
	if(e_c+iec<40)
	{
		q='#';
	}
	else
		q=' ';
	
}
void HT()
{
	if(h_t+iht<=100 && h_t+iht>90)
	{
		strcpy(G_1,"AA");
	}
	
	else if(h_t+iht<=90 && h_t+iht>80)
	{
		strcpy(G_1,"AB");
	}
	else if(h_t+iht<=80 && h_t+iht>70)
	{
		strcpy(G_1,"BB");
	}
	else if(h_t+iht<=70 && h_t+iht>60)
	{
		strcpy(G_1,"BC");
	}
	else if(h_t+iht<=60 && h_t+iht>50)
	{
		strcpy(G_1,"CD");
	}
	else if(h_t+iht<=50 && h_t+iht>=40)
	{
		strcpy(G_1,"DD");
	}
	else 
	{
		strcpy(G_1,"FF");
	}
	
	if(h_t+iht<40)
	{
		w='#';
	}
	else{
		w=' ';
}
}
void MEC()
{
	
	if(M_ec+imec<=100 && M_ec+imec>90)
	{
		strcpy(g,"AA");
	}
	else if(M_ec+imec<=90 && M_ec+imec>80)
	{
		strcpy(g,"AB");
	}
	else if(M_ec+imec<=80 && M_ec+imec>70)
	{
		strcpy(g,"BB");
	}
	else if(M_ec+imec<=70 && M_ec+imec>60)
	{
		strcpy(g,"BC");
	}
	else if(M_ec+imec<=60 && M_ec+imec>50)
	{
		strcpy(g,"CD");
	}
	else if(M_ec+imec<=50 && M_ec+imec>=40)
	{
		strcpy(g,"DD");
	}
	else 
	{
		strcpy(g,"FF");
	}
	
	if(M_ec+imec<40)
		l='#';
	else
		l=' ';
}
void mec()
{
	if(pmec+25<=50 && pmec+25>45)
	{
		strcpy(G4,"AA");
	}
	else if(pmec+25<=45 && pmec+25>40)
	{
		strcpy(G4,"AB");
	}
	else if(pmec+25<=40 && pmec+25>35)
	{
		strcpy(G4,"BB");
	}
	else if(pmec+25<=35 && pmec+25>30)
	{
		strcpy(G4,"BC");
	}
	else if(pmec+25<=30 && pmec+25>=25)
	{
		strcpy(G4,"CC");
	}
	else 
	{
		strcpy(G4,"FF");
	}
	if(pmec+25<25)
		y='#';
	else
		y=' ';
}
void DM()
{
	if(dm+idm<=100 && dm+idm>90)                
	{
		strcpy(G2,"AA");
	}
	else if(dm+idm<=90 && dm+idm>80)
	{
		strcpy(G2,"AB");
	}
	else if(dm+idm<=80 && dm+idm>70)
	{
		strcpy(G2,"BB");
	}
	else if(dm+idm<=70 && dm+idm>60)
	{
		strcpy(G2,"BC");
	}
	else if(dm+idm<=60 && dm+idm>50)
	{
		strcpy(G2,"CD");
	}
	else if(dm+idm<=50 && dm+idm>=40)
	{
		strcpy(G2,"DD");
	}
	else 
	{
		strcpy(G2,"FF");
	}
	if(dm+idm<40)
		r='#';
	else 
		r=' ';
}
void Dm()
{
	if(prdm+25<=50 && prdm+25>45)
	{
		strcpy(G3,"AA");
	}
	else if(prdm+25<=45 && prdm+25>40)
	{
		strcpy(G3,"AB");
	}
	else if(prdm+25<=40 && prdm+25>35)
	{
		strcpy(G3,"BB");
	}
	else if(prdm+25<=35 && prdm+25>30)
	{
		strcpy(G3,"BC");
	}
	else if(prdm+25<=30 && prdm+25>=25)
	{
		strcpy(G3,"CC");
	}
	else 
	{
		strcpy(G3,"FF");
	}
	if(prdm+25<25)
		t='#';
	else
		t=' ';
}

void OP()
{
	if(op+iop<=100 && op+iop>90)                
	{
		strcpy(G5,"AA");
	}
	else if(op+iop<=90 && op+iop>80)
	{
		strcpy(G5,"AB");
	}
	else if(op+iop<=80 && op+iop>70)
	{
		strcpy(G5,"BB");
	}
	else if(op+iop<=70 && op+iop>60)
	{
		strcpy(G5,"BC");
	}
	else if(op+iop<=60 && op+iop>50)
	{
		strcpy(G5,"CD");
	}
	else if(op+iop<=50 && op+iop>=40)
	{
		strcpy(G5,"DD");
	}
	else 
	{
		strcpy(G5,"FF");
	}
	
	if(op+iop<40)
		u='#';
	else
		u=' ';
}

void cal()
{
    t1=e_c+iec;
    t2=h_t+iht;
    t3=M_ec+imec;
    t4=dm+idm;
    t5=op+iop;
	total=t1+t2+t3+t4+t5+pmec+25,prdm+25;
	per=(total/600)*100;
}

void result(){
 if(e_c+iec>40 && h_t+iht>40 && M_ec+imec>40 && pmec+25>25  && dm+idm>40 && prdm+25>25 && op+iop>40){
  
  strcpy(res,"pass");
 }
 else{
 
  strcpy(res,"fail");
}
}
void show()
{
	int i,j,s,a,b,c,d,e;
	for(i=0;i<=100;i++)
	{
		printf("-");
	}
	
	printf("\n\n|\tSIXTH SEMESTER EXAMINATION FOR DEGREE OF BACHELOR OF ENGINEERING(NEW), SUMMER 2022");
	printf("\n|\t\t\t\t[FOURTH YEAR DEGREE COURSE][CREDIT BASE SYSTEM]\t\t\t\t");
	printf("\n|Student name   : %s\t\t\t\tROLL NO.: %d\t\t\t\t\t",name,roll);
	printf("\n|Mother's name  : %s\t\t\t\tCenter No.:984\tP/L : 77/5\t\t\t",maa);
	printf("\n|Enrollment No. : 201972554985\t\t\t\tCatergory : RF\t\t\t\t\t");
	printf("\n|Branch Name    : %s\t\t\t\tMedium : English\t\t\t\t",branch);
	printf("\n|College Name   : %s\t\t\t\t\t\t\t\t\t\n",clg);
	for(j=0;j<=100;j++)
	{
		printf("-");
	}
	printf("\n| Sr.|\t\t\t\t   |   MARKS & CREDITS SCHEME\t|\tMARKS & GRADE AWARDED\t      |");
	printf("\n| No.|\t\tSUBJECT\t\t   |---- MAX ----|  MAX  |  MIN | TU/PU| TI/PI |TOTAL| GRADE | GP | CR|");
	printf("\n|    |\t\t\t\t   |TU/PU | TI/PI| MARKS | MARKS|      |       |MARKS|       |    |   |\n");
	for(s=0;s<=100;s++)
	{
		printf("-");
	}
	printf("\n| 01.|ENERGY CONVERSION-I\t   |  80  |  20  |  100  |  40  |  %d  |  %d  |  %d%c |  %s  | 10 | 09 |",e_c,iec,e_c+iec,q,GRA);
	printf("\n| 02.|HEAT TRANSFER      \t   |  80  |  20  |  100  |  40  |  %d  |  %d  |  %d%c |  %s   | 10 | 09 |",h_t,iht,h_t+iht,w,G_1);
	printf("\n| 03.|MECHATRONICS       \t   |  80  |  20  |  100  |  40  |  %d  |  %d  |  %d%c |  %s  | 10 | 09 |",M_ec,imec,M_ec+imec,l,g);
	printf("\n| 04.|MECHATRONICS(Practical)\t   |  25  |  25  |  50   |  25  |  %d  |  25  |  %d%c |  %s  | 10 | 09 |",pmec,pmec+25,y,G4);
	printf("\n| 05.|DYNAMIC OF MACHINE \t   |  80  |  20  |  100  |  40  |  %d  |  %d  |  %d%c |  %s  | 10 | 09 |",dm,idm,dm+idm,r,G2);
	printf("\n| 06.|DYNAMIC OF MACHINE(Practical)|  25  |  25  |  50   |  25  |  %d  |  25  |  %d%c |  %s  | 10 | 09 |",prdm,25+prdm,t,G3);
	printf("\n| 07.|OPERATIONS RESEARCH\t   |  80  |  20  |  100  |  40  |  %d  |  %d  |  %d%c |  %s  | 10 | 09 |\n",op,iop,op+iop,u,G5);
	for(a=0;a<=100;a++)
	{
		printf("-");
	}
	printf("\n");
	for(b=0;b<=100;b++)
	{
		printf(" ");
	}
	printf("\n");
	for(c=0;c<=100;c++)
	{
		printf("-");
	}
	printf("\n|   INCENTIVE |  GPV  |  TOTAL  |  SGPA  |  OUT OF  |  TOTAL MARKS  |  OUT OF  |  RESULT  |  REMARKS  |");
	printf("\n|             |       | CREDITS |        |          |    OBTAINED   |  MARKS   |          |           |\n");
	for(d=0;d<=100;d++)
	{
		printf("-");
	}
	printf("\n|             |       |        |         |   10.00  |       %d      |    700   |  %s    |          |\n",total,res);
	for(e=0;e<=100;e++)
	{
		printf("-");
	}
}
