/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:03:58 by mbertin           #+#    #+#             */
/*   Updated: 2023/04/25 14:36:34 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

class Weapon
{
	public:
		Weapon();
		~Weapon();
		std::string const	&getType() const;
		void				setType(std::string type);
	private:
		std::string _type;
};
