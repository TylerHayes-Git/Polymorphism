# Polymorphism
An assignment for my object oriented class.
My first attempt at polymorphism.

## Main File:

```C++
//Main file: Assignment_3.cpp by Tyler Hayes
#include "BinaryOperator.h"
#include <iostream>

int main(){
	
Test();

return 0;
}
```

## Header File:

```C++
//Header file: BinaryOperator.h by Tyler Hayes
#ifndef BINARYOPERATOR_H
#define BINARYOPERATOR_H

#include<iostream>
#include<string>

class BinaryOperator {
 	public:
		BinaryOperator ( double op1, double op2 ) : fOp1 ( op1 ), fOp2 ( op2 ) {}
		virtual double DoOp () const = 0;
 	protected:
		const double fOp1;
		const double fOp2;
}; // class BinaryOperator

class Adder : public BinaryOperator {
	 public:
		Adder ( double op1, double op2 ) : BinaryOperator ( op1, op2 ) {}
		virtual double DoOp () const{
			
			double sum = fOp1 + fOp2;
			
			std::cout << "The sum is " << sum << ".\n";
		
		};
}; // class Adder

class Subtractor : public BinaryOperator {
	 public:
		Subtractor ( double op1, double op2 ) : BinaryOperator ( op1, op2 ) {}
		virtual double DoOp () const{
		
			double difference = fOp1 - fOp2;
			
			std::cout << "The difference is " << difference << ".\n";
		};
}; // class Subtractor

class Multiplier : public BinaryOperator {
	 public:
		Multiplier ( double op1, double op2 ) : BinaryOperator ( op1, op2 ) {}
		virtual double DoOp () const{
		
			double result = fOp1 * fOp2;
			
			std::cout << "The result is " << result << ".\n";
		};
}; // class Multiplier

class Divider : public BinaryOperator {
	 public:
		Divider ( double op1, double op2 ) : BinaryOperator ( op1, op2 ) {}
		virtual double DoOp () const{
		
			if ( fOp2 == 0 ){
				
				std::cout << "Can't divide by zero.\n";
				
			}
			
			else{
				
				double quotient = fOp1 / fOp2;
				
				std::cout << "The quotient is " << quotient << ".\n";
			}
				
		};
}; // class Divider

void Test ();

#endif
```

## CPP File:

```C++
//Cpp File: BinaryOperator.cpp by Tyler Hayes

#include "BinaryOperator.h"
#include<iostream>

const std::size_t num = 4;

BinaryOperator* operators[] = {

	new Adder( 8, 9 ),
	new Subtractor( 8, 9 ),
	new Multiplier( 8, 9 ),
	new Divider( 8, 0 )
};


void Test (){

		for ( int i = 0; i < sizeof( operators ); i++ ){
			
			operators[ i ] -> DoOp();
		};
}
```
