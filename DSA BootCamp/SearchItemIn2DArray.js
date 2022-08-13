function search(arr, target) {
  if (arr.length === 0) {
    return false;
  }
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr[i].length; j++) {
      if (arr[i][j] === target) {
        let arr1 = [];
        arr1.push(i);
        arr1.push(j);
        return arr1;
      }
    }
  }
  return "not found";
}

function minInArray(arr) {
  let minimum = arr[0][0];
  if (arr.length === 0) {
    return false;
  }
  for (let i = 0; i < arr.length; i++) {
    for (let j = 0; j < arr[i].length; j++) {
      if (arr[i][j] < minimum) {
        minimum = arr[i][j];
      }
    }
  }

  return minimum;
}

let arr = [
  [1, 2, 3, 4, 5],
  [13, 12, 15],
  [22, 23, 25, 26],
];

let target = 25;

console.log(search(arr, target));
console.log(maxInArray(arr));
