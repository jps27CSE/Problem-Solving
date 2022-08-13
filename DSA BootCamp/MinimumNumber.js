function MinimumNumber(array) {
  let minimum = array[0];

  for (let i = 1; i < array.length; i++) {
    if (minimum > array[i]) {
      minimum = array[i];
    }
  }

  return minimum;
}

console.log(MinimumNumber([3, 2, 6, 7, 1]));
