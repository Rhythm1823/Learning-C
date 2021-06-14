//WAP that reads a co-ordinate point of rectangular co-ordinate system
 //and display the appropriate message after checking where the point lies on the co-ordinate system.
 #include <stdio.h>
 int main()
 {
 float x,y;
 printf(" enter the position x and y \n");
 scanf("%f%f", &x,&y);
 if (x>0 && y>0)
 {
 	printf(" first quadrant");
  } 
  else if(x>0 && y<0)
  {
  	printf(" fourth quadrant");
  	 }
  	 else if(x<0 && y>0)
  	 {
  	 	printf("second quadrant");
	   }
	   else if(x<0 && y<0)
	   {
	   	printf(" third quadrant");
	   }
	   else if(x>0 && y==0)
	   {
	   	printf(" +ve x-axis");
	   }
	   else if (x<0 && y==0)
	   {
	   	printf(" -ve x-axis");
	   }
	   else if (y>0 && x==0)
	   {
	   	printf(" +ve y -axis");
	   }
	   else if(y<0 && x==0)
	   {
	   	printf(" -ve y-axis");
	   }
	   else
	   {
	   	printf(" origin");
	   }
	   return 0;
}
