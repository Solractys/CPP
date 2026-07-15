/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:07:52 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/15 20:40:59 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : _firstName(""), _lastName(""), _nickname(""), _phone(""), _darkSecret(""), _id(0) {}

Contact::Contact(
	const std::string& firstName,
	const std::string& lastName,
	const std::string& nickname,
	const std::string& phone,
	const std::string&  darkSecret,
	const int		id
) : _firstName(firstName), _lastName(lastName),_nickname(nickname), _phone(phone), _darkSecret(darkSecret), _id(id) {}

Contact::~Contact() {}

std::string	Contact::getFirstName() const { return _firstName; }
std::string	Contact::getLastName() const { return _lastName; }
std::string	Contact::getNickname() const { return _nickname; }
std::string	Contact::getPhone() const { return _phone; }
std::string	Contact::getDarkSecret() const { return _darkSecret; }
int			Contact::getUserId() const { return _id; }
