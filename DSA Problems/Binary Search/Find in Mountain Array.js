var findInMountainArray = function (target, array) {
  let peak = PeakIndex(array);

  let firstTry = orderAgnostic(array, target, 0, peak);

  if (firstTry != -1) {
    return firstTry;
  }

  return orderAgnostic(array, target, peak + 1, array.length - 1);
};

const PeakIndex = (array) => {
  let start = 0;
  let end = array.length - 1;

  while (start < end) {
    let middle = Math.floor(start + (end - start) / 2);

    if (array[middle] > array[middle + 1]) {
      end = middle;
    } else {
      start = middle + 1;
    }
  }

  return start;
};

const orderAgnostic = (array, target, start, end) => {
  let Asc = array[start] < array[end];

  while (start <= end) {
    let mid = Math.floor(start + (end - start) / 2);

    if (array[mid] === target) {
      return mid;
    }

    if (Asc) {
      if (target < array[mid]) {
        end = mid - 1;
      } else {
        start = mid + 1;
      }
    } else {
      if (target > array[mid]) {
        end = mid - 1;
      } else {
        start = mid + 1;
      }
    }
  }
  return -1;
};

console.log(findInMountainArray(3, [1, 2, 3, 4, 5, 3, 1]));
