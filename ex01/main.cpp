/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:57:23 by jetan             #+#    #+#             */
/*   Updated: 2025/05/21 18:08:07 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	OrthodoxCanonicalForm()
{
	Form dc;
	Form pc("Foo", 1, 1);
	Form cc(pc);
	Form cao = cc;
		
	std::cout << dc << std::endl;
	std::cout << pc << std::endl;
	std::cout << cc << std::endl;
	std::cout << cao << std::endl;
}


int main()
{
	OrthodoxCanonicalForm();
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
	// try
	// {
	// 	Form x("a", 1, 1);
		
	// 	std::cout << x << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << '\n';
	// }
	
}
