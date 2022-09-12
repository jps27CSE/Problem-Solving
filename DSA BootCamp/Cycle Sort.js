function CycleSort(array) {
  let i = 0;
  while (i < array.length) {
    let correct = array[i] - 1;

    if (array[i] !== array[correct]) {
      swap(array, i, correct);
    } else {
      i++;
    }
  }
  return array;
}

function swap(array, current, correct) {
  let temp = array[current];
  array[current] = array[correct];
  array[correct] = temp;

  return array;
}

let array = [3, 2, 1, 4, 5];
console.log(CycleSort(array));
