/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:57:23 by jetan             #+#    #+#             */
/*   Updated: 2025/06/04 20:50:57 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	OrthodoxCanonicalForm()
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
	std::cout << "-------------valid grade---------------" << std::endl;
	try
	{
		Bureaucrat valid("Bob", 2);
		std::cout << valid << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-------------invalid grade-------------" << std::endl;
	try
	{
		Bureaucrat invalid("Jim", 151);
		std::cout << invalid << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-------------increment grade-----------" << std::endl;
	try
	{
		Bureaucrat a("Bob", 2);
		for (int i = 0; i < 2; i++)
		{
			std::cout << a << std::endl;
			a.incrementGrade();
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-------------decrement grade-----------" << std::endl;
	try
	{
		Bureaucrat b("Jim", 149);
		for (int i = 0; i < 2; i++)
		{
			std::cout << b << std::endl;
			b.decrementGrade();
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
