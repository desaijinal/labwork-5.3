#include<stdio.h>

main()
{
	int choice,abc;
	
	printf("press 1 for English\n");
	printf("press 2 for Hindi\n");
	printf("press 3 for Gujarati\n");
	
	printf("enter your choice=");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
				printf("press 1 for internet recharge\n");
				printf("press 2 for top-up recharge\n");
				printf("press 3 for special recharge\n");
	            printf("enter your choice=");
	            scanf("%d",&abc);
	            
	            switch(abc)
	            {
	            	case 1:
	            		printf("You have successfully done a Internet Recharge.");
	            		break;
	            	case 2:
	            		printf("You have successfully done a Top-up Recharge.");
	            		break;
	            	case 3:
	            		printf("You have successfully done a Special Recharge.");
	            		break;
	            	default :
	            		printf("plz enter proper choice");
				}
		break;
		
		case 2:
				printf("Internet Recharge ke liye 1 dabaiye\n");
				printf("Top-up Recharge ke liye 2 dabaiye\n");
				printf("Special Recharge ke liye 3 dabaiye\n");
	            printf("enter your choice=");
	            scanf("%d",&abc);
	            
	            switch(abc)
	            {
	            	case 1:
	            		printf("Aapne safaltapurvak Internet Recharge kar liya he.");
	            		break;
	            	case 2:
	            		printf("Aapne safaltapurvak Top-up kar liya he.");
	            		break;
	            	case 3:
	            		printf("Aapne safaltapurvak Special kar liya he.");
	            		break;
	            	default :
	            		printf("plz enter proper choice");
				}
		break;
		
		case 3:
				printf("Internet Recharge mate 1 dabavo\n");
				printf("Top-up Recharge mate 1 dabavo\n");
				printf("special Recharge mate 1 dabavo\n");
	            printf("enter your choice=");
	            scanf("%d",&abc);
	            
	            switch(abc)
	            {
	            	case 1:
	            		printf("tame safaltapurvak Internet Recharge karavi lidhu chhe.");
	            		break;
	            	case 2:
	            		printf("tame safaltapurvak Top-up Recharge karavi lidhu chhe.");
	            		break;
	            	case 3:
	            		printf("tame safaltapurvak Special Recharge karavi lidhu chhe.");
	            		break;
	            	default :
	            		printf("plz enter proper choice");
				}
		break;
		
}
}