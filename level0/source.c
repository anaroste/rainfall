int main(int argc, char** argv)
{

    char* instruction[] = {"/bin/sh", NULL};
    if(atoi(argv[1]) == 423)
    {
        execv(instruction[0], instruction);
    }
    else
    {
        fwrite("No !\n",1,5,stderr);
    }

}