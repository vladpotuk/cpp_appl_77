#ifndef digits_h
#define digits_h

#include "lib.h"
#include <iostream>
#include <Windows.h>


struct Digits
{
	static void move_coord(short x, short y)
	{
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD pos = { x, y };
		SetConsoleCursorPosition(output, pos);
	}
public:
	static void double_dots_empty(short x, short y) {
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << "     " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
	}
	static void double_dots(short x, short y) {
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << "     " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 080 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 080 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 080 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 080 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
	}
	static void zero(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << "  .d8888b.  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " d88P  Y88b " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 888    888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 888    888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 888    888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 888    888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " Y88b  d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "  \"Y8888P\"  " << std::endl;
	}

	static void one(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << "   d888    ";
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "  d8888    ";
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "    888    ";
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "    888    ";
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "    888    ";
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "    888    ";
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "    888    ";
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "  8888888  ";
	}
	static void two(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << " .d8888b.  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d88P  Y88b " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     888   " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "   .d88P   " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " .od888P\"  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d88P\"      " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "888\"       " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "888888888  " << std::endl;
	}
	static void three(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << " .d8888b.  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d88P  Y88b " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     .d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "    8888\"  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     \"Y8b. " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "888    888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "Y88b  d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " \"Y8888P\"  " << std::endl;
	}
	static void four(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << "    d8888  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "   d8P888  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "  d8P 888  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " d8P  888  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d88   888  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "8888888888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "      888  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "      888  " << std::endl;
	}
	static void five(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << "888888888  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "888        " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "888        " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "8888888b.  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     \"Y88b " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "       888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "Y88b  d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " \"Y8888P\"  " << std::endl;
	}
	static void six(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << " .d8888b.  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d88P  Y88b " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "888        " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "888d888b.  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "888P \"Y88b " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "888    888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "Y88b  d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " \"Y8888P\"  " << std::endl;
	}

	static void seven(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << "8888888888" << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "      d88P" << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "    d88P  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 88888888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "  d88P    " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " d88P     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d88P      " << std::endl;
	}
	static void eight(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << " .d8888b.  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d88P  Y88b " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "Y88b. d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " \"Y88888\"  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << ".d8P\"\"Y8b. " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "888    888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "Y88b  d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " \"Y8888P\"  " << std::endl;
	}
	static void nine(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << " .d8888b.  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d88P  Y88b " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "888    888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "Y88b. d888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " \"Y888P888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "       888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "Y88b  d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " \"Y8888P\"  " << std::endl;
	}
};
static void p(short x, short y)
{
	short x_cur = x;
	short y_cur = y;
	move_coord(x_cur, y_cur);
	std::cout << "aaaaaaaaaaaa" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "a::::::::::::a" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "aaaaaaaaa:::::a" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "a::::a" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "aaaaaaaa:::: : a" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "aa::::::::::::astd::cout << " << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "a::::aaaa::::::a" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "a::::a    a:::: : a" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "a::::a    a:::: : a" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	move_coord(x_cur, y_cur);
	y_cur += 1; move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "a::::::::::aa:: : a" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "aaaaaaaaaa  aaaa " << std::endl;
}
static void p(short x, short y)
{
	short x_cur = x;
	short y_cur = y;
	move_coord(x_cur, y_cur);
	std::cout << "p::::ppp:::::::::p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "ppppp   ppppppppp" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p::::ppp:::::::::p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p:::::::::::::::: : p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "pp::::::ppppp::::::p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p:::: : p     p:::: : p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p:::: : p     p:::: : p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p:::: : p     p:::: : p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p:::: : p    p::::::p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p:::: : ppppp:::::: : p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p::::::::::::::::p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p::::::::::::::pp" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p::::::pppppppp" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p:::: : p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p:::: : p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p:::::: : p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p:::::: : p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "p:::::: : p" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "ppppppppp" << std::endl;
}
static void m(short x, short y)
{
	short x_cur = x;
	short y_cur = y;
	move_coord(x_cur, y_cur);
	std::cout << "mmmmmmm    mmmmmmm" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "mm:::::::m  m:::::: : mm" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "m::::::::::mm::::::::::m" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "m::::::::::::::::::::::m" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "m:::: : mmm::::::mmm:::m" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "m::::m   m::::m   m::::m" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "m::::m   m::::m   m::::m" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "m::::m   m::::m   m::::m" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "m::::m   m::::m   m::::m" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "m::::m   m::::m   m::::m" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "m::::m   m::::m   m::::m" << std::endl;
	move_coord(x_cur, y_cur);
	y_cur += 1;
	std::cout << "mmmmmm   mmmmmm   mmmmmm" << std::endl;



#endif // !digits_h

