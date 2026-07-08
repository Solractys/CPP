/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 21:09:14 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/07 22:09:28 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <vector>

class PhoneBook {
	// armazenar um array de contacts
	public:
	std::vector<Contact> PhoneList[8];
	// export no método de ADD
	void	addPhoneNumber(Contact contact, PhoneBook list);
	// get da lista de contacts
	Contact getContactList(void);
};

