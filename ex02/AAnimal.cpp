/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:38:46 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/03 16:51:09 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string& type) : _type(type) 
{
    std::cout << "Animal constructor with type \"" << type << "\" called" << std::endl;
}

Animal::Animal(const Animal& copy) : _type(copy._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
	// *this = copy;
}

Animal& Animal::operator=(const Animal& copy)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::setType(const std::string& type)
{
	this->_type = type;
}

std::string Animal::getType() const 
{
    return _type;
}

// void Animal::makeSound() const
// {
// 	std::cout << "Unknown sounds" << std::endl;
// }
