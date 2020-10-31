package main

import "fmt"

// linear search function
// input is an integer array and a target value
// output is the index of element if found or else -1
func search(array []int, target int) int {
	for i, val := range array {
		if val == target {
			return i
		}
	}
	return -1
}

func main() {
	var array []int = []int{1, 3, 4, 6, 7, 9, 10, 11, 13}

	// searching for 7 is a positive scenario and should
	// output the index of the found variable
	fmt.Println(search(array, 7))

	// searching for 5 is a negative scenario and should
	// output -1 indicating the value isn't in the array
	fmt.Println(search(array, 5))
}
