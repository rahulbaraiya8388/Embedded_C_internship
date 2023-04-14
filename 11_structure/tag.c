# include<stdio.h>


struct employee
{
    char *name;
    int age;
    int salary;
};

int manager(){

    struct employee manager;
    
    manager.age=27;

    if(manager.age>30){
        manager.salary=65000;
    }else {
        manager.salary=55000;
    }
    return manager.salary;
}

int main (){

    struct employee emp1;
    struct employee emp2;
    printf("Enter the salary of employee:\n");
    scanf("%d",&emp1.salary);
    printf("Enter thr salary of employee 2\n");
    scanf("%d",&emp2.salary);

    printf("mnager salarry %d",manager());
    
    return 0;
}