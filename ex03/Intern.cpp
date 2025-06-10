/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:03:12 by jetan             #+#    #+#             */
/*   Updated: 2025/06/09 18:07:04 by jetan            ###   ########.fr       */
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

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
	AForm *(*creators[])(const std::string &) = {createShrubberyCreationForm,
	 createRobotomyRequestForm, createPresidentialPardonForm};
	
	std::string ptr_lst[] = {"shrubbery creation",
	 "robotomy request", "presidential pardon"};
	
	for (int i = 0; i < 3; i++)
	{
		if (name == ptr_lst[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return creators[i](target);
		}
	}
	std::cout << "Form name passed as parameter doesn’t exist!" << std::endl;
	return NULL;
}