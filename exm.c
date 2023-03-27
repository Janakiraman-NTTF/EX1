#include<stdio.h>
#include<string.h>
unsigned int s_no=1,r_no=1;

void Main_exit();
void menu();
// Creating a structure to store data of the user
struct 
{
	//stroing the details of users
	char first_name[20];
	char DOB[8];
	char age[2];
	char sex[3];
	char father_name[20];
	char mother_name[20];
	char sibilings[1];
	char marital_status[1];
    char phonenumber[10];
    char address[30];
    char nationality[20];
	//storing the account details of users
	char account_number[30];
	char branch[50];
	char IFSC[30];
	char user_id[30];
	char password[30];
	char secondary_password[30];
	float balance;
	
}personal_details[10],account_details[10];
int main()
{
	printf("\t\t\tBANK MANAGEMENT SYSTEM\n\n\n");
	printf("\t\t\tWELCOME TO THE MAIN MENU\n\n");
	menu();
	return 0;
}
//function creating account
void create_account()
{
		printf("\tfirst name :");
		scanf("%s",&personal_details[s_no].first_name);
	/*	printf("\tDate of birth :");
		scanf("%s",&personal_details[s_no].DOB);
		printf("\tage :");
		scanf("%s",&personal_details[s_no].age);
		printf("\tSex:");
		scanf("%s",&personal_details[s_no].sex);
		printf("\tfather name :");
		scanf("%s",&personal_details[s_no].father_name);
		printf("\tmother name :");
		scanf("%s",&personal_details[s_no].mother_name);
		printf("\tsibilings:");
		scanf("%s",&personal_details[s_no].sibilings);
		printf("\tmarital status:");
		scanf("%s",&personal_details[s_no].marital_status);
		printf("\tPhone number:");
		scanf("%s",&personal_details[s_no].phonenumber);
		printf("\tAddress:");
		scanf("%s",&personal_details[s_no].address);
		printf("\tNationality:");
		scanf("%s",&personal_details[s_no].nationality); */
		printf("\tAccount Number:"); 
		scanf("%s",&account_details[s_no].account_number);
	/*	printf("\tBranch:");
		scanf("%s",&account_details[s_no].branch);
		printf("\tIFSC number:");
		scanf("%s",&account_details[s_no].IFSC); */
		printf("\tUser id:");
		scanf("%s",&account_details[s_no].user_id);
		printf("\tPassword:");
		scanf("%s",&account_details[s_no].password);
		printf("\tSecondary Password:");
		scanf("%s",&account_details[s_no].secondary_password);
		printf("\tDeposit:");
		scanf("%f",&account_details[s_no].balance);
		printf("\t\t\t\t YOUR ACCOUNT WAS CREATED SUCCESSFULLY\t");	
		s_no=s_no+1;
	
}
//function for getiing account details
void getdetails()
{
	char Secondary_password[30];
	printf("Enter your secondary password:");
	scanf("%s",&Secondary_password);
	for(r_no=1;r_no<=s_no;r_no++)
	{
		if (strcmp(Secondary_password ,account_details[r_no].secondary_password)==0)
		{
			printf("\tFirst name:%s\n",personal_details[r_no].first_name);
		/*	printf("\tdateofbirth:%s\n",personal_details[r_no].DOB);
			printf("\tage:%ld\n",personal_details[r_no].age);
			printf("\tFather name:%s\n",personal_details[r_no].father_name);
			printf("\tMother name:%s\n",personal_details[r_no].mother_name);
			printf("\tMarital status:%s\n",personal_details[r_no].marital_status);
			printf("\tSibilings:%s\n",personal_details[r_no].sibilings);
			printf("\tphone number:%s\n",personal_details[r_no].phonenumber);
			printf("\tAddress :%s\n",personal_details[r_no].address);
			printf("\tNationality:%s\n",personal_details[r_no].nationality); */
			printf("\tAccount number:%s\n",account_details[r_no].account_number);
			printf("\tUser id :%s\n",account_details[r_no].user_id);
		/*	printf("\tBranch:%s\n",account_details[r_no].branch); 
			printf("\tIFC code:%s\n",account_details[r_no].IFSC); */
			printf("\tBalance:%f\n",account_details[r_no].balance);
			Main_exit();
		}
   }
	
}
//function for checking the balance
void Balance()
{
	char User_id [30],Password[30];
	printf("\t\tEnter your User id:");
	scanf("%s",&User_id);
	printf("\t\tEnter your  password:");
	scanf("%s",&Password);
	for(r_no=1;r_no<=s_no;r_no++)
	{
		//checking tha balance user name and password both correct only its shows the balance
		if (strcmp(User_id,account_details[r_no].user_id)==0)
		{
			if (strcmp(Password,account_details[r_no].password)==0)
			{
			printf("Balance :%f",account_details[r_no].balance);
			Main_exit();
		    }
		}
	}
	
}
//function for updating details
void update_personal_details()
{
	char User_id [30],Password[30];
	printf("\t\tEnter your User name:");
	scanf("%s",&User_id);
	printf("\t\tEnter your  password:");
	scanf("%s",&Password);
		//want to update the user account details for that need to enter the user id and password
	for (r_no=1;r_no<=s_no;r_no++)
	{
		if (strcmp(User_id,account_details[r_no].user_id)==0)
		{
			if (strcmp(Password,account_details[r_no].password)==0)
			{
			int detail;
			printf("\n\n\t\t1.first_name\n\t\t2.Date of birth\n\t\t3.Phone number\n\t\t4.Address\n\n\n");
			printf("\t\tWhat details want to change:");
			scanf("%d",&detail);
			//which detail want to change ..
			//select the details and upate the details
			switch (detail)
			{
				case 1:			
					printf("1.Update your first name :");
					scanf("%s",&personal_details[r_no].first_name);
					break;
			/*	case 2:
					printf("2.Update yourDate of birth:");
					scanf("%s",&personal_details[r_no].DOB);
					break;
				case 3:
					printf("3.Update your Phone number:");
					scanf("%s",&personal_details[r_no].phonenumber);
					break;
				case 4:
					printf("4.Update your Address:");
					scanf("%s",&personal_details[r_no].address);
					break;
				case 5:
					printf("5.marital status:");
					scanf("%s",&personal_details[r_no].marital_status);
					break; */
				default :
					printf("not matching");
				}
		    }
		}
	}
	printf("succefully changed");


}
//deposite the money in our account
void money_deposit()
{
	char Password[30],Account_number[30];
	printf("\t\tPlease enter your account number:");
	scanf("%s",&Account_number);
	printf("\t\tPlease enter your password:");
	scanf("%s",&Password);
	float Deposit;
	printf("\t\tEnter your amount to Deposit:");
    scanf("%f", &Deposit);
    for(r_no=1;r_no<=s_no;r_no++)
	{
		//checking tha balance user name and password both correct only its shows the balance
		if (strcmp(Account_number,account_details[r_no].account_number)==0)
		{
			if (strcmp(Password,account_details[r_no].password)==0)
			{
			account_details[r_no].balance+=Deposit;
			printf("                                                    Balance :%f",account_details[r_no].balance);
		    }
		}
	}

}
//deposite the money in our account
void money_withdraw()
{
	char Password[30],Account_number[30];
	printf("\t\tPlease enter your account number:");
	scanf("%s",&Account_number);
	printf("\t\tPlease enter your password:");
	scanf("%s",&Password);
	float Withdraw;
	printf("\t\tEnter your amount to Deposit:");
    scanf("%f", &Withdraw);
    for(r_no=1;r_no<=s_no;r_no++)
	{
		//checking tha balance user name and password both correct only its shows the balance
		if (strcmp(Account_number,account_details[r_no].account_number)==0)
		{
			if (strcmp(Password,account_details[r_no].password)==0)
			{
			account_details[r_no].balance-=Withdraw;
			printf("                                                    Balance :%f",account_details[r_no].balance);
		    }
		}
	}
 
}
//function for choosing which one want select
void menu()
{
	printf("\n\n\t\t1.Create new account\n\t\t2.Account Details \n\t\t3.checking balance \n\t\t4.Update information of existing account\n\t\t5.Deposite the amount\n\t\t6.Withdraw\n\t\t7.For transactions\n\t\t8.Exit\n\n\n\n\n\t\t ");
 	//chossing which page need to open
	unsigned int option;
	printf("enter the option:");
	scanf("%ld",&option);
	
	switch(option)
	{
		//first page
		case 1:
			create_account();
			break;
		//checking the account details
		case 2:
			getdetails();
			break;
		case 3:
			Balance();
		//update the details
		case 4:
			update_personal_details();
			break;
		//Deposit the money
		case 5:
			money_deposit();
			break;
		//withdraw thw amount
		case 6:
			money_withdraw();
			break;
		//transection amount
	/*	case 7:
			money_transection();
			break; */
		default :
			printf("wrong selection");
		
	}
		Main_exit();
}

//function for again going to main menu
void Main_exit()
{
	int main_exit;
	printf("\n\t\tEnter 1 to go to the main menu  :");
    scanf("%d",&main_exit);
	if (main_exit==1)
	{
		menu();
	}
}


