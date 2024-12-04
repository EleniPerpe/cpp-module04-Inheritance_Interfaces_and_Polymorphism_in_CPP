/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:17:52 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/04 15:52:38 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Unknown")
{
	std::cout << "AMateria default contructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
	std::cout << "AMateria copy contructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria with type parameter contructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& copy)
{
	if (this != &copy)
		this->_type = copy._type;
	std::cout << "AMateria assignement operator called" << std::endl;
	return *this;
}

AMateria::~AMateria() 
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const 
{
	return this->_type;
}

void AMateria::use(ICharacter& target) 
{
	std::cout << target.getName() << " is using an unknown materia !" << std::endl;
}