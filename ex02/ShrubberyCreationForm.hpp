/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:39:52 by jetan             #+#    #+#             */
/*   Updated: 2025/06/03 16:40:23 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();//Default constructor
		ShrubberyCreationForm(std::string _target);//Parameter constructor
		ShrubberyCreationForm(const ShrubberyCreationForm &other);//copy constructor
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);//copy assignment operator
		~ShrubberyCreationForm();//Destructor
		std::string getTarget() const;
		void execute(Bureaucrat const & executor) const;
};

#endif
