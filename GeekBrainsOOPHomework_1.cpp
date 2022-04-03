#include <iostream>
#include <cmath>
#include <cstdint>
#include <stack>
//День добрый.это будет pullrequest

using namespace std;
/*1. Создать класс Power, который содержит два вещественных числа. Этот класс должен иметь две переменные-члена для хранения этих вещественных чисел. 
Еще создать два метода: один с именем set, который позволит присваивать значения объявленным в классе переменным, второй — calculate,
который будет выводить результат возведения первого числа в степень второго числа. Задать значения этих двух чисел по умолчанию.*/

class Power
{
private:
	int Some_First_Num;
	int Some_Second_Num;
public:
	void Setter(int Some_First_Num, int Some_Second_Num) {
		this->Some_First_Num = Some_First_Num;
		this->Some_Second_Num = Some_Second_Num;
	}

	int Calculate() {
		return pow(Some_First_Num, Some_Second_Num);
	}
};
/*2. Написать класс с именем RGBA, который содержит 4 переменные-члена типа std::uint8_t: m_red, m_green, m_blue и m_alpha (#include cstdint для доступа к этому типу). 
Задать 0 в качестве значения по умолчанию для m_red, m_green, m_blue и 255 для m_alpha. 
Создать конструктор со списком инициализации членов, который позволит пользователю передавать значения для m_red, m_blue, m_green и m_alpha.
Написать функцию print(), которая будет выводить значения переменных-членов.*/

class Colored
{
private:
	uint8_t  m_red = 0, m_green = 0, m_blue = 0, m_alpha = 255;

public:
	Colored(uint8_t m_red, uint8_t m_green, uint8_t m_blue, uint8_t m_alpha)
	{
		SetColour(m_red, m_green, m_blue, m_alpha);
		
	}
	void SetColour(uint8_t m_red, uint8_t m_green, uint8_t m_blue, uint8_t m_alpha)
	{
		this->m_red = m_red;
		this->m_green = m_green;
		this->m_blue = m_blue;
		this->m_alpha = m_alpha;
	}
	void Print()
	{
		printf("\nRed : %d , Green : %d , Blue : %d , Alpha : %d\n", m_red, m_green, m_blue, m_alpha);
	}

};

/*3. Написать класс, который реализует функциональность стека. Класс Stack должен иметь:
• private-массив целых чисел длиной 10;
• private целочисленное значение для отслеживания длины стека;
• public-метод с именем reset(), который будет сбрасывать длину и все значения элементов на 0;
• public-метод с именем push(), который будет добавлять значение в стек. push() должен возвращать значение false, если массив уже заполнен, и true в противном случае;
• public-метод с именем pop() для вытягивания и возврата значения из стека. Если в стеке нет значений, то должно выводиться предупреждение;
• public-метод с именем print(), который будет выводить все значения стека.*/
class Stack
{
private:
	
	const int SIZE_OF_THE_MASSIVE = 10;
	int* PointerToTheMassive = new int[SIZE_OF_THE_MASSIVE];

public:
	void reset() {
		for ( int i = 0; i <SIZE_OF_THE_MASSIVE; i++)
		{
			this->PointerToTheMassive[i] = 0;
		}
	}
	
	void print()
	{
		cout << "(";
		for (int i = 0; i < SIZE_OF_THE_MASSIVE; i++)
		{
			if (this->PointerToTheMassive[i] != 0)
			{
				cout<< this->PointerToTheMassive[i] ;
			}
			
			
		}
		cout <<")" << endl;
	}
	

	bool push(int x)
	{
		for (size_t i = 0; i <10; i++)
		{
			if (this->PointerToTheMassive[i]==0)
			{
				this->PointerToTheMassive[i] = x;
				return true;
			}
			else if(i==9 && this->PointerToTheMassive[i]!=0)
			{
				return false;
			}
		}
		
	}
	void pop()
	{
		int i = 0;
		int x;
		if (this->PointerToTheMassive[0] == 0)
		{
			cout << "Sorry.Massive is empty";
		}
		else
		{
			while (this->PointerToTheMassive[i] != 0)
			{
				i++;
			}
			x = --i;
			this->PointerToTheMassive[x] = 0;

		}
		
	}
};




int main()
{
	/*1. Создать класс Power, который содержит два вещественных числа. Этот класс должен иметь две переменные-члена для хранения этих вещественных чисел.
Еще создать два метода: один с именем set, который позволит присваивать значения объявленным в классе переменным, второй — calculate,
который будет выводить результат возведения первого числа в степень второго числа. Задать значения этих двух чисел по умолчанию.*/
	int FirstTask1{2}, FirstTask2{2};
	Power A1;
	A1.Setter(FirstTask1, FirstTask2);
	cout << A1.Calculate();

	/*2. Написать класс с именем RGBA, который содержит 4 переменные-члена типа std::uint8_t: m_red, m_green, m_blue и m_alpha (#include cstdint для доступа к этому типу).
Задать 0 в качестве значения по умолчанию для m_red, m_green, m_blue и 255 для m_alpha.
Создать конструктор со списком инициализации членов, который позволит пользователю передавать значения для m_red, m_blue, m_green и m_alpha.
Написать функцию print(), которая будет выводить значения переменных-членов.*/

	
	Colored ThisObjGonnaBeRED(255, 0, 0, 0);
	Colored ThisObjGonnaBeGREEN(0, 255, 0, 0);
	Colored ThisObjGonnaBeBLUE(0, 0, 255, 0);

	ThisObjGonnaBeRED.Print();
	ThisObjGonnaBeGREEN.Print();
	ThisObjGonnaBeBLUE.Print();


	/*3. Написать класс, который реализует функциональность стека. Класс Stack должен иметь:
	• private-массив целых чисел длиной 10;
	• private целочисленное значение для отслеживания длины стека;
	• public-метод с именем reset(), который будет сбрасывать длину и все значения элементов на 0;
	• public-метод с именем push(), который будет добавлять значение в стек. push() должен возвращать значение false, если массив уже заполнен, и true в противном случае;
	• public-метод с именем pop() для вытягивания и возврата значения из стека. Если в стеке нет значений, то должно выводиться предупреждение;
	• public-метод с именем print(), который будет выводить все значения стека.*/
	
	Stack stack;
	stack.reset();
	stack.print();

	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();//3 7

	stack.pop();
	stack.pop();
	stack.print();//
	

	
	
	return 0;
}
//Спасибо

