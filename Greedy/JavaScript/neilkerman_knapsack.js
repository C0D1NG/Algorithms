function greedyKnapsack(weights, values, totalItems, capacity) {
    //set some default values
    var curKnapsackWeight = 0,
        sackValue = 0;
    
    //iterate through the collection
    for(var i = 0; i < totalItems && curKnapsackWeight <= capacity; i++) {
        /*
            if the current weight is less than or equal to what we can 
            add to the knapsack, then we add it. else it will be too 
            heavy
        */
        if(weights[i] <= (capacity - curKnapsackWeight)) {
            //increase the current sack wight and value
            curKnapsackWeight += weights[i];
            sackValue += values[i];
        } else {
            //find the remainder
            var remainder = capacity - curKnapsackWeight;
            //add to sack
            curKnapsackWeight =+ remainder;        
            //find percentage weight remaining
            var pWeight = remainder / itemWeights[i];
            //find the value amount
            var vAmount = pWeight * values[i];
            //add this value to the current sack value and return
            sackValue += vAmount;
            
            //return the value
            return sackValue; 
        }
    }
}

var itemWeights = [1, 3, 2, 5, 4],
    itemValues = [2, 4, 6, 8, 5],
    knapsackSize = 12,
    totalNumberOfItems = itemValues.length;

var kFraction = greedyKnapsack(itemWeights, itemValues, totalNumberOfItems, knapsackSize);
console.log('Knapsack Results -> ',kFraction);