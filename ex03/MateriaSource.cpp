/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:26:09 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/04 15:21:22 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < this->_slots; i++)
		this->_recipes[i] = NULL;
	return ;
	std::cout << "MateriaSource default constructor called" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < this->_slots; i++)
		this->_recipes[i] = NULL;
	return ;
	std::cout << "MateriaSource copy constructor called" << std::endl;	
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_slots; i++)
	{
		if (this->_recipes[i] != NULL)
		{
			delete this->_recipes[i];
			this->_recipes[i] = NULL;
		}
	}
	std::cout << "MateriaSource destructor called" << std::endl;
	return ;
}
MateriaSource& MateriaSource::operator=(const MateriaSource& copy)
{
	for (int i = 0; i < this->_slots; i++)
	{
		if (this->_recipes[i] != NULL)
		{
			delete this->_recipes[i];
			this->_recipes[i] = NULL;
		}
	}
	for (int i = 0; i < this->_slots; i++)
	{
		if (copy._recipes[i] != NULL)
			this->_recipes[i] = copy._recipes[i]->clone();
	}
	return (*this);
	std::cout << "MateriaSource assignment operator called" << std::endl;
}


void MateriaSource::learnMateria(AMateria*)
{
	
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	
}	