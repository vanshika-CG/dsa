# 🚀 LeetCode 709 — To Lower Case | ASCII Trick Explained | C++ Java Python | Beginner Friendly 🔥



> 💡 Convert uppercase letters to lowercase **without using built-in functions** using a simple ASCII trick.

---

# 📑 Table of Contents

* [Problem Statement](#problem-statement)
* [Key ASCII Insight](#key-ascii-insight)
* [Intuition](#intuition)
* [Animated Visualization](#animated-visualization)
* [Algorithm](#algorithm)
* [Dry Run](#dry-run)
* [Complexity Analysis](#complexity-analysis)
* [Code Implementations](#code-implementations)

  * C++
  * Java
  * Python
* [Final Thoughts](#final-thoughts)

---

# 🧩 Problem Statement

Given a string `s`, return the string after replacing **every uppercase letter with the same lowercase letter**.

### Example

```
Input:  s = "Hello"
Output: "hello"
```

```
Input:  s = "LOVELY"
Output: "lovely"
```

---

# 🔑 Key ASCII Insight

Every character has an **ASCII value**.

| Character | ASCII |
| --------- | ----- |
| A         | 65    |
| Z         | 90    |
| a         | 97    |
| z         | 122   |

### Important Observation

```
'a' - 'A' = 32
```

So converting uppercase to lowercase becomes:

```
lowercase = uppercase + 32
```

Example

```
'A' + 32 = 'a'
'B' + 32 = 'b'
'C' + 32 = 'c'
```

---

# 🧠 Intuition

Instead of using built-in functions like:

```
tolower()
toLowerCase()
```

We simply:

1️⃣ Traverse the string
2️⃣ Check if character is uppercase
3️⃣ Add **32** to convert it

This works because of **ASCII encoding rules**.

---

# 🎬 Animated Visualization

### Input String

```
H   e   L   L   o
```

### Step 1

```
H → h
```

```
h   e   L   L   o
```

### Step 2

```
L → l
```

```
h   e   l   L   o
```

### Step 3

```
L → l
```

```
h   e   l   l   o
```

### Final Output

```
hello
```

---

# ⚙️ Algorithm

```
for each character in string
    if character between 'A' and 'Z'
        convert to lowercase using +32
return modified string
```

---

# 🔍 Dry Run

Example

```
s = "HeLLo"
```

| Index | Character | Condition | Operation | Result |
| ----- | --------- | --------- | --------- | ------ |
| 0     | H         | Uppercase | H + 32    | h      |
| 1     | e         | Lowercase | No change | e      |
| 2     | L         | Uppercase | L + 32    | l      |
| 3     | L         | Uppercase | L + 32    | l      |
| 4     | o         | Lowercase | No change | o      |

### Final String

```
hello
```

---

# ⏱ Complexity Analysis

### Time Complexity

```
O(n)
```

We traverse the string once.

### Space Complexity

```
O(1)
```

No extra space required.

---

# 💻 Code Implementations

---

# 🟦 C++ Solution

```cpp
class Solution {
public:
    string toLowerCase(string s) {

        int size = s.size();

        for(int i = 0; i < size; i++){

            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i] + 32;
            }

        }

        return s;
    }
};
```

---

# ☕ Java Solution

```java
class Solution {
    public String toLowerCase(String s) {

        char[] arr = s.toCharArray();

        for(int i = 0; i < arr.length; i++){

            if(arr[i] >= 'A' && arr[i] <= 'Z'){
                arr[i] = (char)(arr[i] + 32);
            }

        }

        return new String(arr);
    }
}
```

---

# 🐍 Python Solution

```python
class Solution:
    def toLowerCase(self, s: str) -> str:

        result = ""

        for ch in s:

            if 'A' <= ch <= 'Z':
                result += chr(ord(ch) + 32)
            else:
                result += ch

        return result
```

---

# 🏁 Final Thoughts

✔ Uses **ASCII trick** instead of built-in functions
✔ **Simple and efficient** solution
✔ Time Complexity **O(n)**
✔ Space Complexity **O(1)**

---

# 📌 Related Topics

* String Manipulation
* ASCII Encoding
* Character Conversion

---

# ⭐ If this helped you

Please **upvote 👍 and share** so others can learn this simple trick!

Happy Coding 🚀
