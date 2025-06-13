/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:22:59 by jetan             #+#    #+#             */
/*   Updated: 2025/06/13 17:48:46 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void testIntern()
{
	Intern someRandomIntern;
	AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << "----------------------------------------------------" << std::endl;
	Intern someRandomInternA;
	AForm* a;
	a = someRandomInternA.makeForm("shrubbery creation", "home");
	std::cout << "----------------------------------------------------" << std::endl;
	Intern someRandomInternB;
	AForm* b;
	b = someRandomInternB.makeForm("presidential pardon", "office");
	std::cout << "----------------------------------------------------" << std::endl;

	delete rrf;
	delete a;
	delete b;
}

void testSignForm_invalid()
{
	std::cout << "\n-------------invalid-------------" << std::endl;
	try
	{
		Bureaucrat a("Bob", 150);
		RobotomyRequestForm forma("house");
		// a.signForm(forma);
		a.executeForm(forma);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat b("Jim", 151);
		RobotomyRequestForm formb("house");
		b.signForm(formb);
		formb.execute(b);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat c("Foo", 146);
		ShrubberyCreationForm formc("house");
		c.signForm(formc);
		formc.execute(c);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat d("Foo", 138);
		ShrubberyCreationForm formd("house");
		d.signForm(formd);
		formd.execute(d);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testSignForm()
{
	std::cout << "-------------valid---------------" << std::endl;
	try
	{
		Bureaucrat a("Bob", 136);
		ShrubberyCreationForm forma("house");
		a.signForm(forma);
		a.executeForm(forma);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat b("Jim", 44);
		RobotomyRequestForm formb("school");
		b.signForm(formb);
		b.executeForm(formb);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat c("Foo", 4);
		PresidentialPardonForm formc("office");
		c.signForm(formc);
		c.executeForm(formc);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void OrthodoxCanonicalForm()
{
	Bureaucrat dc;
	Bureaucrat pc("Foo", 150);
	Bureaucrat cc(pc);
	Bureaucrat cao = cc;
		
	std::cout << dc << std::endl;
	std::cout << pc << std::endl;
	std::cout << cc << std::endl;
	std::cout << cao << std::endl;
}

int main()
{
	OrthodoxCanonicalForm();
	testSignForm();
	testSignForm_invalid();
	testIntern();
}