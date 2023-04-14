# include<stdio.h>


typedef struct employee
{
    char *name;
    int age;
    int salary;
}employee_t ;

int manager(){

    employee_t manager;
    
    manager.age=27;

    if(manager.age>30){
        manager.salary=65000;
    }else {
        manager.salary=55000;
    }
    return manager.salary;
}

int main (){

    employee_t emp1;
    employee_t emp2;
    printf("Enter the salary of employee:\n");
    scanf("%d",&emp1.salary);
    printf("Enter thr salary of employee 2\n");
    scanf("%d",&emp2.salary);

    printf("mnager salarry %d",manager());
    
    return 0;
}