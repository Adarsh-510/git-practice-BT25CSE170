# Git Practice Record & Command Reference

**Student Name:** Adarsh  
**Roll Number:** BT25CSE170  
**Section:** CSE-C1  
**GitHub Repository:** [https://github.com/Adarsh-510/git-practice-BT25CSE170](https://github.com/Adarsh-510/git-practice-BT25CSE170)

---

## 1. Summary of Git Commands Used

This document records all the primary Git commands utilized during the development, branching, conflict resolution, and submission preparation for this assignment.

| Command | Category | Purpose & Description in this Assignment |
| :--- | :--- | :--- |
| `git init -b main` | Setup | Initializes a new local Git repository with `main` as the default branch. |
| `git config user.name "..."` | Configuration | Sets the committer's author name (`Adarsh-510` / `Adarsh`). |
| `git config user.email "..."` | Configuration | Sets the committer's author email associated with GitHub. |
| `git status` | Inspection | Displays the state of the working directory and staging area, identifying untracked, modified, or conflicted files. |
| `git add <file>` / `git add .` | Staging | Stages modifications or new files from the working tree to the index. |
| `git commit -m "<message>"` | History | Records a snapshot of staged changes into the local commit history with a descriptive message. |
| `git commit -am "<message>"` | Staging & History | Stages tracked modified files and commits them in a single step. |
| `git branch` | Branching | Lists local branches; with `-a` lists all local and remote branches. |
| `git branch -d <branch>` | Branching | Safely deletes a merged feature branch. |
| `git checkout -b <branch>` | Branching | Creates a new branch (e.g., `feature/exercise-01-arithmetic`) and switches to it. |
| `git checkout <branch>` / `git switch <branch>` | Branching | Switches the active working context between existing branches. |
| `git merge <branch>` | Integration | Merges changes from the specified branch into the currently checked-out branch. |
| `git merge --no-ff <branch>` | Integration | Forces creation of a merge commit even if fast-forward is possible, preserving branch topology. |
| `git log --graph --oneline --all` | History | Renders a concise ASCII graph of all branches and commit histories across the repository. |
| `git diff` | Inspection | Compares changes between working directory, staging area, or between commits/branches. |
| `git remote add origin <url>` | Remote | Associates the local Git repository with the remote GitHub repository URL. |
| `git push -u origin <branch>` | Remote | Pushes local branch commits to the remote repository and sets the upstream tracking branch. |
| `git push --all origin` | Remote | Pushes all local branches to the remote repository at once. |

---

## 2. Detailed Command Explanations

### A. Repository Initialization and Configuration
```bash
# Initialize a new Git repository
git init -b main

# Configure identity
git config user.name "Adarsh-510"
git config user.email "215997664+Adarsh-510@users.noreply.github.com"
```
*Why used:* Configures repository metadata and associates every commit with the student's verified GitHub identity.

### B. Branching Strategy and Workflows
For each exercise and documentation phase, an isolated feature branch was used:
```bash
# Example: Creating and switching to feature branch for Exercise 01
git checkout -b feature/arithmetic-operations

# Making commits with conventional prefixes
git add exercise-01/main.cpp
git commit -m "feat(exercise-01): implement basic arithmetic operations in C++"

git add exercise-01/main.cpp exercise-01/input.txt exercise-01/output.txt
git commit -m "feat(exercise-01): add input validation, division by zero check, and sample I/O"

# Merging back into main
git checkout main
git merge feature/arithmetic-operations
```
*Why used:* Keeps feature implementation decoupled from the stable `main` branch, mimicking modern enterprise Git workflows (GitHub Flow).

---

## 3. Merge Conflict Encountered & Resolution Record

As part of Section 3 of the assignment requirements, a real merge conflict was created, analyzed, and successfully resolved.

### A. How the Conflict Occurred
Two branches (`main` and `feature/docs-git-record`) simultaneously introduced different modifications to the exact same lines of `README.md` (specifically within the `## Compilation and Execution Guide` section):

1. **On branch `feature/docs-git-record`:**
   - Updated the build commands to include GCC/Clang optimization flags (`-O2 -Wall -Wextra`).
   - Committed with hash `0d28e2d`:
     ```text
     docs(build): optimize g++ compilation flags with -O2 and -Wextra
     ```

2. **On branch `main`:**
   - Updated the same build section to target Windows PowerShell and Command Prompt with `.exe` extensions and PowerShell pipeline redirection (`Get-Content | ...`).
   - Committed with hash `97ea0d0`:
     ```text
     docs(build): add Windows PowerShell specific compilation and run commands
     ```

3. **Triggering the Conflict:**
   While on `main`, merging `feature/docs-git-record` triggered a three-way merge conflict:
   ```bash
   git merge feature/docs-git-record
   ```
   **Git Terminal Output:**
   ```text
   Auto-merging README.md
   CONFLICT (content): Merge conflict in README.md
   Automatic merge failed; fix conflicts and then commit the result.
   ```

### B. Conflict Markers in `README.md`
Opening `README.md` revealed Git's standard conflict markers:
```markdown
<<<<<<< HEAD
Compile using PowerShell / Windows Command Prompt:
```powershell
g++ -std=c++11 -pedantic exercise-01/main.cpp -o exercise-01/main.exe
=======
Compile using GCC/Clang with optimizations and extra warnings:
```bash
g++ -O2 -std=c++11 -Wall -Wextra exercise-01/main.cpp -o exercise-01/main
>>>>>>> feature/docs-git-record
```
```markdown
<<<<<<< HEAD
Or execute with file redirection in PowerShell:
```powershell
Get-Content exercise-01\input.txt | .\exercise-01\main.exe
=======
Or execute with automated input redirection:
```bash
./exercise-01/main < exercise-01/input.txt
>>>>>>> feature/docs-git-record
```

- **`<<<<<<< HEAD` to `=======`**: Represented changes present in `main` (the current branch).
- **`=======` to `>>>>>>> feature/docs-git-record`**: Represented changes incoming from `feature/docs-git-record`.

### C. Resolution Steps Taken

1. **Inspection:** Checked conflict status using `git status`, confirming that `README.md` was unmerged (`both modified: README.md`).
2. **Consolidation:** Rather than discarding either change, both sets of instructions were harmonized into a complete cross-platform execution guide supporting both Linux/macOS (GCC/Clang) and Windows (PowerShell/MinGW).
3. **Marker Removal:** Manually eliminated all conflict markers (`<<<<<<<`, `=======`, `>>>>>>>`).
4. **Staging:** Marked the conflict as resolved:
   ```bash
   git add README.md
   ```
5. **Finalizing the Merge:** Created the merge commit:
   ```bash
   git commit -m "Merge pull request #4 from feature/docs-git-record - resolve merge conflict in README.md"
   ```
   Recorded as commit `8ada751`.

### D. Verification of Git Graph
After resolving the conflict, running `git log --graph --oneline` confirmed the branch convergence:
```text
*   8ada751 Merge pull request #4 from feature/docs-git-record - resolve merge conflict in README.md
|\  
| * 0d28e2d docs(build): optimize g++ compilation flags with -O2 and -Wextra
* | 97ea0d0 docs(build): add Windows PowerShell specific compilation and run commands
|/  
* 6edc452 docs: add initial README with student info, exercises, and activity links
```

---

## 4. Key Takeaways and Best Practices
1. **Pull Before Branching:** Frequently pull upstream changes from `main` into local feature branches to detect conflicts early.
2. **Atomic Commits:** Keep commits small, descriptive, and focused on a single responsibility.
3. **Clean Collaboration:** Understanding Git conflict markers allows developers to synthesize multi-author contributions without losing critical code.
