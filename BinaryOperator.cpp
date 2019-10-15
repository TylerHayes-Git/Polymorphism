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
