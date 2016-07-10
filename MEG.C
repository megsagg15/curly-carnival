#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<string.h>


void patient();
void room();
void doctor();
void deleted();
void ward();
void medical();
void vth();
void hd();
void medicine();
void cmed();
void emed();
void read();
void pmed();
void omed();
void dward();
void gward();
void pspace();
void password();
void hospital();


    struct srms
    {
    char name[20];
    char gender[10];
    char nation[20];
    char bgroup[10];
    char address[40];
    int id;
    int age;
    };
void hospital()
{
int ch;
FILE *fp;
clrscr();

     if((fp=fopen("ht.c","ab"))==NULL)
     {
     puts("file does not exist");
     }

     gotoxy(22,3);
     cprintf("**SOBTI CONTINENTAL HEALTH CARE CENTRE**");
     gotoxy(10,4);
     printf("----------------------------------------------------------------");
     gotoxy(26,8);
     printf("1.VISIT TO HOSPITAL");
     gotoxy(26,10);
     printf("2.PATIENT FULL CHECKUP");
     gotoxy(26,12);
     printf("3.DELETE PATIENT ENTRY AFTER MEDICATION");
     gotoxy(26,14);
     printf("4.HOSPITAL DETAILS");
     gotoxy(26,16);
     printf("5.EXIT");
     gotoxy(26,20);
     printf("ENTER YOUR CHOICE :");
     scanf("%d",&ch);



     switch(ch)
     {
     case 1: vth();
	    break;

     case 2:patient();
	     break;

     case 3: deleted();
	    break;

     case 4: hd();
	    break;

     case 5: exit(0);



     }
     fclose(fp);
     getch();


}
void deleted()
{

FILE *fp;
clrscr();
if((fp=fopen("kiii.c","wb"))==NULL)
{
printf("NO ENTERIES FOUND\n");
printf("\nADMITTED PATIENT IS DISCHARGED");
}
gotoxy(28,10);
printf("NO ENTERIES FOUND");
gotoxy(24,12);
printf("ADMITTED PATIENT IS DISCHARGED");
fclose(fp);
getch();
hospital();
}

void vth()
{
FILE *fp;
int num;
if((fp=fopen("vh.c","ab"))==NULL)
{
puts("file does not exist");
}
clrscr();
gotoxy(18,4);
printf("***--VARIOUS MEDICAL DEPARTMENTS OF OUR HOSPITAL--***");
gotoxy(28,8);
printf("<1>ENT DEPARTMENT ");
gotoxy(28,10);
printf("<2>CARDIALOGIST DEPARTMENT ");
gotoxy(28,12);
printf("<3>PEDIATRIC DEPARTMENT ");
gotoxy(28,14);
printf("<1>ORTHOPEDIC DEPARTMENT ");
gotoxy(50,25);
printf("PRESS 5 TO CONTINUE: ");
scanf("%d",&num);
fprintf(fp,"%d",num);
if(num==5)
{
clrscr();
}
else
exit(0);
gotoxy(18,4);
printf("!!*---TEAM OF OUR SPECIALIST DOCTORS---*!!");
gotoxy(20,8);
printf("<1>.DR.SANGEETA KHANNA (ENT SPECIALIST)");
gotoxy(20,10);
printf("<2>.DR.RUPREL BHARADWAJ (CARDIALOGIST SPECIALIST)");
gotoxy(20,12);
printf("<3>.DR.ARCHIT ARORA  (PEDIATRIC SPECIALIST)");
gotoxy(20,14);
printf("<4>.DR.RAISH FATIMA  (ORTHOPEDIC SPECIALIST)");
gotoxy(50,25);
printf("PRESS 5 TO CONTINUE: ");
scanf("%d",&num);
if(num==5)
{
clrscr();
}
else
exit(0);
gotoxy(22,4);
printf("***---OUR ADMIT WARDS---***");
gotoxy(22,8);
printf("(1)BED TYPE AVAILABILITY");
gotoxy(26,10);
printf("<a>Single Bed");
gotoxy(26,11);
printf("<b>Double Bed");
gotoxy(10,13);
printf("-------------------------------------------------------------");
gotoxy(22,15);
printf("(2)WARD TYPES AVAILABLE");
gotoxy(26,17);
printf("<a>General Ward");
gotoxy(26,18);
printf("<b>Deluxe Ward");
gotoxy(10,20);
printf("--------------------------------------------------------------");
gotoxy(50,25);
printf("PRESS 5 TO CONTINUE: ");
scanf("%d",&num);
if(num==5)
{
clrscr();
}
else
exit(0);
gotoxy(16,6);
printf("<3>BEST FOOD & CATERING SERVICE AVAILABLE");
gotoxy(14,9);
printf("(Patient's choice if he/she wants to avail it)");
gotoxy(10,11);
printf("------------------------------------------------------------------");
gotoxy(11,14);
printf("<4>ROOM NO ALLOCATED ACCORDING TO PATIENT'S CHOICE IF AVAILABILE");
gotoxy(50,25);
printf("PRESS 5 TO CONTINUE: ");
scanf("%d",&num);
if(num==5)
{
clrscr();
}
else
exit(0);
gotoxy(18,4);
printf("**--VARIOUS ADMIT WARDS HERE--**");
gotoxy(20,8);
printf("<1>.MEDICAL UNIT");
gotoxy(20,10);
printf("<2>.CARDIAC UNIT");
gotoxy(20,12);
printf("<3>.PEDIATRIC UNIT");
gotoxy(20,14);
printf("<4>.SURGICAL UNIT");
gotoxy(20,16);
printf("<5>.INTENSIVE CARE UNIT");
gotoxy(50,24);
printf("PRESS 5 TO CONTINUE: ");
scanf("%d",&num);
if(num==5)
{
clrscr();
}
else
exit(0);
gotoxy(28,4);
printf("**MEDICINES STORE**");
gotoxy(10,10);
printf("All medicines are available at reliable rates prescribed by your doctor");
gotoxy(50,25);
printf("PRESS 5 TO CONTINUE: ");
scanf("%d",&num);
if(num==5)
{
clrscr();
}
else
exit(0);
gotoxy(10,6);
printf("WE HAVE WELL EXPERTISED TEAMS OF DOCTORS,EMPLOYEES,SERVICES FACILITIES & THE LATEST MEDICATION TECHNIQUES....");
gotoxy(20,10);
printf("We believe in 'SERVE PEOPLE,SERVE NATION'..");
gotoxy(50,25);
printf("PRESS 5 TO CONTINUE: ");
scanf("%d",&num);
if(num==5)
{
clrscr();
}
else
exit(0);
gotoxy(28,8);
printf("--**THANK YOU**--");
fclose(fp);
getch();
hospital();
}
void hd()
{
clrscr();
gotoxy(18,10);
printf("ADDRESS: SHEEL CHORAHA, CIVIL LINES BAREILLY, 243001");
gotoxy(26,12);
printf("CONTACT NO: 7417415314, 9458706938");
gotoxy(28,14);
printf("TIMINGS: 3pm -7pm");
getch();
hospital();
 }



void main()
{

     int num=5;
     clrscr();
     gotoxy(30,10);
     printf("WELCOME TO");
     gotoxy(24,12);
     printf("HOSPITAL MANAGEMENT SYSTEM");
     printf("\n********************************************************************************");
     gotoxy(50,25);
     printf("PRESS 5 TO CONTINUE: ");
     scanf("%d",&num);
     if(num==5)
     {
     clrscr();
     }
     password();
     getch();

}


void password()

{
FILE *fp;
char another[]="sobti";
int a,num=5;
if((fp=fopen("pd.c","ab"))==NULL)
{
puts("file  does not exist");
}
gotoxy(26,12);
printf("ENTER THE PASSWORD :");
scanf("%s",another);
a=strcmp(another,"sobti");
while(a!=0)
{

clrscr();
gotoxy(30,8);
printf("BAD PASSWORD");
gotoxy(26,12);
printf("RENTER THE PASSWORD :");
scanf("%s",another);
a=strcmp(another,"sobti");
if(a==0)
{
gotoxy(28,23);
printf("REATTEMPT SUCCESSFULL");
}
}
gotoxy(28,25);
printf("!!!LOGIN SUCCESSFULL!!!");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPRESS 5 TO CONTINUE: ");
scanf("%d",&num);
if(num==5)
{
clrscr();
}
else
exit(0);
fclose(fp);
hospital();
getch();
}

void patient()
{
//int i,n=0;
FILE *fp;
char another='Y';
struct srms p;
clrscr();
fp=fopen("pt.c","wb");
if(fp==NULL)
{
printf("can't create file");
getch();
exit(1);
}

while(another=='Y')
{

printf("\n\n\n\tPATIENT REGISTRATION NO: ");
scanf("%d",&p.id);
printf("\n\tPATIENT NAME: ");
scanf("%s",p.name);
flushall();
printf("\n\tPATIENT GENDER(M/F): ");
scanf("%s",p.gender);
printf("\n\tPATIENT AGE: ");
scanf("%d",&p.age);
printf("\n\tPATIENT NATIONALITY: ");
scanf("%s",p.nation);
printf("\n\tPATIENT BLOOD GROUP: ");
scanf("%s",p.bgroup);
printf("\n\tPATIENT ADDRESS: ");
scanf("%s",p.address);
printf("\n*********************************************************\n");
fwrite(&p,sizeof(p),1,fp);
printf("\t\t\t\t\t\t\t\t\n\n\n\nWANT TO ENTER ANOTHER RECORD?(Y/N)");
fflush(stdin);
another=getch();
}
fclose(fp);
medical();
getch();
}
void read()
{
int num;
FILE *fp;
struct srms p;
fp=fopen("pt.c","rb");
if(fp==NULL)
{
printf("can't read file");
getch();
exit(1);
}
gotoxy(26,4);
printf("--PATIENT RECORD/DETAILS--");
gotoxy(26,5);
printf("(Patient Medical Slip)");
gotoxy(7,7);
printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
while(fread(&p,sizeof(p),1,fp)==1)
{
gotoxy(26,10);
printf("PATIENT REGISTRATION NO: %d",p.id);
gotoxy(26,12);
printf("PATIENT NAME: %s",p.name);
gotoxy(26,14);
printf("PATIENT GENDER(M/F): %s",p.gender);
gotoxy(26,16);
printf("PATIENT AGE: %d",p.age);
gotoxy(26,18);
printf("PATIENT NATIONALITY: %s",p.nation);
gotoxy(26,20);
printf("PATIENT BLOOD GROUP: %s",p.bgroup);
gotoxy(26,22);
printf("PATIENT ADDRESS: %s",p.address);


}
fclose(fp);
getch();
}
void doctor()
{
FILE *fp;
int cha;
int num;
clrscr();
if((fp=fopen("dr.c","w"))==NULL)
{
puts("file does not exist");
}
gotoxy(20,4);
printf("***--VARIOUS MEDICAAL DEPARTMENT--***");
gotoxy(23,6);
printf("*!!!VISIT TO YOUR DOCTOR*!!!");
gotoxy(20,10);
printf("<1>.DR.SANGEETA KHANNA(ENT SPECIALIST)");
gotoxy(20,12);
printf("<2>.DR.RUPREL BHARADWAJ(CARDIALOGIST SPECIALIST)");
gotoxy(20,14);
printf("<3>.DR.ARCHIT ARORA(PEDIATRIC SPECIALIST)");
gotoxy(20,16);
printf("<4>.DR.RAISH FATIMA(ORTHOPEDIC SPECIALIST)");
gotoxy(20,18);
printf("<5>.EXIT");
gotoxy(22,21);
   printf("ENTER YOUR OPD: ");
   scanf("%d",&cha);
   gotoxy(50,25);
    fprintf(fp,"%d",cha);
     printf("PRESS 5 TO CONTINUE: ");
     scanf("%d",&num);
     if(num==5)
     {
     clrscr();
     }
     else
     exit(0);

   switch(cha)
   {

     case 1:emed();
	    break;

     case 2:cmed();
	    break;

     case 3 :pmed();
	    break;

     case 4:omed();
	    break;

     case 5: exit(0);


     }


fclose(fp);
getch();
clrscr();
}
void emed()
{
FILE *fp;
int ch,num;
if((fp=fopen("disease.txt","w"))==NULL)
{
printf("file does not exit");
}
gotoxy(23,4);
printf("***--YOU ARE IN ENT DEPARTMENT--***");
gotoxy(26,6);
printf("(Patient Treatment For):");
gotoxy(27,9);
printf("<1>.CONJUCTIVITIS");
gotoxy(27,11);
printf("<2>.GLAUCOMA");
gotoxy(27,13);
printf("<3>.CATARACT");
gotoxy(27,15);
printf("<4>.NONE");
gotoxy(20,19);
printf("ENTER THE DISEASE YOU ARE SUFFERING FROM: ");
scanf("%d",&ch);
 fprintf(fp,"%d",ch);
gotoxy(50,25);
     printf("PRESS 5 TO CONTINUE: ");
     scanf("%d",&num);
     if(num==5)
     {
     clrscr();
     }
     else
     exit(0);

     switch(ch)
     {


     case 1: gotoxy(26,10);
	     printf("PRESCRIBED MEDDICINES ARE:");
	     gotoxy(26,14);
	     printf("<1> Ciprfloxacin Opthalmic");
	     gotoxy(26,16);
	     printf("<2> Carbenicillin");
	     break;

     case 2: gotoxy(26,10);
	     printf("PRESCRIBED MEDDICINES ARE:");
	     gotoxy(26,14);
	     printf("<1> Beta-Adrenergic");
	     gotoxy(26,16);
	     printf("<2> Tilmolal");
	     break;

     case 3: gotoxy(26,10);
	     printf("PRESCRIBED MEDDICINES ARE:");
	     gotoxy(26,14);
	     printf("<1> Diclofenac Sodium");
	     gotoxy(26,16);
	     printf("<2> Lanosteral");
	     break;

     case 4:exit(0);



}


fclose(fp);
getch();
}



void cmed()
{
FILE *fp;
int ch,num;
clrscr();
if((fp=fopen("disease.txt","w"))==NULL)
{
puts("file does not exist");
}
gotoxy(23,4);
printf("***YOU ARE IN CARDIALOGIST DEPARTMENT***");
gotoxy(26,6);
printf("(Patient Treatment For):");
gotoxy(27,9);
printf("<1>.ANGINA");
gotoxy(27,11);
printf("<2>.CHEST PAIN");
gotoxy(27,13);
printf("<3>.CLAUDICATION");
gotoxy(27,15);
printf("<4>.NONE");
gotoxy(20,19);
printf("ENTER THE DISEASE YOU ARE SUFFERING FROM:");
scanf("%d",&ch);
fprintf(fp,"%d",ch +3);
gotoxy(50,25);
     printf("PRESS 5 TO CONTINUE: ");
     scanf("%d",&num);
     if(num==5)
     {
     clrscr();
     }
     else
     exit(0);


     switch(ch)
     {

     case 1: gotoxy(26,10);
	     printf("PRESCRIBED MEDDICINES ARE:");
	     gotoxy(28,14);
	     printf("Glyceyl Trinitrate");
	    break;

     case 2:gotoxy(26,10);
	    printf("PRESCRIBED MEDDICINES ARE:");
	    gotoxy(32,14);
	    printf("Aspirin");
	    break;

     case 3:gotoxy(26,10);
	    printf("PRESCRIBED MEDDICINES ARE:");
	    gotoxy(26,14);
	    printf("<1> Clopidogrel");
	    gotoxy(26,16);
	    printf("<2> Ticlopidine");
	    break;

     case 4: exit(0);


     }

     fclose(fp);
     getch();
}

void pmed()
{
FILE *fp;
int ch,num;
clrscr();
if((fp=fopen("disease.txt","w"))==NULL)
{
puts("file does not exist");
}
gotoxy(23,4);
printf("***--YOU ARE IN PEDIATRIC DEPARTMENT--***");
gotoxy(26,6);
printf("(Patient Treatment For):");
gotoxy(27,9);
printf("<1>.STREP THROAT");
gotoxy(27,11);
printf("<2>.INFLUENZA");
gotoxy(27,13);
printf("<3>.FEVER");
gotoxy(27,15);
printf("<4>.NONE");
gotoxy(20,19);
printf("ENTER THE DISEASE YOU ARE SUFFERING FROM: ");
scanf("%d",&ch);
fprintf(fp,"%d",ch+6);
     gotoxy(50,25);
     printf("PRESS 5 TO CONTINUE: ");
     scanf("%d",&num);
     if(num==5)
     {
     clrscr();
     }
     else
     exit(0);

     switch(ch)
     {

     case 1:
     gotoxy(26,10);
	     printf("PRESCRIBED MEDDICINES ARE:");
	     gotoxy(26,14);
	     printf("<1> Amoxicillin");
	     gotoxy(26,16);
	     printf("<2> Penicillin");
	     break;

     case 2: gotoxy(26,10);
	     printf("PRESCRIBED MEDDICINES ARE:");
	     gotoxy(26,14);
	     printf("<1> Zanamivir");
	     gotoxy(26,16);
	     printf("<2> Oseltamivir");
	     break;

     case 3: gotoxy(26,10);
	     printf("PRESCRIBED MEDDICINES ARE:");
	     gotoxy(29,14);
	     printf("Paracetamol");
	     break;

     case 4: exit(0);


     }
     fclose(fp);
     getch();
}
    void omed()
{
FILE *fp;
int num,ch;
clrscr();
if((fp=fopen("disease.txt","w"))==NULL)
{
puts("file does not exit");
}
gotoxy(23,4);
printf("***--YOU ARE IN ORTHOPEDIC DEPARTMENT--***");
gotoxy(26,6);
printf("(Patient Treatment For):");
gotoxy(27,9);
printf("<1>.ARTHRITIS");
gotoxy(27,11);
printf("<2>.LOW BACK PAIN");
gotoxy(27,13);
printf("<3>.KNEE PAIN");
gotoxy(27,15);
printf("<4>.NONE");
gotoxy(20,19);
printf("ENTER THE DISEASE YOU ARE SUFFERING FROM: ");
scanf("%d",&ch);
fprintf(fp,"%d",ch+9);
     gotoxy(50,25);
     printf("PRESS 5 TO CONTINUE: ");
     scanf("%d",&num);
     if(num==5)
     {
     clrscr();
     }
     else
     exit(0);


     switch(ch)
     {

     case 1: gotoxy(26,10);
	     printf("PRESCRIBED MEDDICINES ARE:");
	     gotoxy(30,14);
	     printf("Ibuprofen");
	    break;

     case 2: gotoxy(26,10);
	     printf("PRESCRIBED MEDDICINES ARE:");
	     gotoxy(30,14);
	     printf("Tylenol");
	    break;

     case 3:gotoxy(26,10);
	    printf("PRESCRIBED MEDDICINES ARE:");
	    gotoxy(30,14);
	     printf("Naproxen");
	    break;

     case 4: exit(0);



     }

     fclose(fp);
     getch();

 }

void medicine()
{

int ch,num,r,choice;
int a=3,a1=6,a2=9,a3=7,a4=5,a5=8,a6=12,a7=20,a8=5,a9=8,a10=6,a11=5;
int b,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11;
int c,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11;
int d=10,d1=8,d2=1,d5=10,d6=12,d7=14;
int e,e1,e2,e5,e6,e7;
int f,f1,f2,f5,f6,f7;
int g,g1,g2,g5,g6,g7;
FILE *fp,*fp1,*fp2;
if((fp=fopen("md.c","ab"))==NULL)
{
puts("file does not exist");
}
if((fp2=fopen("disease.txt","r"))==NULL)
{
puts("file does not exist");
}
fscanf(fp2,"%d",&choice);
bill_home:
{
gotoxy(21,5);
printf("++---SOBTI CONTINENTAL MEDICINES STORE---++");
gotoxy(26,8);
printf("****AVAILABLE MEDICINES****");
gotoxy(8,10);
printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
gotoxy(26,12);
printf("**MEDICINES FOR (ENT) **:");
gotoxy(26,13);
printf("<1>Conjuctivitis");
gotoxy(26,14);
printf("<2>Glaucoma");
gotoxy(26,15);
printf("<3>Cataract");
gotoxy(10,16);
printf("---------------------------------------------------------------");
gotoxy(26,18);
printf("**MEDICINES FOR (CARDIALOGIST)**:");
gotoxy(26,20);
printf("<4>Angina");
gotoxy(26,21);
printf("<5>Chest Pain");
gotoxy(26,22);
printf("<6>Claudication");
gotoxy(10,16);
printf("----------------------------------------------------------------");
gotoxy(50,25);
     printf("PRESS 5 TO CONTINUE: ");
     scanf("%d",&num);
     if(num==5)
     {
     clrscr();
     }
     else
     exit(0);
gotoxy(26,6);
printf("**MEDICINES FOR (PEDIATRIC)**:");
gotoxy(26,9);
printf("<7>Strep Throat");
gotoxy(26,10);
printf("<8>Influenza");
gotoxy(26,11);
printf("<9>Fever");
gotoxy(10,13);
printf("-----------------------------------------------------------------");
gotoxy(26,15);
printf("**MEDICINES FOR (ORTHOPEDIC)**:");
gotoxy(26,17);
printf("<10>Arthritis");
gotoxy(26,18);
printf("<11>Low Back Pain");
gotoxy(26,19);
printf("<12>Knee Pain");

gotoxy(20,23);
printf("ENTER THE DISEASE YOU HAD CHECK UP FOR: ");
scanf("%d",&ch);
}
if(ch==choice)
{
gotoxy(24,24);
printf("---**VALID DISEASE ENTERED**---");
}
else
{
clrscr();
printf("RENTER");
goto bill_home;
}


gotoxy(50,25);
     printf("PRESS 5 TO CONTINUE: ");
     scanf("%d",&num);
     if(num==5)
     {
     clrscr();
     }
     else
     exit(0);
     gotoxy(26,5);
     printf("**--PURCHASING OF MEDICINES--**");
     gotoxy(30,6);
     printf("(BILLING DETAILS)");
     gotoxy(10,8);
     printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");

    switch(ch)

    {
     case 1:gotoxy(30,9);
	    printf("PRESCRIBED MEDICINES ARE:");
	    gotoxy(10,10);
	    printf("________________________________________________________________");
	    gotoxy(30,12);
	    printf("<1>Ciprofloxacin Opthalmic");
	    gotoxy(22,13);
	    printf("Cost of each tablet: Rs %d",a);
	    gotoxy(22,14);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&b);
	    c= a*b;
	    gotoxy(30,16);
	    printf("TOTAL COST: Rs %d",c);
	    gotoxy(30,18);
	    printf("<2>Carbenicillin");
	    gotoxy(22,19);
	    printf("Cost of each tablet: Rs %d",d);
	    gotoxy(22,20);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&e);
	    f=d*e;
	    gotoxy(30,22);
	    printf("TOTAL COST: Rs %d",f);
	    g=f+c;
	    gotoxy(10,23);
	    printf("****************************************************************");
	    gotoxy(22,24);
	    printf("++++TOTAL AMOUNT CHARGED++++: Rs %d",g);
	    break;

     case 2:gotoxy(30,9);
	    printf("PRESCRIBED MEDICINES ARE: ");
	    gotoxy(10,10);
	    printf("_________________________________________________________________");
	    gotoxy(30,12);
	    printf("<1>Beta-Adrenergic");
	    gotoxy(20,13);
	    printf("Cost of each tablet Rs %d",a1);
	    gotoxy(20,14);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&b1);
	    c1= a1*b1;
	    gotoxy(30,16);
	    printf("TOTAL COST Rs %d",c1);
	    gotoxy(30,18);
	    printf("<2>Tilmol");
	    gotoxy(20,19);
	    printf("Cost of each tablet Rs %d",d1);
	    gotoxy(20,20);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&e1);
	    f1=d1*e1;
	    gotoxy(30,22);
	    printf("TOTAL COST Rs %d",f1);
	    g1=f1+c1;
	    gotoxy(10,23);
	    printf("******************************************************************");
	    gotoxy(22,24);
	    printf("++++TOTAL AMOUNT CHARGED++++: Rs %d",g1);
	    break;

     case 3:gotoxy(30,9);
	    printf("PRESCRIBED MEDICINES ARE: ");
	    gotoxy(10,10);
	    printf("___________________________________________________________________");
	    gotoxy(30,12);
	    printf("<1>Diclofenac Sodium");
	    gotoxy(20,13);
	    printf("Cost of each tablet Rs %d",a2);
	    gotoxy(20,14);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&b2);
	    c2= a2*b2;
	    gotoxy(30,16);
	    printf("TOTAL COST Rs %d",c2);
	    gotoxy(30,18);
	    printf("<2>Lanosterol");
	    gotoxy(20,19);
	    printf("Cost of each tablet Rs %d",d2);
	    gotoxy(20,20);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&e2);
	    f2=d2*e2;
	    gotoxy(30,22);
	    printf("TOTAL COST Rs %d\n",f2);
	    g2=f2+c2;
	    gotoxy(10,23);
	    printf("*******************************************************************");
	    gotoxy(22,24);
	    printf("++++TOTAL AMOUNT CHARGED++++: Rs %d",g2);
	    break;


    case 4: gotoxy(30,9);
	    printf("PRESCRIBED MEDICINES ARE: ");
	    gotoxy(10,10);
	    printf("____________________________________________________________________");
	    gotoxy(30,12);
	    printf("Glyceryl Nitrate");
	    gotoxy(20,14);
	    printf("Cost of each tablet Rs %d",a3);
	    gotoxy(20,15);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&b3);
	    c3= a3*b3;
	    gotoxy(10,17);
	    printf("*********************************************************************");
	    gotoxy(22,18);
	    printf("++++TOTAL AMOUNT CHARGED++++:Rs %d",c3);
	    break;

    case 5: gotoxy(30,9);
	    printf("PRESCRIBED MEDICINES ARE: ");
	    gotoxy(10,10);
	    printf("_____________________________________________________________________");
	    gotoxy(30,12);
	    printf("Aspirin");
	    gotoxy(20,14);
	    printf("Cost of each tablet Rs %d",a4);
	    gotoxy(20,15);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&b4);
	    c4= a4*b4;
	    gotoxy(10,17);
	    printf("**********************************************************************");
	    gotoxy(22,18);
	    printf("++++TOTAL AMOUNT CHARGED++++ :Rs %d",c4);
	    break;


   case 6:  gotoxy(30,9);
	    printf("PRESCRIBED MEDICINES ARE: ");
	    gotoxy(10,10);
	    printf("______________________________________________________________________");
	    gotoxy(30,12);
	    printf("<1>Clopidogrel");
	    gotoxy(20,13);
	    printf("Cost of each tablet Rs %d",a5);
	    gotoxy(20,14);
	    printf("Dose of tablets prescribed by your doctor:");
	    scanf("%d",&b5);
	    c5= a5*b5;
	    gotoxy(30,16);
	    printf("TOTAL COST Rs %d",c5);
	    gotoxy(30,18);
	    printf("<2>Ticlopidine");
	    gotoxy(20,19);
	    printf("Cost of each tablet Rs %d",d5);
	    gotoxy(20,20);
	    printf("Dose of tablets prescribed by your doctor:");
	    scanf("%d",&e5);
	    f5=d5*e5;
	    gotoxy(30,22);
	    printf("TOTAL COST Rs %d\n",f5);
	    g5=f5+c5;
	    gotoxy(10,23);
	    printf("***********************************************************************");
	    gotoxy(22,24);
	    printf("++++TOTAL AMOUNT CHARGED++++: Rs %d\n",g5);
	    break;

    case 7: gotoxy(30,9);
	    printf("PRESCRIBED MEDICINES ARE:");
	    gotoxy(10,10);
	    printf("_______________________________________________________________________");
	    gotoxy(30,12);
	    printf("<1>Amoxicillin");
	    gotoxy(20,13);
	    printf("Cost of each tablet Rs %d",a6);
	    gotoxy(20,14);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&b6);
	    c6= a6*b6;
	    gotoxy(30,16);
	    printf("TOTAL COST Rs %d",c6);
	    gotoxy(30,18);
	    printf("<2>Penicillin");
	    gotoxy(20,19);
	    printf("Cost of each tablet Rs %d",d6);
	    gotoxy(20,20);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&e6);
	    f6=d6*e6;
	    gotoxy(30,22);
	    printf("TOTAL COST Rs %d",f6);
	    g6=f6+c6;
	    gotoxy(10,23);
	    printf("***********************************************************************");
	    gotoxy(22,24);
	    printf("++++TOTAL AMOUNT CHARGED++++: Rs %d",g6);
	    break;


    case 8: gotoxy(30,9);
	    printf("PRESCRIBED MEDICINES ARE: ");
	    gotoxy(10,10);
	    printf("_______________________________________________________________________");
	    gotoxy(30,12);
	    printf("<1>Zanamivir");
	    gotoxy(20,13);
	    printf("Cost of each tablet Rs %d",a7);
	    gotoxy(20,14);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&b7);
	    c7= a7*b7;
	    gotoxy(30,16);
	    printf("TOTAL COST Rs %d",c7);
	    gotoxy(30,18);
	    printf("<2>Oseltamivir");
	    gotoxy(20,19);
	    printf("Cost of each tablet Rs %d",d7);
	    gotoxy(20,20);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&e7);
	    f7=d7*e7;
	    gotoxy(30,22);
	    printf("TOTAL COST Rs %d",f7);
	    g7=f7+c7;
	    gotoxy(10,23);
	    printf("**********************************************************************");
	    gotoxy(22,24);
	    printf("++++TOTAL AMOUNT CHARGED++++: Rs %d",g7);
	    break;


    case 9: gotoxy(30,9);
	    printf("PRESCRIBED MEDICINES ARE: ");
	    gotoxy(10,10);
	    printf("______________________________________________________________________");
	    gotoxy(30,12);
	    printf("Paracetamol");
	    gotoxy(20,14);
	    printf("Cost of each tablet Rs %d",a8);
	    gotoxy(20,15);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&b8);
	    c8= a8*b8;
	    gotoxy(10,17);
	    printf("**********************************************************************");
	    gotoxy(22,18);
	    printf("++++TOTAL AMOUNT CHARGED++++ :Rs %d",c8);
	    break;

    case 10:gotoxy(30,9);
	    printf("PRESCRIBED MEDICINES ARE: ");
	    gotoxy(10,10);
	    printf("______________________________________________________________________");
	    gotoxy(30,12);
	    printf("Ibuprofen");
	    gotoxy(20,14);
	    printf("Cost of each tablet Rs %d",a9);
	    gotoxy(20,15);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&b9);
	    c9= a9*b9;
	    gotoxy(10,17);
	    printf("**********************************************************************");
	    gotoxy(22,18);
	    printf("++++TOTAL AMOUNT CHARGED++++ :Rs %d",c9);
	    break;



    case 11:gotoxy(30,9);
	    printf("PRESCRIBED MEDICINES ARE: ");
	    gotoxy(10,10);
	    printf("______________________________________________________________________");
	    gotoxy(30,12);
	    printf("Tylenol");
	    gotoxy(20,14);
	    printf("Cost of each tablet Rs %d",a10);
	    gotoxy(20,15);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&b10);
	    c10= a10*b10;
	    gotoxy(10,17);
	    printf("**********************************************************************");
	    gotoxy(22,18);
	    printf("++++TOTAL AMOUNT CHARGED++++ :Rs %d",c10);
	    break;


    case 12:gotoxy(30,9);
	    printf("PRESCRIBED MEDICINES ARE: ");
	    gotoxy(10,10);
	    printf("______________________________________________________________________");
	    gotoxy(30,12);
	    printf("Naproxen");
	    gotoxy(20,14);
	    printf("Cost of each tablet Rs %d",a11);
	    gotoxy(20,15);
	    printf("Dose of tablets prescribed by your doctor: ");
	    scanf("%d",&b11);
	    c11= a11*b11;
	    gotoxy(10,17);
	    printf("**********************************************************************");
	    gotoxy(22,18);
	    printf("++++TOTAL AMOUNT CHARGED++++ :Rs %d",c11);
	    break;
     }

     fclose(fp);
     fclose(fp1);
fclose(fp2);
     getch();
     hospital();


}

void medical()
{
FILE *fp;
int ch;
clrscr();
if((fp=fopen("ml.c","ab"))==NULL)
{
puts("file does not exist");
}
gotoxy(24,6);
printf("***---LOOKING FOR THE TREATMENT---***");
gotoxy(18,8);
printf("-----------------------------------------------------");
gotoxy(34,11);
printf("<1>.OPD");
gotoxy(34,13);
printf("<2>.ADMIT");
gotoxy(34,15);
printf("<3>.EXIT");
gotoxy(24,18);
printf("------------------------------------------------------");
gotoxy(24,21);
printf("--**YOUR MEDICAL CASE ENTRY**--:");
scanf("%d",&ch);


switch(ch)
     {

     case 1:
	     clrscr();
	     read();
	     doctor();
	     medicine();
	     exit(0);
	     break;

     case 2: pspace();
	     break;

     case 3: exit(0);


     }

     fclose(fp);
     getch();

}
void pspace()
{
FILE *fp;
int ch;
char g[]="GENERAL WARD";
char d[]="DELUXE WARD";

clrscr();
if((fp=fopen("pe.c","w"))==NULL)
{
puts("file does not exist");
}
gotoxy(24,6);
printf("--**WARDS IN THE ADMIT ZONE**--");
gotoxy(16,8);
printf("********************************************************");
gotoxy(32,11);
printf("<1>.GENERAL WARD");
gotoxy(32,13);
printf("<2>.DELUXE WARD");
gotoxy(16,15);
printf("---------------------------------------------------------");
gotoxy(30,18);
printf("ENTER YOUR WARD CHOICE :");
scanf("%d",&ch);
fprintf(fp,"%d ",ch);
if(ch==1)
{
fprintf(fp,"%s",g);
}
else
{
fprintf(fp,"%s",d);
}


     switch(ch)
     {
      case 1:
	      ward();
	      gward();
	      room();
	      hospital();
	      break;


     case 2: printf("WARD SPECIFICATIONS ARE:\n");
	     ward();
	     dward();
	     room();
	     hospital();
	     break;



}
fclose(fp);
getch();
}
void room()
{
FILE *fp;
int c,ch,p,h,i=0;
char a[100];
char ak[100];
char cd[100];
char another='Y';
clrscr();
if((fp=fopen("kiii.c","ab"))==NULL)
{
puts("not exist");
}
gotoxy(24,6);
printf("ALLOTMENT OF WARD NO. BY PATIENTS CHOICE");
gotoxy(16,8);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(24,10);
printf("ENTER THE ROOM CHOICE: (FROM (A-Z)): ");
scanf("%s",ak);
fprintf(fp,"%s",ak);
fclose(fp);
if((fp=fopen("kiii.c","rb"))==NULL)
{
puts("not exist");
}
fscanf(fp,"%s",ak);
gotoxy(8,12);
printf("SERIES OF REQUESTED ROOM BY PATIENTS(ALL RECORDS):");
printf("%s",ak);
while(fread(&p,sizeof(p),1,fp)==1)
{
printf("%s",ak);
}
gotoxy(16,14);
printf("+++++------+++++------++++++-----++++-------");
gotoxy(18,16);
printf("If the room requested by the patient is repeated?");
gotoxy(28,18);
printf("<1> YES");
gotoxy(28,20);
printf("<2> NO");
gotoxy(20,22);
printf("Enter your choice: ");
scanf("%d",&ch);



if(ch==2)

   { gotoxy(28,24);
   printf("REQUESTED ROOM IS AVAILABLE");

    }
    else
    {

room();

   }
   gotoxy(50,25);
   printf("PRESS 5 TO CONTINUE: ");
   scanf("%d",&ch);
   if(ch==5)
   {
   clrscr();
   }
   else
   exit(0);
   gotoxy(10,6);
   textcolor(WHITE);
   cprintf("LET ROOM BE OCCUPIED BY THE PATIENT(ALSO REMOVES INVALID ENTRIES)?");
   gotoxy(34,8);
   printf("<1>YES");
   gotoxy(34,10);
   printf("<2>NO");
   gotoxy(30,12);
   printf("ENTER YOUR CHOICE: ");
   scanf("%d",&h);
   if(h==1)
   {
   while(another=='Y')
   {

    while(ak[i] != '\0')
    {
	i++;

    }
    ak[i-1] = '\0';
   gotoxy(16,14);
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   gotoxy(2,16);
   textcolor(WHITE);
   cprintf("<<ENTRY IS CLEARED ONE BY ONE TO SHOW THE ROOM OCCUPTANTS & INVALID ENTERIES>>");
   gotoxy(8,20);
   printf("WHETHER ROOMS IS OCCUPIED BY THE PATIENTS + INVALID ENTRIES IS COMPLETELY CLEARED?(PRESS ENTER)");
   gotoxy(16,24);
   printf("%s",ak);
fflush(stdin);
another=getch();
}
}
else
{
gotoxy(16,16);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(16,18);
printf("REQUESTED ENTRIES OF ROOMS OF PATIENTS: %s",ak);
}


fclose(fp);

getch();
}

void dward()
{
FILE *fp;
int ch,che;
char s[]="SINGLE BED";
char d[]="DOUBLE BED";
char cc[]="COST CHARGED PER DAY IS Rs 400";
char cd[]="COST CHARGED PER DAY IS Rs 850";
char y[]="HOSPITAL CATERING SERVICE REQUIRED";
char n[]="HOSPITAL CATERING SERVICE NOT REQUIRED";
int a=400;
int b=850;
clrscr();
if((fp=fopen("ml.c","w"))==NULL)
{
puts("file does not exist");
}
gotoxy(20,6);
printf("-----++++++WARD SPECIFICATIONS++++++-------");
gotoxy(16,8);
printf("<<<<------------------------------------------->>>>");
gotoxy(34,10);
printf("BED TYPE");
gotoxy(16,12);
printf("-----------------------------------------------");
gotoxy(30,14);
printf("<1>.SINGLE BED");
gotoxy(30,16);
printf("<2>.DOUBLE BED");
gotoxy(28,18);
printf("CHOOSE YOUR BED TYPE: ");
scanf("%d",&ch);
fprintf(fp,"%d\n",ch);
if(ch==1)
{
fprintf(fp,"%s\n",s);
}
else
{
fprintf(fp,"%s\n",d);
}

     switch(ch)
     {
     case 1: gotoxy(16,18);
	     printf("********************************************");
	     gotoxy(23,20);
	     printf("COST CHARGED PER DAY IS Rs %d",a);
	     fprintf(fp,"%s\n",cc);
	     break;

     case 2: gotoxy(16,18);
	     printf("********************************************");
	     gotoxy(23,20);
	     printf("COST CHARGED PER DAY IS Rs %d",b);
	     fprintf(fp,"%s\n",cd);
	     break;

     }
   gotoxy(50,25);
   printf("PRESS 5 TO CONTINUE: ");
   scanf("%d",&ch);
   if(ch==5)
   {
   clrscr();
   }
   else
   exit(0);
   gotoxy(22,6);
   printf("HOSPITAL CATERING SERVICE REQUIRED?");
   gotoxy(16,8);
   printf("-------------------------------------------------------");
   gotoxy(32,10);
   printf("<3>.YES");
   gotoxy(32,12);
   printf("<4>.NO");
   gotoxy(30,14);
   printf("ENTER YOUR CHOICE: ");
   scanf("%d",&che);
   if(che==3)
{
fprintf(fp,"%s\n",y);
}
else
{
fprintf(fp,"%s\n",n);
}

     switch(che)
     {

     case 3: gotoxy(16,16);
	     printf("---------****--------*****--------******-------");
	     gotoxy(12,20);
	     printf("DEAR CUSTOMER........YOU WILL BE PROVIDED BEST CATERING SERVICES");
	     gotoxy(14,22);
	     printf("MEALS CHARGES ARE TO BE PROVIDED AFTER DISCHARGE");
	     break;

     case 4: gotoxy(18,18);
	     printf("FOLLOW YOUR HEALTH  DIET RECOMMENDED BY DOCTOR");
	     break;

     }
     gotoxy(50,25);
     printf("PRESS 5 TO CONTINUE: ");
   scanf("%d",&ch);
   if(ch==5)
   {
   clrscr();
   }
   else
   exit(0);
     fclose(fp);


}
void gward()
{
FILE *fp;
char s[]="SINGLE BED";
char d[]="DOUBLE BED";
char cc[]="COST CHARGED PER DAY IS Rs 200";
char cd[]="COST CHARGED PER DAY IS Rs 700";
char y[]="HOSPITAL CATERING SERVICE REQUIRED";
char n[]="HOSPITAL CATERING SERVICE NOT REQUIRED";
int ch,che;
int a=200;
int b=700;
clrscr();
if((fp=fopen("ml.c","w"))==NULL)
{
puts("file does not exist");
}
gotoxy(20,6);
printf("-----++++++WARD SPECIFICATIONS++++++-------");
gotoxy(16,8);
printf("<<<<------------------------------------------->>>>");
gotoxy(34,10);
printf("BED TYPE");
gotoxy(16,12);
printf("-----------------------------------------------");
gotoxy(30,14);
printf("<1>.SINGLE BED");
gotoxy(30,16);
printf("<2>.DOUBLE BED");
gotoxy(28,18);
printf("ENTER YOUR BED TYPE: ");
scanf("%d",&ch);

if(ch==1)
{
fprintf(fp,"%s\n",s);
}
else
{
fprintf(fp,"%s\n",d);
}

     switch(ch)
     {
     case 1: gotoxy(16,18);
	     printf("********************************************");
	     gotoxy(23,20);
	     printf("COST CHARGED PER DAY IS Rs %d",a);
	     fprintf(fp,"%s\n",cc);
	     break;

     case 2: gotoxy(16,18);
	     printf("********************************************");
	     gotoxy(23,20);
	     printf("COST CHARGED PER DAY IS Rs %d",b);
	     fprintf(fp,"%s\n",cd);
	     break;

     }
   gotoxy(50,25);
   printf("PRESS 5 TO CONTINUE: ");
   scanf("%d",&ch);
   if(ch==5)
   {
   clrscr();
   }
   else
   exit(0);
   gotoxy(22,6);
   printf("HOSPITAL CATERING SERVICE REQUIRED");
   gotoxy(16,8);
   printf("-------------------------------------------------------");
   gotoxy(32,10);
   printf("<3>.YES");
   gotoxy(32,12);
   printf("<4>.NO");
   gotoxy(30,14);
   printf("ENTER YOUR CHOICE: ");
   scanf("%d",&che);
      if(che==3)
{
fprintf(fp,"%s\n",y);
}
else
{
fprintf(fp,"%s\n",n);
}

     switch(che)
     {
     case 3:gotoxy(16,16);
	     printf("---------****--------*****--------******-------");
	     gotoxy(12,20);
	     printf("DEAR CUSTOMER........YOU WILL BE PROVIDED BEST CATERING SERVICES");
	     gotoxy(14,22);
	     printf("MEALS CHARGES ARE TO BE PROVIDED AFTER DISCHARGE");
	     break;

     case 4:gotoxy(18,18);
	     printf("FOLLOW YOUR HEALTH  DIET RECOMMENDED BY DOCTOR");
	     break;


     }
     gotoxy(50,25);
   printf("PRESS 5 TO CONTINUE: ");
   scanf("%d",&ch);
   if(ch==5)
   {
   clrscr();
   }
   else
   exit(0);

     fclose(fp);


}
void ward()
{
FILE *fp;
int ch;
clrscr();
if((fp=fopen("ml.c","ab"))==NULL)
{
puts("file does not exist");
}
gotoxy(24,6);
printf("***-----YOUR WARD FOR ADMIT----***");
gotoxy(16,8);
printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
gotoxy(30,10);
printf("<1>.MEDICAL UNIT");
gotoxy(30,12);
printf("<2>.CARDIAC UNIT");
gotoxy(30,14);
printf("<3>.PEDIATRIC UNIT");
gotoxy(30,16);
printf("<4>.SURGICAL UNIT");
gotoxy(30,18);
printf("<5>.INTENSIVE CARE UNIT");
gotoxy(30,20);
printf("<6>.EXIT");
gotoxy(16,22);
printf("---------------------------------------------------------");
gotoxy(30,23);
printf("YOUR DIAGNOSIS DEPARTMENT :");
scanf("%d",&ch);
gotoxy(16,24);
printf("*************************************************");


     switch(ch)
     {

     case 1:gotoxy(28,25);
	    printf("<<<YOU ARE IN MEDICAL UNIT>>>");
	    break;

     case 2:gotoxy(28,25);
	    printf("<<<YOU ARE IN CARDIAC UNIT>>>");
	    break;

     case 3:gotoxy(28,25);
	    printf("<<<YOU ARE IN PEDIATRIC UNIT>>>");
	    break;


     case 4:gotoxy(28,25);
	    printf("<<<YOU ARE IN SURGICAL UNIT>>>");
	    break;

     case 5:gotoxy(28,25);
	    printf("<<<YOU ARE IN INTENSIVE UNIT>>>");
	    break;



     case 6: exit(0);

     }
     fclose(fp);
     getch();
     }



