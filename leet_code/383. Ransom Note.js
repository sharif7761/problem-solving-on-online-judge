// https://leetcode.com/problems/ransom-note/

var canConstruct = function (ransomNote, magazine) {
  for (const char of magazine) { 
    ransomNote = ransomNote.replace(char, "");
  }
  if (!ransomNote) return true;
  return false;
};