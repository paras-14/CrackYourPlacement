    // int tour(petrolPump p[], int n) {
    //     int totalSurplus = 0;
    //     int currentSurplus = 0; 
    //     int start = 0;
    
    //     for (int i = 0; i < n; i++) {
    //         int netPetrol = p[i].petrol - p[i].distance;
    //         totalSurplus += netPetrol;
    //         currentSurplus += netPetrol;
    //         if (currentSurplus < 0) {
    //             start = i + 1;
    //             currentSurplus = 0;
    //         }
    //     }
    //     return (totalSurplus >= 0) ? start : -1;
    // }