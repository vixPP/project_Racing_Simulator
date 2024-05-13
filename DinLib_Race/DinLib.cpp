#include <iostream>
#include "DinLib.h"

namespace DinLib
{
	double camel :: function_camel(int long_distance) const
	{
		int time_out_1 = 5, time_out_all = 8, NumStops = 0;
        double x = 0; 
        double Totaltime = 0; // Время прохождение дистанции без остоновок

            Totaltime = static_cast <double> (long_distance) / speed;
            NumStops = (long_distance / speed) / time_to_rest;

            if (NumStops == 0) 
            {
                x = Totaltime;
                return x;
            }

            else if (NumStops == 1) 
            {
                x = Totaltime + time_out_1;
                return x;
            }

            else if (NumStops > 1) 
            {

                x = Totaltime + time_out_1;
                for (int i = 1; i < NumStops; ++i) {
                    x += time_out_all;
                }
                return x;
            }
            
            return 0;
        }


    double fast_camel::function_fast_camel(int long_distance) const
    {
        int time_out_1 = 5, time_out_2 = 6.5, time_out_all = 8, f = 0;
        double x = 0, y = 0;

        y = static_cast <double> (long_distance) / speed;
        f = (long_distance / speed) / time_to_rest;

        if (f == 0) {
            x = y;
            return x;
        }

        else if (f == 1) {
            x = y + time_out_1;
            return x;
        }

        else if (f == 2) {
            x = y + time_out_1 + time_out_2;
            return x;
        }

        else if (f > 2) {

            x = y + time_out_1 + time_out_2;
            for (int i = 2; i < f; ++i) {
                x += time_out_all;
            }
            return x;
        }
        return 0;
    }

    double centaur::function_centaur(int long_distance) const
    {
        int time_out_all = 2, f = 0;
        double x = 0, y = 0;

        y = static_cast <double> (long_distance) / speed;
        f = (long_distance / speed) / time_to_rest;

        if (((long_distance / speed) % time_to_rest) == 0) {
            f -= 1;
        }

        if (f == 0) {
            x = y;
            return x;
        }

        else if (f > 0) {
            for (int i = 0; i < f; ++i) {
                x += time_out_all;
            }
            x += y;
            return x;
        }
        return 0;


    } 
    
}