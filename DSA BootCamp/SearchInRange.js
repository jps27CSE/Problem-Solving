function SearchInRange(arr, start, end, target) {
  if (arr.length === 0) {
    return false;
  }
  for (let i = start; i <= end; i++) {
    if (arr[i] === target) {
      return i;
    }
  }
  return false;
}

console.log(SearchInRange([1, 2, 3, 4, 5, 6, 7], 0, 1, 2));
