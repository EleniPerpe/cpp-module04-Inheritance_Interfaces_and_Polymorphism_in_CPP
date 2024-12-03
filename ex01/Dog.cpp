/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:38:46 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/03 15:38:09 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	this->_brain = new Brain(*copy._brain);
	std::cout << "Dog copy constructor called" << std::endl;
	// *this = copy;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Dog assignment operator called" << std::endl;
	Animal::operator = (copy);
	*this->_brain = *copy._brain;
	// if (this != &copy)
	// 	this->_type = copy._type;
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}

const std::string Dog::getIdea(size_t index) const
{
	if (index < 100)
		return _brain->getIdea(index);
	else
	{
		std::cout << "Dog's brain has only 100 ideas" << std::endl;
		return NULL;
	}
}

void Dog::setIdea(size_t index, const std::string& idea)
{
	if (index < 100)
		_brain->setIdea(idea, index);
	else
		std::cout << "Dog's brain has only 100 ideas" << std::endl;
}