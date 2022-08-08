/*

Input: items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]], ruleKey = "color", ruleValue = "silver"
Output: 1
Explanation: There is only one item matching the given rule, which is ["computer","silver","lenovo"].


*/

var countMatches = function (items, ruleKey, ruleValue) {
  let count = 0;
  let j;

  for (let i = 0; i < items.length; i++) {
    if (ruleKey === "type") {
      if (items[i][0] === ruleValue) {
        count++;
      }
    }

    if (ruleKey === "color") {
      if (items[i][1] === ruleValue) {
        count++;
      }
    }

    if (ruleKey === "name") {
      if (items[i][2] === ruleValue) {
        count++;
      }
    }
  }
  return count;
};
