#include <stdio.h>
int main(void) {
	int console;
	float  rate;
	float salary, ohours, taxes;
  
	printf("*********************************************************************\n");
	printf("Введите число, соответствующее желаемой тарифной ставке или действию:\n");
	printf("1)$8.75/ч                     2)$9.33/ч                              \n");
	printf("3)$10.00/ч                    4)$11.20/ч                             \n");
	printf("5)Выход                                                              \n");
	printf("*********************************************************************\n");
  
	scanf("%i", &console);
	 switch(console) {
		case 1:
			rate = 8.75;
		break;
		case 2:
			rate = 9.33;
		break;
		case 3:
			rate = 10.00;
		break;
		case 4:
			rate = 11.20;
		break;
		case 5:
			printf("Выход");
			return 0;
		break;
    default:
		 printf("Выберите число от 1 до 5\n");
		return 0;
    break;
	}
  
	printf("Общее число часов: ");
	scanf("%f", &ohours);
	if (chasy > 40) {
		 salary = ohours*rate + (ohours-40)*1.5 ;
	} 
  
	else {
		salary = ohours*rate;
	}
	if (salary <= 300) {
		taxes = salary *0.15;
	} 
  
	else if(salary > 300 && salary <=450) {
		taxes = 45 + (salary-300)*0.2;
	}	
  
	if (salary > 450) {
		taxes = 45 + 30 + (salary -450)*0.25;
	} 
  
  salary = salary - taxes;
  printf("Зарплата: $%g\n", salary);
  printf("Налоги: $%g", taxes);
  
  return 0;
}