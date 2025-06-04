/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:02:09 by jetan             #+#    #+#             */
/*   Updated: 2025/06/04 20:10:16 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), target("")
{
	std::cout << "RobotomyRequestForm default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target): AForm("RobotomyRequestForm", 72, 45), target(_target)
{
	std::cout << "RobotomyRequestForm parameter constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other)
{
	std::cout << "RobotomyRequestForm copy constructor" << std::endl;
	
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	std::cout << "RobotomyRequestForm copy assignment operator" << std::endl;
	
	if (this != &other)
	{
		this->target = other.target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
		std::cout << "RobotomyRequestForm destructor" << std::endl;
}

//getter
std::string RobotomyRequestForm::getTarget() const { return target; }

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw ;
	if (getGradeToExecute() > getGradeToExecute())
		throw GradeTooLowException();
	int randomNumber = rand() % 2;//generates a random integer that is either 0 or 1
	if (randomNumber == 0)
	{
		std::cout << target << " has been robotomized successfully 50% of the time" << std::endl;
	}
	else
	{
		std::cout << "robotomy failed" << std::endl;
	}
}