// https://leetcode.com/problems/encode-and-decode-tinyurl/

const encode =  (longUrl) => {
        return btoa(longUrl)
}
const decode = (shortUrl) => {
         return atob(shortUrl)
};