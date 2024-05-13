#pragma once
#include <iostream>

#ifdef DINLIB_RACE
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif

namespace DinLib 
{
	class ground_based 
	{
	public:
		int speed;
		int time_to_rest;
	};


	class camel : ground_based 
	{
	public:
		camel()
		{
			this->speed = 10;
			this->time_to_rest = 30;
		}
		MATHPOWERLIBRARY_API double function_camel(int long_distance) const;
	};

	class fast_camel : ground_based
	{
	public:
		fast_camel()
		{
			this->speed = 40;
			this->time_to_rest = 10;
		}
		MATHPOWERLIBRARY_API double function_fast_camel(int long_distance) const;
	};

	class centaur : ground_based
	{
	public:
		centaur()
		{
			this->speed = 15;
			this->time_to_rest = 8;
		}
		MATHPOWERLIBRARY_API double function_centaur(int long_distance) const;
	};

	class boots_rover : ground_based
	{
		boots_rover()
		{
			this->speed = 6;
			this->time_to_rest = 60;
		}
	//	double function_boots_rover(int long_distance);
	};


	class air
	{
	public:
		double speed;
		double time_to_rest;
	};
}