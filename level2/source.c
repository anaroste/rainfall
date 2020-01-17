void p(void)
{
  unsigned int var1;
  char buffer [76];
  
  fflush(stdout);
  gets(buffer);
  if ((var1 & 0xb0000000) == 0xb0000000) {
    printf("(%p)\n",var1);
    _exit(1);
  }
  puts(buffer);
  strdup(buffer);
  return;
}

void main(void)
 {
  p();
  return;
}