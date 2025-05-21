/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:58:25 by jetan             #+#    #+#             */
/*   Updated: 2025/05/21 17:03:43 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("Default name"), isSigned(false), gradeToSign(), gradeToExecute()
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string _name, int _gradeToSign, int _gradeToExecute): name(_name)
, isSigned(false), gradeToSign(_gradeToSign), gradeToExecute(_gradeToExecute)
{
	std::cout << "Form parameter constructor called" << std::endl;
	
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other): name(other.name), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
	
	*this = other;
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		std::cout << "Form copy assignment operator called" << std::endl;
		this->isSigned = other.isSigned;
	}
	return *this;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName() { return name; }
bool Form::getIsSigned() { return isSigned; }
int Form::getGradeToSign() { return gradeToSign; }
int Form::getGradeToExecute() { return gradeToExecute; }

