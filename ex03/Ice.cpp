/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:45:21 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/04 12:08:53 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice default contructor called" << std::endl;
}

Ice::Ice(const Ice& copy) 
{
	*this = copy;
	std::cout << "Ice copy contructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& copy) 
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "Ice assignement operator called" << std::endl;
	return *this;
}

Ice::~Ice() 
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone(void) const
{
	AMateria* iceClone = new Ice();
	return iceClone;
}

void Ice::use(ICharacter& target) 
{
	std::cout << "* shoots an ice bolt at <name> *";
}