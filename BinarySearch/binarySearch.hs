binarySearch :: [Int] -> Int -> Int
binarySearch [] _ = -1
binarySearch xs target
  | target == (xs !! midpoint) = midpoint
  | midpoint == 0 = error "Value is not in the array"
  | target < (xs !! midpoint) = binarySearch (take (midpoint) xs) target                               -- Call binary search using the target and the left half of the list 
  | target > (xs !! midpoint) = midpoint + binarySearch (drop (midpoint) xs) target                              -- Call binary search usig target and the right half of the list
  where 
      midpoint = div (length xs) 2