main()
{
    //prompt user for yearly temperature of the five cities
    const int numYears = 5;
    char cities[5][20];
    float temps[25];
    int i,j;

    printf("Please enter the yearly temperature of the five cities\n");
    for (i = 0; i <= 4; i++)
    {
        printf("Enter city %d \n", i + 1);
        scanf("%s", &cities[i]);

        printf("Enter temperatures for city %d\n", i + 1);

        for (j = (i * numYears); j < (i * numYears) + numYears; j++)
        {
            printf("For year %d\n", (j % numYears)  + 1);

            scanf("%f", &temps[j]);
        }
    }
    return 0;
}
