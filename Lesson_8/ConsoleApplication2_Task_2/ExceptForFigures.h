#pragma once
#include <exception>
#include <iostream>

class ExceptForFigures : public std::domain_error
{
private:
	const char* message;
public:
	ExceptForFigures(const char* message);
	const char* what() const override;
};