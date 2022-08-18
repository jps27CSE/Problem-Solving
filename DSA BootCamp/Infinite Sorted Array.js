const Answer = (array, target) => {
  var start = 0;
  var end = 1;

  while (target > array[end]) {
    var temp = end + 1;
    end = end + (end - start + 1) * 2;
    start = temp;
  }
  return BinarySearch(array, start, end, target);
};

const BinarySearch = (array, start, end, target) => {
  while (start <= end) {
    let middle = Math.floor(start + (end - start) / 2);
    if (target > array[middle]) {
      start = middle + 1;
    } else if (target < array[middle]) {
      end = middle - 1;
    } else {
      return middle;
    }
  }
};

let array = [4, 3, 6, 7, 8, 9, 12, 15, 16, 18, 200];
let target = 9;

console.log(Answer(array, target));
