package com.company;

public class TransitCalculator {
    String[] fareOptions = {"Pay-per-ride", "7-day Unlimited", "30-day Unlimited"};
    double[] fares = {2.75, 33.0, 127.0};
    int rides;
    int days;

    public TransitCalculator(int rides, int days) {
        this.rides = rides;
        this.days = days;
    }

    public double unlimited7Price() {

        double weeklyPurchases = Math.ceil(days/7.0);
        double total7DayCost = weeklyPurchases * fares[1];

        return total7DayCost / rides;
    }

    public double[] getRidePrices() {

        double pprPrice = fares[0];
        double unlimited7Price = unlimited7Price();
        double unlimited30Price = fares[2] / rides;

        double prices[] = {pprPrice, unlimited7Price, unlimited30Price};
        return prices;

    }

    public String getBestFare() {

        double[] ridePrices = getRidePrices();
        int winningIndex = 0;

        for (int i = 0; i < ridePrices.length; i++) {

            if (ridePrices[i] < ridePrices[winningIndex]){

                winningIndex = i;

            }

        }

        return "You should get the " + fareOptions[winningIndex] + " option at $" + Math.round(ridePrices[winningIndex] * 100.0) / 100.0 + " per ride.";
    }

}
