function CeilingFunction(array, target) {
  let start = 0;
  let end = array.length - 1;

  while (start <= end) {
    var middle = Math.floor(start + (end - start) / 2);

    if (array[middle] === target) {
      return middle;
    }
    if (target > array[middle]) {
      start = middle + 1;
    } else {
      end = middle - 1;
    }
  }
  return start;
}

let array = [2, 3, 5, 9, 14, 16, 18];
console.log(CeilingFunction(array, 15));
