## Troubleshooting C++ on Mac

### Error 1: `bits/stdc++.h` file not found
```text
fatal error: 'bits/stdc++.h' file not found
```
**Cause:** On a Mac, `g++` is really Apple's clang compiler, and it does not include the GCC-only header `bits/stdc++.h`.

**Fix (option A):** include only the headers you need.

| You use | Include |
|---------|---------|
| `cin`, `cout` | `<iostream>` |
| `vector` | `<vector>` |
| `string` | `<string>` |
| `sort`, `min`, `max`, `reverse` | `<algorithm>` |
| `sqrt`, `pow`, `abs` | `<cmath>` |

**Fix (option B):** install real GCC and use it instead.
```bash
brew install gcc
ls /opt/homebrew/bin | grep g++
```
This showed `g++-16`, so the compiler name in the task becomes `g++-16`. If Homebrew updates GCC, the number may change, so run the `ls` command again and update the task.

### Error 2: `no such file or directory: input.txt`
```text
zsh:1: no such file or directory: input.txt
```
**Cause:** The task runs from the folder opened in VS Code (the repo's main folder), and `input.txt` was not there.

**Fix:**
```bash
cd /Users/joshna/Documents/GitHub/dsa-oops-dbms-notes
touch input.txt output.txt
```

### Final working `.vscode/tasks.json`
```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "compile",
            "type": "shell",
            "command": "g++-16",
            "args": ["-std=c++17", "-o", "main", "${file}"],
            "group": { "kind": "build", "isDefault": false }
        },
        {
            "label": "compile and run",
            "type": "shell",
            "command": "g++-16 -std=c++17 -o main \"${file}\" && ./main < input.txt > output.txt",
            "group": { "kind": "build", "isDefault": true }
        }
    ]
}
```

### Checklist before running a program
- The `.cpp` file is the active tab in VS Code.
- `input.txt` and `output.txt` exist in the repo's main folder.
- The compiled program is named `main`, which `.gitignore` already ignores.
- Press `Cmd + Shift + B`, then read the result in `output.txt`.

> [!IMPORTANT]
> **Read the first line of an error message first.** Both errors above were fixed by understanding what that line said, not by changing random things.

### Lessons from these errors
- A compile error (like the missing header) happens before the program runs. A run error (like the missing file) happens after it starts.
- Error messages name the problem. Read them before searching for a fix.
- Different computers and compilers behave differently, so notes about your setup save time later.

//data-type
//input/output
//if else, nested if else
//Switch case
//for loop
//while loop
//Arrays
//Strings
//functions
//pass by value and reference
