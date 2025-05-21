/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:57:23 by jetan             #+#    #+#             */
/*   Updated: 2025/05/20 16:40:16 by jetan            ###   ########.fr       */
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
	// Bureaucrat valid("Bob", 2);
	
	// std::cout << valid << std::endl;
	// try
	// {
	// 	Bureaucrat invalid("Jim", 151);
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	try
	{
		Bureaucrat x("a", 1);
		x.incrementGrade();
		
		std::cout << x << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
}
