def LinearSearch (array, searchedValue)
  array.each do |value|
    if value == searchedValue
      return "Value found."
    end
  end
  return "Value not found."
end


# Searching for 1 in the array
n= gets.to_i #length of array
arr = []
while n>0
  num = gets.chomp.to_i
  arr.push(num)
  n = n-1
end
number = gets.to_i #number whose index is to be searched
puts(LinearSearch(arr, number))
