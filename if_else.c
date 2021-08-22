# include<stdio.h>

int main()
{
    printf("Voting Eligibility Checker\n");
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("Eligible to vote");
    }
    else{
        printf("Ineligible to vote");
    }
    return 0;
}