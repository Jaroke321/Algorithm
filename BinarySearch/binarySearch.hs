binarySearch :: [Int] -> Int -> Int
binarySearch [] _ = error "List is empty"       -- Empty list returns an error
binarySearch xs target
  | target == (xs !! midpoint) = midpoint               -- Search for the target at the current midpoint, This covers the case when midpoint is 0 also
  | midpoint == 0 = error "Value is not in the array"   -- The midpoint is 0 and the target was not found above
  | target < (xs !! midpoint) = binarySearch (take (midpoint) xs) target                  -- Call binary search using the target and the left half of the list 
  | target > (xs !! midpoint) = midpoint + binarySearch (drop (midpoint) xs) target       -- Call binary search using target and the right half of the list
  where 
      midpoint = div (length xs) 2  -- Caluclates the midpoint of the current list