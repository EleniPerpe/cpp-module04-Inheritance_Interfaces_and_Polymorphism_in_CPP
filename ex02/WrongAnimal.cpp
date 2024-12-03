/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:38:46 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/03 10:18:56 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type) 
{
    std::cout << "WrongAnimal constructor with type \"" << type << "\" called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : _type(copy._type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	// *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::setType(const std::string& type)
{
	this->_type = type;
}

std::string WrongAnimal::getType() const 
{
    return _type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong unknown sounds" << std::endl;
}
