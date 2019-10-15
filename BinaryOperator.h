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
