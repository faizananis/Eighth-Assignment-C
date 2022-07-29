int main()
{
    int i=0;
    int j=0;
    char c=' ';
    for(i=1;i<=5;i++)
    {
        c='A';
        for(j=1;j<=17;j++)
        {
            if(j<=8+i+i&&j>=10-i-i&&j%2==1)
            {
                printf("%c",c);
                if(j<9)
                    c++;
                else
                    c--;
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

