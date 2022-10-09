void printf(char* str)
{
    unsigned short* VideoMemory = (unsigned short*)0xb8000;
    for(int i=0;str[i]!='\0';++i)
    {
        VideoMemory[i] = (VideoMemory[i]&0xFF00)|str[i];
    }
}
extern "C" void kernelMain(void* mutltiboot_structure, unsigned int magicnumber)
{
    printf("Hello World! I'm adopted_irelia");
    while(1);
}