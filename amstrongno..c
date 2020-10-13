#include<stdio.h>
#include<math.h>
void main()
{
	//to chk amstrng no.
	/*
int amstrng=0,r,temp,num,c=0;
printf("\nenter a no:");
scanf("%d",&num);
temp=num;
while(temp>0)
  {
temp=temp/10;
c++;
  }
  printf("\n%d is a %d digit number",num,c);
  temp=num;
  while(temp>0)
  {
  	r=temp%10;
  	printf("\n%d",r);
  	amstrng=amstrng+pow(r,c);
  	temp=temp/10;
  }
  if(num==amstrng)
  printf("\n%d is an amstrng number",num);
  else
  {
  	printf("\n%d is  not an amstrng number",num);
  }*/
 
 // to print amstrong no:
  int r,c=0,lmt,num,temp,amstrng;
  printf("\nenter a limit:");
  scanf("%d",&lmt);
  for(num=1;num<=lmt;num++)
  {
  	temp=num;
  	while(temp>0)
  	  {
  	  	temp=temp/10;
  	  	c++;
  	  	
  	  	//printf("%d",c);
	  }
  		temp=num;
  		amstrng=0;
  		while(temp>0)
  		{
		  
  		r=temp%10;
  		amstrng=amstrng+pow(r,c);
  		temp=temp/10;
  	    }
  	    if(amstrng==num)
  	    {
  	    	printf("\n%d",num);
		  }
  	    c=0;
  }
  
  
  
  
  
  
  
  
  
  
}

