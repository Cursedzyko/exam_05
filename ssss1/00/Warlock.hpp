#pragma once

#include <iostream>

class Warlock{
	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(const Warlock &obj);
		Warlock &operator=(const Warlock &obj);
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		const std::string &getName() const;
		const std::string &getTitle() const;

		void setTitle(std::string const &title);

		void introduce() const;
};