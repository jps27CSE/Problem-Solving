function InsertionSort(array) {
  for (let i = 0; i < array.length - 1; i++) {
    for (let j = i + 1; j > 0; j--) {
      if (array[j] < array[j - 1]) {
        Swap(array, j, j - 1);
      } else {
        break;
      }
    }
  }
  return array;
}

function Swap(array, j, i) {
  let temp = array[j];
  array[j] = array[i];
  array[i] = temp;

  return array;
}

let array = [3, 6, 4, 2, 7, 1];

console.log(InsertionSort(array));
