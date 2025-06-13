/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:57:23 by jetan             #+#    #+#             */
/*   Updated: 2025/06/13 16:42:34 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void test_signform()
{
	std::cout << "\n-------------sign form-----------" << std::endl;
	try
	{
		Bureaucrat bob("Bob", 50);
		Form forma("FormA", 100, 50);
		
		bob.signForm(forma);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n-------------invalid sign form-----------" << std::endl;
	try
	{
		Bureaucrat jim("Jim", 120);
		Form formb("FormB", 100, 50);
		
		jim.signForm(formb);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void decrement_grade()
{
	std::cout << "\n-------------decrement grade-----------" << std::endl;
	try
	{
		Bureaucrat a("Jim", 148);
		for (int i = 0; i < 2; i++)
		{
			a.decrementGrade();
			std::cout << a << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat b("Jim", 148);
		for (int i = 0; i < 3; i++)
		{
			b.decrementGrade();
			std::cout << b << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}

void increment_grade()
{
	std::cout << "\n-------------increment grade-----------" << std::endl;
	try
	{
		Bureaucrat a("Bob", 3);
		for (int i = 0; i < 2; i++)
		{
			a.incrementGrade();
			std::cout << a << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat b("Bob", 3);
		for (int i = 0; i < 3; i++)
		{
			b.incrementGrade();
			std::cout << b << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

}

void invalid_grade()
{
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
	std::cout << "----------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat invalid2("Jim", 0);
		std::cout << invalid2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void valid_grade()
{
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
}

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
	OrthodoxCanonicalForm();
	valid_grade();
	invalid_grade();
	increment_grade();
	decrement_grade();
	test_signform();
}
