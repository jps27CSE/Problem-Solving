function SelectionSort(array) {
  for (let i = 0; i < array.length; i++) {
    let lastIndex = array.length - i - 1;
    let max = GetMax(array, 0, lastIndex);
    swapValue(array, max, lastIndex);
  }

  return array;
}

function GetMax(array, start, end) {
  let maxIndex = start;
  for (let i = start; i <= end; i++) {
    if (array[maxIndex] < array[i]) {
      maxIndex = i;
    }
  }
  return maxIndex;
}

function swapValue(array, max, last) {
  let temp = array[max];
  array[max] = array[last];
  array[last] = temp;

  return array;
}

let array = [3, 2, 5, 4, 1];

console.log(SelectionSort(array));
