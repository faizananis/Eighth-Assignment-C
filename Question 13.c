int main()
{
    int i=0;
    int j=0;
    char c=' ';
    for(i=1;i<=7;i++)
    {
        c='A';
        for(j=1;j<=13;j++)
        {
            if(j>=6+i||j<=8-i)
            {
                printf("%c",c);
            }
            else
            {
                printf(" ");
            }
            if(j<7)
                c++;
            else
                c--;
        }
        printf("\n");
    }
    return 0;
}
