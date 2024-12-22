#ifndef ADMIN_H
#define ADMIN_H
#include <string.h>


int authenticateadmin();
void exportToCSV();
void ssignup_input_user();


typedef struct User{
	char username[50];
	char password[50];
} User;

struct User username, password;

int autheticateAdmin()
{

	char adminusername[50],adminpasswd[50];
	const  char adminuser[]= "admin";
	const char adminpass[]= "vertex"; 

	printf("Enter the username for admin: ");
	fgets(adminusername, 50 , stdin);

	printf("Enter the password for admin: ");
	fgets(adminpasswd , 50 , stdin);

	if((strcmp(adminusername,adminuser) && strcmp(adminpasswd,adminpass)))
	{
		printf("You are an admin");
	}
	return 0;
}


void signup_input_user()
{
	User u;
	char username[50], password[50];
	printf("\nEnter username:");
	fgets(username, 50 , stdin);
	printf("Enter password:");
	fgets(password, 50 , stdin);
}

void exportToCSV()
{
	User u;
	FILE *logfile =fopen("logfile.csv","a");

	if(logfile==NULL)
	{
		printf("Unable to open the file");
	}
	else{
		fprintf(logfile,"Username,Password\n");
		fprintf(logfile,"%49s %49s\n",u.username,u.password);
		printf("New Account added to record");
		fclose(logfile);
	}
	
    
}

#endif