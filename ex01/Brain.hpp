/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:10:29 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/03 11:20:56 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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

		std::string const &getIdea(int const &index) const;
		void setIdea(std::string const &idea, int const &index);
};