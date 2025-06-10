/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:02:58 by jetan             #+#    #+#             */
/*   Updated: 2025/06/09 17:25:20 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	// private:
	// 	AForm *createShrubberyCreationForm(const std::string &target);
	// 	AForm *createRobotomyRequestForm(const std::string &target);
	// 	AForm *createPresidentialPardonForm(const std::string &target);
	public:
		Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		~Intern();
		AForm *makeForm(const std::string &name, const std::string &target);
};

#endif