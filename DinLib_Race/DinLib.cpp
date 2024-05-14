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
            NumStops = static_cast <double> (long_distance) / time_to_rest;

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
        int time_out_1 = 5, time_out_2 = 6.5, time_out_all = 8, NumStops = 0;
        double x = 0, Totaltime = 0;

        Totaltime = static_cast <double> (long_distance) / speed;
        NumStops = static_cast <double>(long_distance) / time_to_rest;

        if (NumStops == 0) {
            x = Totaltime;
            return x;
        }

        else if (NumStops == 1) {
            x = Totaltime + time_out_1;
            return x;
        }

        else if (NumStops == 2) {
            x = Totaltime + time_out_1 + time_out_2;
            return x;
        }

        else if (NumStops > 2) {

            x = Totaltime + time_out_1 + time_out_2;
            for (int i = 2; i < NumStops; ++i) {
                x += time_out_all;
            }
            return x;
        }
        return 0;
    }

    double centaur::function_centaur(int long_distance) const
    {
        int time_out_all = 2, NumStops = 0;
        double x = 0, Totaltime = 0;

        Totaltime = static_cast <double> (long_distance) / speed;
        NumStops = static_cast <double> (long_distance) / time_to_rest;

        x = NumStops * time_out_all + Totaltime;

        return x;

    } 

    double boots_rover::function_boots_rover(int long_distance) const
    {
        int time_out_1 = 10, time_out_all = 5, NumStops = 0;
        double x = 0;
        double Totaltime = 0; // Время прохождение дистанции без остоновок


        Totaltime = static_cast <double> (long_distance) / speed;
        NumStops = static_cast <double> (long_distance) / time_to_rest;

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
    
    

    double flying_carpet::function_flying_carpet(int long_distance) const
    {
        int reduction_factor = 0;
        double x, FinalyDist = 0;

        if (long_distance < 1000)
        {
            reduction_factor = 1;
        }

        else if (long_distance > 1000 && long_distance < 5000)
        {
            reduction_factor = 3;
        }

        else if (long_distance > 5000 && long_distance < 10000)
        {
            reduction_factor = 10;
        }

        else if (long_distance > 10000)
        {
            reduction_factor = 5;
        }


        if (long_distance < 1000)
        {
            FinalyDist = long_distance;           x = static_cast<double> (FinalyDist / speed);
        }
        else
        {
            FinalyDist = static_cast<double> (long_distance - (long_distance * reduction_factor / 100));
            x = FinalyDist / speed;
        }

        return x;
    }

    double eagle :: function_eagle (int long_distance) const
    {
        int reduction_factor = 6;
        double x, FinalyDist = 0;

        FinalyDist = static_cast<double> (long_distance - (long_distance * reduction_factor / 100));
        x = FinalyDist / speed;
        
        return x;
    }

    double broomstick :: function_broomstick(int long_distance) const
    {
        int reduction_factor = long_distance / 1000;
        double x, FinalyDist = 0;

        if (reduction_factor > 0)
        {
            FinalyDist = static_cast<double> (long_distance - (long_distance * reduction_factor / 100));
            x = FinalyDist / speed;

            return x;
        }

        else
        {
            x = static_cast<double>(long_distance / speed);

            return x;
        }
    }


}