/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:45:21 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/05 14:17:06 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default contructor called" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy)
{
	std::cout << "Ice copy contructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& copy) 
{
	AMateria::operator = (copy);
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
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}