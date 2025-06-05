/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:03:12 by jetan             #+#    #+#             */
/*   Updated: 2025/06/05 17:55:39 by jetan            ###   ########.fr       */
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
