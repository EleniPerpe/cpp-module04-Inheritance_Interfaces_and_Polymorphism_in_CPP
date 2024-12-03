/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:44:55 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/03 13:58:18 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
		std::cout << "Brain default constructor called" << std::endl;

}
Brain::Brain(Brain const &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;	
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;

}

Brain& Brain::operator=(const Brain& copy) {
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &copy) 
	{
        std::copy(copy._idea, copy._idea + 100, this->_idea);
    }
    return *this;
}

std::string const &Brain::getIdea(size_t &index) const
{
	if (index < 100)
		return this->_idea[index];
	return this->_idea[0];
}

void Brain::setIdea(std::string const &idea, size_t &index)
{
	if (index < 100)
		_idea[index] = idea;
}