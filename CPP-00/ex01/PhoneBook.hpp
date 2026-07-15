/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 21:09:14 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/15 20:38:52 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _phones[8];
	public:
		PhoneBook();
		void		add(Contact &phone, int i);
		// Contact	search(int index);
		void		printPhones();
		Contact	getPhones() const[] { return _phones};
};


#endif
