using System;
using System.Collections.Generic;

public class Program
{
    public static void Main()
    {
        List<int> readings = new List<int> { 120, 150, 110, 145, 130, 160 };
        
        int criticalCount = GetCriticalCount(readings);
        
        Console.WriteLine("Critical Readings: " + criticalCount);
    }

    public static int GetCriticalCount(List<int> readings)
    {
        int count=0;

        foreach(int reading in readings)
        {
            if(reading > 140)
            {
                count++; 
            }
        }
        return count; 
    }
}