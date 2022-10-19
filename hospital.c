#include <stdio.h>
#include <stdlib.h>

int  Admitpatitent();
int patientlist();
int Dischargepatient;
int Adddoctors;
int Doctorslist;

typedef struct patient
{
    char patient_name[30];
    char disease[40];
    char address[30];
    int id;
    char date[12];
} pat[300];

typedef struct doctor
{
    int id;
    char name[50];
    char address[30];
    char date[19];
    char specialize[50];
}doc[400];

    FILE *filepointer;
    
    int main(){

        int a;

        while(1)
        {
            
            printf("    Hospital Management System     \n");
            printf("1.Admit Patient\n");
            printf("2.Patient Lisr\n");
            printf("3.Discharge Patient\n");
            printf("4.Add Doctors\n");
            printf("5.Doctors List\n");
            printf("0.Back to menu\n\n\n");
            printf("Enter your choice:  ");
            scanf("%d",&a);

            switch(a){                           //for checking each case
                case 0:
                exit(0);

                case 1:
                Admitpatitent();
                break;                               // termintes

               // case 2:
                //patientlist();
                //break;

                //case 3:
                //Dischargepatient();
                //break;

                //case 4:
                //Adddoctors();
                //break;

                //case 5:
                //Doctorslist();
                //break;
                
                default:
                printf("Invalid..\n\n");
                
            }
            printf("\n Press Any Key to continue..");
            getc(stdin);
        }
        return 0;
    }
     
     int Admitpatitent(){
        
        pat patient;
        filepointer = fopen("patient.txt","a");

        printf("Input Today's Date (dd/mm/yy)");
        scanf("%s", &patient->date);

        printf("Enter Patient id: ");
        scanf("%d",&patient->id);

        fflush(stdin);                            //reutrn 0 if successful
        printf("Enter Patient Name: ");                            //reutrn 0 if successful
        // fgets(patient->patient_name, 15, stdin);
        scanf("%s",&patient->patient_name);

        printf("Enter Patient Disease: ");
        // fgets(patient->disease, 15, stdin);
        scanf("%s",&patient->disease);
        fflush(stdin);
        printf("Enter Your Address : ");
        scanf("%d",&patient->address);

        
        printf("\n New Patient Add Successfully");


        fwrite(patient, sizeof(patient),1,filepointer);
        fclose(filepointer);
        

     }