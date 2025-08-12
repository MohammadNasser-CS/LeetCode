function longestCommonPrefix(strs: string[]): string {
     strs.sort();

    // Get the first and last strings after sorting
    let first = strs[0];
    let last = strs[strs.length - 1];
    let minLength = Math.min(first.length, last.length);

    let i = 0;
    
    // Find the common prefix between the first and 
    // last strings
    while (i < minLength && first[i] === last[i]) {
        i++;
    }

    // Return the common prefix
    return first.substring(0, i);
};