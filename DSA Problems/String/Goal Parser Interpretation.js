// Input: command = "G()(al)"
// Output: "Goal"
// Explanation: The Goal Parser interprets the command as follows:
// G -> G
// () -> o
// (al) -> al
// The final concatenated result is "Goal".

var interpret = function (command) {
  let result = new Array();

  for (let i = 0; i < command.length; i++) {
    if (command[i] === "G") {
      result.push("G");
    }
    if (command[i] === "(" && command[i + 1] === ")") {
      result.push("o");
    }
    if (command[i] === "(" && command[i + 1] === "a") {
      result.push("a");
      result.push("l");
    }
  }

  return result.join("");
};
