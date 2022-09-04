function BubbleSort(array) {
  let swapped = false;

  for (let i = 0; i < array.length; i++) {
    for (let j = 1; j < array.length - i; j++) {
      if (array[j] < array[j - 1]) {
        let temp = array[j];
        array[j] = array[j - 1];
        array[j - 1] = temp;
        swapped = true;
      }
    }
    if (swapped === false) {
      break;
    }
  }

  console.log(array);
}

var array = [3, 2, 5, 4];
BubbleSort(array);
