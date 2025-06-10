/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:22:59 by jetan             #+#    #+#             */
/*   Updated: 2025/06/10 20:54:13 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	// try
	// {
	// 	Bureaucrat b("", 44);
	// 	RobotomyRequestForm formb("");
	// 	b.signForm();
	// 	formb.execute();
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	Bureaucrat c("", 4);
	// 	PresidentialPardonForm formc("");
	// 	c.signForm();
	// 	formc.execute();
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << "\n-------------invalid-------------" << std::endl;
	// try
	// {
	// 	Bureaucrat jim("Jim", 150);
	// 	RobotomyRequestForm formb("house");
	// 	// jim.signForm(formb);
	// 	formb.execute(jim);
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
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
	// OrthodoxCanonicalForm();
	testSignForm();
}