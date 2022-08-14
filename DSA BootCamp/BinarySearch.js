function BinarySearch(array, target) {
  let start = 0;
  let end = array.length - 1;

  while (start <= end) {
    let mid = Math.floor(start + (end - start) / 2);

    if (target > array[mid]) {
      start = mid + 1;
    } else if (target < array[mid]) {
      end = mid - 1;
    } else {
      return mid;
    }
  }
  return "not found";
}

let array = [1, 2, 3, 4, 5, 6, 8, 19, 23];
let target = 2;

console.log(BinarySearch(array, target));
