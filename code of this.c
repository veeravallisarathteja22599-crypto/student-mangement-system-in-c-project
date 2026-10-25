#include <stdio.h>

struct Students{

int roll_number;
    char name[20];
    int marks;
    };

int main(void) {
    int count =0;
    int b;
    struct Students s[100];
int choice;
    int temp;
    int a;

    while(1)
        {
    printf("\t\t\t\t----STUDENT MANGAGEMENT SYSTEM----");
    printf("\nmenu");
    printf("\n1.Add Students");
    printf("\n2.Display Students");
    printf("\n3.exit");
printf("\nenter your choice : ");
    scanf("%d",&choice);
    
switch (choice)
    {
        case 1 : 
        if(count <100)
        {
        printf("\nenter student roll number : ");
            scanf("%d",&s[count].roll_number);
            printf("\nenter name of student  : ");
            scanf("%s",&s[count].name);
            printf("\nenter marks of students: ");
            scanf("%d",&s[count].marks);
            count++;
            printf("\ndata updated sucessfully");
          
        }
           
        if(count==100){  
            printf("\ndatabase is full");
                
        }
         break;
            case 2 : 
      
                printf("\nenter  roll number to find detials");
             scanf("%d",&temp);
            for(a=0;a<count;a++)
                {
            if(temp==s[a].roll_number)
            {
                printf("\nroll number of student  is %d",s[a].roll_number);
                printf("\nname of students is %s",s[a].name);
                printf("\nmarks of student is %d",s[a].marks);
            
                    break;        
            }
                }
        break;

        case 3 :

         printf("\n--program closed--");  
    return 0;
    }
        }
        
    return 0;
}
