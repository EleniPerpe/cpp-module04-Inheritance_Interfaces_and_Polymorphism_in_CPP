/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:18:34 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/04 15:47:00 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		static const size_t _slots = 4;
		AMateria* _recipes[_slots];
		
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		~MateriaSource();
		MateriaSource& operator=(const MateriaSource& copy);
		

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);	
};