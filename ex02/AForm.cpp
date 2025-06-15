/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:58:25 by jetan             #+#    #+#             */
/*   Updated: 2025/06/15 17:51:02 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): name("Default name"), isSigned(false), gradeToSign(144), gradeToExecute(136)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string _name, int _gradeToSign, int _gradeToExecute): name(_name)
, isSigned(false), gradeToSign(_gradeToSign), gradeToExecute(_gradeToExecute)
{
	std::cout << "AForm parameter constructor called" << std::endl;
	
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &other): name(other.name), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	std::cout << "AForm copy constructor called" << std::endl;
	
	*this = other;
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		std::cout << "AForm copy assignment operator called" << std::endl;
		this->isSigned = other.isSigned;
	}
	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

//getter
std::string AForm::getName() const { return name; }
bool AForm::getIsSigned() const { return isSigned; }
int AForm::getGradeToSign() const { return gradeToSign; }
int AForm::getGradeToExecute() const { return gradeToExecute; }

//Remember, grade 1 is higher than grade 2.
void AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= gradeToSign)//if the bureaucrat’s grade is high enough
		isSigned = true;//changes the form status to signed
	else
		throw GradeTooLowException();//If the grade is too low
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "Form not signed";
}

std::ostream &operator<<(std::ostream &os, const AForm &obj)
{
	os << obj.getName() << obj.getIsSigned() << obj.getGradeToSign() << obj.getGradeToExecute();
	return os;
}
