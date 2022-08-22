//only work for non duplicate arrays
const findPivot = (array) => {
  let start = 0;
  let end = array.length - 1;

  while (start <= end) {
    let middle = Math.floor(start + (end - start) / 2);

    if (middle < end && array[middle] > array[middle + 1]) {
      return middle;
    } else if (middle > start && array[middle] < array[middle - 1]) {
      return middle - 1;
    } else if (array[middle] <= array[start]) {
      end = middle - 1;
    } else {
      start = middle + 1;
    }
  }
  return -1;
};

let array = [4, 5, 6, 7, 0, 1, 2];

const result = findPivot(array);

console.log(result + 1);
