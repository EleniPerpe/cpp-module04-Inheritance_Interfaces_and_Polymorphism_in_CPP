/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:18:01 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/05 14:01:03 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

#pragma once

class Character : public ICharacter
{
	private:
		static const int _slots = 4;
		std::string _name;
		AMateria* _inventory[_slots];
	public:
		Character();
		Character(const Character& copy);
		Character(std::string name);
		~Character();
		Character& operator=(const Character& copy);
	
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};