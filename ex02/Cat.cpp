/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:38:46 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/03 16:52:01 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	this->_brain = new Brain(*copy._brain);
	std::cout << "Cat copy constructor called" << std::endl;
	// *this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Cat assignment operator called" << std::endl;
	Animal::operator = (copy);
	*this->_brain = *copy._brain;
	// if (this != &copy)
	// 	this->type = copy.type;
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}

const std::string Cat::getIdea(size_t index) const
{
	if (index < 100)
		return _brain->getIdea(index);
	else
	{
		std::cout << "Cat's brain has only 100 ideas" << std::endl;
		return NULL;
	}
}

void Cat::setIdea(size_t index, const std::string& idea)
{
	if (index < 100)
		_brain->setIdea(idea, index);
	else
		std::cout << "Cat's brain has only 100 ideas" << std::endl;
}
