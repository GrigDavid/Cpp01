#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon{
	public:
		Weapon() = delete;
		Weapon(const std::string& weapon);
		Weapon(const Weapon& other);
		~Weapon();
		std::string& getType() ;
		void setType(std::string type);
	private:
		std::string _type;
};

#endif