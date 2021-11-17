package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Number of Rides: ");
        int myRides = input.nextInt();
        System.out.print("Number of Days: ");
        int myDays = input.nextInt();

        TransitCalculator transitCalc = new TransitCalculator(myRides, myDays);

        System.out.println(transitCalc.getBestFare());
    }
}
