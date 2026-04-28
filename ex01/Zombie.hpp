#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie{
	public:
		Zombie();
		Zombie(const Zombie& z);
		Zombie(std::string name);
		~Zombie();
		void announce( void );
	private:
		std::string _name;
};

#endif