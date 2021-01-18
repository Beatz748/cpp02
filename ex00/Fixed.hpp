#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class	Fixed
{
	private:
		int					value;
		static const int	bits;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &right);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed&	operator=(Fixed &right);
		
};

#endif
