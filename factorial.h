int factorial(int a)
{

	int c=1;
	if(a>=0)
	{
		if(a==0)
		{
			c=1;
		}
  	else
  	{
  		for(i=1;i<=a:i++)
  		{
  			c=c*i;
  		}
  	}
		return c;
	}
	return -1;
}
