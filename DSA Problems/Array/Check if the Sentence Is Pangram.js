/*

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.

*/

var checkIfPangram = function(sentence) {
    let charSet = new Set()
    
    for(let i=0;i<sentence.length;i++)
        {
          charSet.add(sentence[i])
              
    if(charSet.size === 26)
        {
            return true
        }
            
        }
  
        return false
    
};