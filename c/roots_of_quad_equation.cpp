# include <math.h>
# include <stdio.h>
int main ()
{
	double a,b,c,d,root1,root2,r,i;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	d=b*b-4*a*c;
	
	if (d>0)
	{
		printf("Two real roots are \n");
		root1=(-b + sqrt(d))/(2*a);
		root2=(-b - sqrt(d))/(2*a);
		printf("root1 =%.2lf\n root2 =%.2lf\n",root1,root2);
	}
	else if(d==0)
	{
		printf("Two real & equal roots are\n");
		root1=root2=(-b )/(2*a);
		printf("root1 =%.2lf\n root2 =%.2lf\n",root1,root2);
	}
	else
	{
		printf("Two Imaginary roots are \n");
		r=-b /(2*a);
		i=-sqrt(-d)/(2*a);
	    printf("root1 =%.2lf+%.2lf\n root2 =%.2lf-%.2lf\n",r,i,r,i);
	}
}
