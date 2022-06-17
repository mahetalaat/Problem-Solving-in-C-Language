#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


void ProgramtoOpenaFileWriteinitAndClosetheFile()
{
    FILE* filePointer;

    // Get the data to be written in file
    char dataToBeWritten[50]
        = "GeeksforGeeks-A Computer Science Portal for Geeks";

    // Open the existing file GfgTest.c using fopen()
    // in write mode using "w" attribute
    filePointer = fopen("GfgTest.c", "w");

    // Check if this filePointer is null
    // which maybe if the file does not exist
    if (filePointer == NULL)
    {
        printf("GfgTest.c file failed to open.");
    }
    else
    {

        printf("The file is now opened.\n");

        // Write the dataToBeWritten into the file
        if (strlen(dataToBeWritten) > 0)
        {

            // writing in the file using fputs()
            fputs(dataToBeWritten, filePointer);
            fputs("\n", filePointer);
        }

        // Closing the file using fclose()
        fclose(filePointer);

        printf("Data successfully written in file GfgTest.c\n");
        printf("The file is now closed.");
    }
}

void ProgramtoOpenaFileReadfromitAndClosetheFile()
{
    FILE* filePointer;

    // Declare the variable for the data to be read from file
    char dataToBeRead[50];

    // Open the existing file GfgTest.c using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("GfgTest.c", "r");

    // Check if this filePointer is null
    // which maybe if the file does not exist
    if (filePointer == NULL)
    {
        printf("GfgTest.c file failed to open.");
    }
    else
    {

        printf("The file is now opened.\n");

        // Read the dataToBeRead from the file
        // using fgets() method
        while (fgets(dataToBeRead, 50, filePointer) != NULL)
        {

            // Print the dataToBeRead
            printf("%s", dataToBeRead);
        }

        // Closing the file using fclose()
        fclose(filePointer);

        printf("Data successfully read from file GfgTest.c\n");
        printf("The file is now closed.");
    }
}

void simplefilewrite()
{
    FILE* fp;

    fp = fopen("test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
}

void simplefileread()
{
    FILE* fp;
    char buff[255];

    fp = fopen("test.txt", "r");
    fscanf(fp, "%s", buff);
    printf("1 : %s\n", buff);

    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff);

    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff);
    fclose(fp);
}

void readchar()
{
    FILE* fp;
    char ch;
    fp = fopen("file_handle.c", "r");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    fclose(fp);
}

void readwritefromusergetcputc()
{
    FILE* fp;
    char ch;
    fp = fopen("one.txt", "w");
    printf("Enter data...");
    while ((ch = getchar()) != EOF) {
        putc(ch, fp);
    }
    fclose(fp);
    fp = fopen("one.txt", "r");

    while ((ch = getc(fp))!= EOF)
        printf("%c", ch);

    // closing the file pointer
    fclose(fp);

    return 0;
}

struct emp
{
    char name[10];
    int age;
};

void readwritefromuserfprintffscanfstruct()
{
    struct emp e;
    FILE* p, * q;
    p = fopen("one.txt", "a");
    q = fopen("one.txt", "r");
    printf("Enter Name and Age:");
    scanf("%s %d", e.name, &e.age);
    fprintf(p, "%s %d", e.name, e.age);
    //fclose(p);
    do
    {
        fscanf(q,"%s %d", e.name, e.age);
        printf("%s %d", e.name, e.age);
    } while (!feof(q));
}

void main()
{
    //ProgramtoOpenaFileWriteinitAndClosetheFile();
    //ProgramtoOpenaFileReadfromitAndClosetheFile();
    //simplefilewrite();
    //simplefileread();
    //readchar();
    //readwritefromusergetcputc();
    //readwritefromuserfprintffscanfstruct();
}