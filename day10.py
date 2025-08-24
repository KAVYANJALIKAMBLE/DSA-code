from collections import defaultdict
def groupAnagrams(strs):
    anagram_map=defaultdict(list)
    for word in strs:
      key=''.join(sorted(word))
      anagram_map[key].append(word)
    return list(anagram_map.values())
print(groupAnagrams(["eat","tea","tan","ate","nat","bat"]))
print(groupAnagrams([""]))
print(groupAnagrams(["a"]))
print(groupAnagrams(["abc","bca","cab","xyz","zyx","yxz"]))
print(groupAnagrams(["abc","def","ghi"]))
