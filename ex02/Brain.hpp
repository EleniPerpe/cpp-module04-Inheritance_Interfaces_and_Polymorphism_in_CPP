/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:04:56 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/03 13:58:03 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef NOTBRAIN_HPP
#define NOTBRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string _idea[100];
		
	public:
		Brain();
		Brain(const Brain& copy);
		virtual ~Brain();
		Brain& operator=(const Brain& copy);

		const std::string& getIdea(size_t &index) const;
		void setIdea(std::string const &idea, size_t &index);
};

#endif