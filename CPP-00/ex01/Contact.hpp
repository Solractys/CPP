/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 21:04:22 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/15 20:37:33 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phone;
		std::string _darkSecret;
		int			_id;
	public:
		Contact();
		Contact(
			const std::string& firstName, 
			const std::string& lastName,
			const std::string& nickname,
			const std::string& phone,
			const std::string& darkSecret,
			int id
		);
		~Contact();
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhone() const;
		std::string getDarkSecret() const;
		int			getUserId() const;
};

#endif
