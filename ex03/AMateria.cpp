/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:17:52 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/04 12:01:58 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() 
{
	std::cout << "AMateria default contructor called" << std::endl;
}

AMateria::AMateria(const AMateria&)
{
	std::cout << "AMateria copy contructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	// this->_type = type;
	std::cout << "AMateria with type parameter contructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria&)
{
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

void AMateria::use(ICharacter& target) {}