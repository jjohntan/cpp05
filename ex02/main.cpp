/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:22:59 by jetan             #+#    #+#             */
/*   Updated: 2025/06/05 16:24:01 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Bureaucrat bob("Bob", 45);
		ShrubberyCreationForm formA("home");
		bob.signForm(formA);
		formA.execute(bob);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Jim("Jim", 45);
		RobotomyRequestForm formB("home");
		Jim.signForm(formB);
		formB.execute(Jim);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}