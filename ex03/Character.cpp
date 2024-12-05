/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:59:28 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/05 14:28:31 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() 
{
	for (int i = 0; i < this->_slots; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character default constructor called." << std::endl;
}

Character::Character(const Character& copy)
{
	for (int i = 0; i < this->_slots; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character copy constructor called." << std::endl;
	*this = copy;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < this->_slots; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character constructor with name parameter called." << std::endl;	
}

Character::~Character()
{
	for (int i = 0; i < this->_slots; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	std::cout << "Character destructor called." << std::endl;	
}
Character& Character::operator=(const Character& copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		for (int i = 0; i < this->_slots; i++)
		{
			if (this->_inventory[i] != NULL)
			{
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
		}
		for (int i = 0; i < this->_slots; i++)
		{
			if (copy._inventory[i] != NULL)
				this->_inventory[i] = copy._inventory[i]->clone();
		}
	}
	std::cout << "Character assignment operator called." << std::endl;
	return *this;
}

const std::string& Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "I cannot find any materia !" << std::endl;
	}
	for (int i = 0; i < this->_slots; i++)
	{
		if(this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << "The " << this->_name << " got equipped with " << m->getType()
			<< " at slot " << i + 1 << " !" << std::endl;
			return ;
		}
	}
	std::cout << "I cannot carry any more materia !" << std::endl;
}
void Character::unequip(int idx)
{
	if ((idx <= 0 && idx < this->_slots) || this->_inventory[idx] != NULL)
	{
		std::cout << this->_name << " tried to unequip some materia from slot " 
		<< idx + 1 << " !" << std::endl;
	}
}
void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 && idx < _slots)
		std::cout << "This is not a valid index !" << std::endl;
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	else
		std::cout << "There is nothing to use with that index !" << std::endl;
	return ;
}