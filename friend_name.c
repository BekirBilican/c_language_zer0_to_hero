int main (){
  char name[30];
   char szKey[] = "bekir";
  char szInput[80];
printf("\nEnter a name of the person u like\n");
                        
    scanf("%s", name);
 
if (strcmp(name, "bekir") == 0 ) {
    printf("Hurra its me\n"); 
}
else if (strcmp(name, "Bekir") == 0 ) {
    printf("Hurra its me\n"); 
}
else {
    printf ("Okay its %s\n", name);
}
    
      
  system ("pause");
    }
