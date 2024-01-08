// get the maximum value in an array

function getMaxValue(arr) {
  let largestElement = arr[0];
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > largestElement) largestElement = arr[i];
  }
  return largestElement;
}

console.log(getMaxValue([11, 10, 24, 100]));
