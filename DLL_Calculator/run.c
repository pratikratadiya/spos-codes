#include <stdio.h>
#include <stdlib.h>
  

// mail to : spshintre@pict.edu
/*                              */
/* 1-dll include file and variables */
/*                              */
#include <dlfcn.h>
void  *FunctionLib;     /*  Handle to shared lib file   */
int   (*Function)();        /*  Pointer to loaded routine   */
const char *dlError;        /*  Pointer to error string     */
 
int main(int argc,char* argv )
{
   int rc;             /*  return codes            */
   int first,second;
   printf("Enter two numbers : \n");
   scanf("%d%d",&first,&second);
   int choice;
   printf("Select operation : \n1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1:
	  FunctionLib = dlopen("/home/manthan/DLL/Calculator/ADD.so",RTLD_LAZY);
	  dlError = dlerror();
	  printf("dlTest 3-Open Library with absolute path return-%s- \n", dlError);
	  if( dlError ) exit(1);

	  Function = dlsym( FunctionLib, "add");
	  dlError = dlerror();
	  printf("dlTest 4-Find symbol add return-%s- \n", dlError);
	  if( dlError ) exit(1);
	 
	  rc = (*Function)(first,second);
	  printf("dlTest 5-add return-%s- \n", dlError);
	 
	  rc = dlclose(FunctionLib);
	  dlError = dlerror();
	  printf("dlTest 6-Close handle return-%s-\n",dlError); 
	  if( rc ) exit(1);
	  break;
      case 2:
	  FunctionLib = dlopen("/home/manthan/DLL/Calculator/SUB.so",RTLD_LAZY);
	  dlError = dlerror();
	  printf("dlTest 3-Open Library with absolute path return-%s- \n", dlError);
	  if( dlError ) exit(1);
	 
	  Function = dlsym( FunctionLib, "sub");
	  dlError = dlerror();
	  printf("dlTest 4-Find symbol sub return-%s- \n", dlError);
	  if( dlError ) exit(1);
	 
	  rc = (*Function)(first,second);
	  printf("dlTest 5-sub return-%s- \n", dlError);
	 
	  rc = dlclose(FunctionLib);
	  dlError = dlerror();
	  printf("dlTest 6-Close handle return-%s-\n",dlError); 
	  if( rc ) exit(1);
	  break;
      case 3:
	  FunctionLib = dlopen("/home/manthan/DLL/Calculator/MUL.so",RTLD_LAZY);
	  dlError = dlerror();
	  printf("dlTest 3-Open Library with absolute path return-%s- \n", dlError);
	  if( dlError ) exit(1);
	 
	  Function = dlsym( FunctionLib, "mul");
	  dlError = dlerror();
	  printf("dlTest 4-Find symbol mul return-%s- \n", dlError);
	  if( dlError ) exit(1);
	 
	  rc = (*Function)(first,second);
	  printf("dlTest 5-mul return-%s- \n", dlError);
	 
	  rc = dlclose(FunctionLib);
	  dlError = dlerror();
	  printf("dlTest 6-Close handle return-%s-\n",dlError); 
	  if( rc ) exit(1);
	  break;
      case 4:
	  FunctionLib = dlopen("/home/manthan/DLL/Calculator/DIV.so",RTLD_LAZY);
	  dlError = dlerror();
	  printf("dlTest 3-Open Library with absolute path return-%s- \n", dlError);
	  if( dlError ) exit(1);
	 
	  Function = dlsym( FunctionLib, "div");
	  dlError = dlerror();
	  printf("dlTest 4-Find symbol div return-%s- \n", dlError);
	  if( dlError ) exit(1);
	 
	  rc = (*Function)(first,second);
	  printf("dlTest 5-div return-%s- \n", dlError);
	 
	  rc = dlclose(FunctionLib);
	  dlError = dlerror();
	  printf("dlTest 6-Close handle return-%s-\n",dlError); 
	  if( rc ) exit(1);
	  break;
   }
   return 0;
}
 
