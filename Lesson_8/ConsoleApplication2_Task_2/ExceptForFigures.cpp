#include "ExceptForFigures.h"
#include <iostream>

ExceptForFigures::ExceptForFigures(const char* message) : std::domain_error(message)
{
	this->message = message;
}

const char* ExceptForFigures::what() const
{
	return message;
}