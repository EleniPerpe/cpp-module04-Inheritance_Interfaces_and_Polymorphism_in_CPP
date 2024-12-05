/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:26:09 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/05 14:12:07 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < this->_slots; i++)
		this->_recipes[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
	return ;
}
MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < this->_slots; i++)
		this->_recipes[i] = NULL;
	*this = copy;
	std::cout << "MateriaSource copy constructor called" << std::endl;	
	return ;
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
	std::cout << "MateriaSource assignment operator called" << std::endl;
	return (*this);
}


void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
	{
		std::cout << "I cannot find any materia !" << std::endl;
		return ;
	}
	for (int i = 0; i < this->_slots; i++)
	{
		if (this->_recipes[i] == NULL)
		{
			this->_recipes[i] = m;
			std::cout <<"MateriaSource learned the " << m->getType()
				<< " materia recipe." << std::endl;
			return ;
		}
	}
	std::cout << "MateriaSource can't learn any more materia." << std::endl;
	delete m;
	return ;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_slots; i++)
	{
		if (this->_recipes[i]
			&& this->_recipes[i]->getType() == type)
		{
			std::cout << "MateriaSource creating " << type
				<< " materia." << std::endl;
			return (this->_recipes[i]->clone());
		}
	}
	std::cout << "MateriaSource does not know the type \""
		<< type << "\"." << std::endl;
	return (NULL);
}