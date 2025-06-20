/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:16:34 by jetan             #+#    #+#             */
/*   Updated: 2025/06/12 15:14:35 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), target("")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): AForm("ShrubberyCreationForm", 145, 137), target(_target)
{
	std::cout << "ShrubberyCreationForm parameter constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): AForm(other)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	
	if (this != &other)
	{
		this->target = other.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

//getter
std::string ShrubberyCreationForm::getTarget() const { return target; }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();
	std::string filename = target + "_shrubbery";//file name
	std::ofstream ofs(filename.c_str());//create and open a file
	if (!ofs)
		std::cerr << "Error\n create file!" << std::endl;
		
	std::string ASCIItrees = 
	"               -@               \n"
	"              .##@              \n"
	"             .####@             \n"
	"             @#####@            \n"
	"           . *######@           \n"
	"          .##@o@#####@          \n"
	"         /############@         \n"
	"        /##############@        \n"
	"       @######@**%######@       \n"
	"      @######`     %#####o      \n"
	"     @######@       ######%     \n"
	"   -@#######h       ######@.`   \n"
	"  /#####h**``       `**%@####@  \n"
	" @H@*`                    `*%#@ \n"
	"*`                            `*\n";
	ofs << ASCIItrees;//write to the file
	ofs.close();//close the file
}
