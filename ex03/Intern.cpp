/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:03:12 by jetan             #+#    #+#             */
/*   Updated: 2025/06/10 16:34:38 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor" << std::endl;
}

Intern::Intern(const Intern &other)
{
	std::cout << "Intern copy constructor" << std::endl;
	
	(void)other;//class has no data
}

Intern &Intern::operator=(const Intern &other)
{
	std::cout << "Intern copy assignment operator" << std::endl;
	
	(void)other;//class has no data
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern destructor" << std::endl;
}

//instructions
AForm *createPresidentialPardonForm(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

AForm *createRobotomyRequestForm(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

AForm *createShrubberyCreationForm(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

//Function pointer
AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
	AForm *(*fun_ptr[])(const std::string &target) = {createShrubberyCreationForm,
	 createRobotomyRequestForm, createPresidentialPardonForm};//hold address of instructions
	
	std::string ptr_lst[] = {"shrubbery creation",
	 "robotomy request", "presidential pardon"};
	
	for (int i = 0; i < 3; i++)
	{
		if (name == ptr_lst[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return fun_ptr[i](target);
		}
	}
	std::cout << "Form name passed as parameter doesn’t exist!" << std::endl;
	return NULL;
}