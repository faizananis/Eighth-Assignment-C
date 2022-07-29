int main()
{
    int i=0;
    int j=0;
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(j<=6+i||j>=14-i)
            {
                if(j>=4-i&&j<=16+i&&i<=3)
                {
                    printf("*");
                }
                else if(j>=i-3&&j<=23-i&&i>=4)
                {
                    if(i==4&&j>=7&&j<=12)
                    {
                        printf("MySirG");
                        j+=5;
                    }
                    else
                    {
                        printf("*");
                    }
                }
                else
                {
                    printf(" ");
                }
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
