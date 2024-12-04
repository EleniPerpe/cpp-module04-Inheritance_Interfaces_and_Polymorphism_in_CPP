/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:45:21 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/04 12:08:41 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure default contructor called" << std::endl;
}

Cure::Cure(const Cure& copy) 
{
	*this = copy;
	std::cout << "Cure copy contructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& copy) 
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "Cure assignement operator called" << std::endl;
	return *this;
}

Cure::~Cure() 
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone(void) const
{
	AMateria* cureClone = new Cure();
	return cureClone;
}

void Cure::use(ICharacter& target) 
{
	std::cout << "* heals <name>’s wounds *";
}