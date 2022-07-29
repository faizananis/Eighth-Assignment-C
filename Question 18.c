int main()
{
    int i=0;
    int j=0;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j<=4+i&&j>=6-i&&i<=5)
            {
                printf("*");
            }
            else if(j>=i-4&&j<=14-i&&i>=6)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
