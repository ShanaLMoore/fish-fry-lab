//
//  fish-fry.c
//  fish-fry-lab
//
//  Created by Shana Moore on 10/4/17.
//  Copyright © 2017 Shana Moore. All rights reserved.
//
/* You have a 500 gallon tank of water that has been used
 to hold fish that are going to be used in a Fish Fry 24hrs
 from now. The tank has a leak that is losing water at the rate
 of 10% of the remaining water every hour. If the tank drops
 100 gallons, the fish will all die (instantly). 1) Create a program
 that will solve the problem of determining if the fish will
 die if no action is taken. 2) Provide for adding additional
 gallons of water per hour to keep final value above 100
 gallons. 3) Display the number of gallons reminaing after each hr. */

#include <stdio.h>

int main(void) {
    // Declare variables with appropriate data types
    double remaining_water = 0, additional_water = 0, rate = 0;
    int remaining_hours = 24;
    
    // Get input from user
    printf("Please enter additional water added per hour: ");
    scanf("%lf", &additional_water);
    
    // Assign variables
    remaining_water = 500;
    rate = .1;
    
    while (remaining_water > 100 && remaining_hours > 0) {
        // decrement hour
        remaining_hours --;
        
        // Calculate remaining water per hour
        remaining_water = (remaining_water - (remaining_water * rate)) + additional_water;
        
        // Display the number of gallons remaining after each hr
        printf("The tank still has %.15g gallons remaining.\n", remaining_water);
        
    }
    
    // if total_water > 100 && hour < 24, let's eat!
    if (remaining_hours <= 0 ) {
        printf("Get out the BBQ and let's eat fish!\n");
    }
    // if total_water < 100, all of the fish die
    else if (remaining_water < 100) {
        printf("Out of water at hour %d when remaining gallons were: %.4g\n", remaining_hours, remaining_water);
    }
    
    return 0;
}
