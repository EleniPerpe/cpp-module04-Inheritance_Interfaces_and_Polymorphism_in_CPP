/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:17:50 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/04 15:46:05 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
	protected:
		std::string _type;


	public:
	
		AMateria();
		AMateria(const AMateria& copy);
		AMateria(const std::string& type);
		AMateria& operator=(const AMateria& copy);
		virtual ~AMateria();


		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
	
		virtual void use(ICharacter& target);
};