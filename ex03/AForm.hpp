/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:58:47 by jetan             #+#    #+#             */
/*   Updated: 2025/06/05 14:48:07 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;

//abstract class
class AForm
{
	private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
	public:
		AForm();
		AForm(std::string _name, int _gradeTosign, int _gradeToExecute);
		AForm(const AForm &other);
		AForm &operator=(const AForm &other);
		~AForm();
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(Bureaucrat const &bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;//pure virutal function
		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw();
		};
		class FormNotSignedException: public std::exception
		{
			public:
				const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const AForm &obj);

#endif
