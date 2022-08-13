function LinearSearch1(array1, target) {
  if (array1.length === 0) {
    return "empty";
  }

  for (let i = 0; i < array1.length; i++) {
    if (array1[i] === target) {
      return i;
    }
  }
  return "not found";
}

function LinearSearch2(array, target) {
  for (let i = 0; i < array.length; i++) {
    var element = array[i];

    if (element === target) {
      return element;
    }
  }
  return "not found";
}

function LinearSearch3(array, target) {
  for (let i = 0; i < array.length; i++) {
    var element = array[i];

    if (element === target) {
      return true;
    }
  }
  return "not found";
}

var array1 = [1, 2, 3, 4, 5];
var target = 3;

console.log(LinearSearch1([1, 2, 3, 4, 5], 2));
console.log(LinearSearch2(array1, target));
console.log(LinearSearch3(array1, target));
