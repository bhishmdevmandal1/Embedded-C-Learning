
#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);



int main(void)
{
	int8_t code , choice;
	float a, b , r , h;
	float area;

do{
	printf("Area calculation program\n");
	printf("Circle --> c\n");
	printf("Triangle --> t\n");
	printf("Trapezoid --> z\n");
	printf("Square --> s\n");
	printf("Rectangle --> r\n");
	printf("Enter the code here:");
	scanf("%c",&code);

	switch(code){
	case 'c':
		printf("circle area calculation\n");
		printf("Enter radius(r) value :");
		scanf("%f",&r);
		if( r <= 0){
			printf("radius must be greater than Zero\n");
			area = -1;
		}else{
		    area = 3.1415 * r * r;
		}
		break;
	case 't':
		printf("Triangle area calculation\n");
		printf("Enter base(v) value :");
		scanf("%f",&b);
		printf("Enter height(h) value :");
		scanf("%f",&h);
		if( (b <= 0) || (h <= 0)){
			printf("base or height must be greater than Zero\n");
			area = -1;
		}else{
		area = (b * h) / 2;
		}
		break;

	case 'z':
		printf("Trapezoid area calculation\n");
		printf("Enter base1(a) value :");
		scanf("%f",&a);
		printf("Enter base2(b) value :");
		scanf("%f",&b);
		printf("Enter height(h) value :");
		scanf("%f",&h);
		if( (a <= 0) || (b <= 0) || (h <= 0)){
			printf("base or height must be greater than Zero\n");
			area = -1;
		}else{
		area = ((a + b)/2) * h;
		}
		break;

	case 's':
		printf("Square area calculation\n");
		printf("Enter side(a) value :");
		scanf("%f",&a);
		if( a <= 0){
			printf("side must be greater than Zero\n");
			area = -1;
		}else{
		area = a * a;
		}
		break;
	case 'r':
		printf("Rectangle area calculation\n");
		printf("Enter width(w) value :");
		scanf("%f",&a);
		printf("Enter length(l) value :");
		scanf("%f",&b);
		if( (a <= 0) || (b <= 0)){
			 printf("width or length must be greater than Zero\n");
			 area = -1;
		}else{
		area = a * b ;
		}
		break;
	default:
		printf("Invalid input\n");
		area = -1;

	}//end of body of switch

	if(area > 0){
		printf("Area = %0.3f\n",area);
	}

	printf("Do you want to calculate another area? Y/y\n");
	scanf(" %c", &choice);
	while(getchar() != '\n');

  } while(choice== 'y' || choice == 'Y');

	wait_for_user_input();
	return 0;
}

void wait_for_user_input(void)
	{
		printf("Press enter key to exit this application\n");
		while(getchar() != '\n')
		{
		  //just read the input buffer & do nothing(for command prompt)
		}
		getchar();
	}













