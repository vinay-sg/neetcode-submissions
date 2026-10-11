class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        ans = ""
        m, n, i, j = len(word1), len(word2), 0, 0
        flip = True
        while (i<m and j<n):
            if flip:
                ans+=word1[i]
                i+=1
            else:
                ans+=word2[j]
                j+=1
            flip = not flip
        
        while i<m:
            ans+=word1[i]
            i+=1
        while j<n:
            ans+=word2[j]
            j+=1
        
        return ans
        



# class Solution {
# public:
#     string mergeAlternately(string word1, string word2) {
#         string ans = "";
#         int m = word1.size(), n = word2.size(), i = 0, j=0;
#         bool flip = true;
#         while(i<m and j<n){
#             if(flip){
#                 ans+=word1[i++];
#             }else{
#                 ans+=word2[j++];
#             }
#             flip=!flip;
#         }
#         while(i<m)ans+=word1[i++];
#         while(j<n)ans+=word2[j++];
#         return ans;
#     }
# };