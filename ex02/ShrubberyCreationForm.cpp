/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:16:34 by jetan             #+#    #+#             */
/*   Updated: 2025/06/03 18:46:57 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): target("")
{
	std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): target(_target)
{
	std::cout << "ShrubberyCreationForm parameter constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
	
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "ShrubberyCreationForm copy assignment operator" << std::endl;
	
	if (this != &other)
	{
		this->target = other.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor" << std::endl;
}

//getter
std::string ShrubberyCreationForm::getTarget() const { return target; }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw ;
	if (getGradeToExecute() > getGradeToExecute())
		throw GradeTooLowException();
	std::string filename = target + "_shrubbery";//file name
	std::ofstream ofs(filename);//create and open a file
	if (!ofs)
	{
		std::cerr << "Error create file" << std::endl;
	}
	std::string ASCIItrees = 
	"      /\      \n"
	"     /\*\     \n"
	"    /\O\*\    \n"
	"   /*/\/\/\   \n"
	"  /\O\/\*\/\  \n"
	" /\*\/\*\/\/\ \n"
	"/\O\/\/*/\/O/\\n"
	"      ||      \n"
	"      ||      \n"
	"      ||      \n";
	ofs << ASCIItrees;
}
