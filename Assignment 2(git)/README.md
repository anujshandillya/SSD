# Assignment 2 - (Lab work: Git)

## **Part 1:** `Create local repo, set .gitignore, perform initial commit, and link GitHub remote.`
```shell
git init
git remote add origin https://github.com/<username>/<repo_name>.git
git add .
git commit -m "first commit"
```

## **Part 2:** ` Enhance README.md with setup instructions (Rule: Min 6 separate commits).`

- Edit README.md file with setup instruction of the git repository.

## **Part 3:** `Build feature branch, create code files (e.g., main.cpp), and merge to main.`
```shell
git branch -M feature
git checkout -b feature

touch main.cpp

git add main.cpp
git commit -m "<commit_msg>"
```

## **Part 4:** `Rename, move, delete, and restore files while preserving full history lineage.`

- ### Rename
```shell
git mv main.cpp main_rename.cpp
git commit -m "<commit_message>"
```
- ### Move
```shell
git mv main.cpp main_rename.cpp
git commit -m "<commit_message>"
```
- ### Delete
```shell
git rm main_rename.cpp
git commit -m "<commit_message>"
```
- ### Restore
```shell
git restore --source=<commit_address> -- main_rename.cpp
git commit -m "<commit_message>"
```

## **Part 5:** `Build 4 feature branches (login, profile, dashboard, settings) with 4-5 commits each and merge all.`
```shell
git branch -M login
git branch -M profile
git branch -M dashboard
git branch -M settings
```

## **Part 6:** ` Create unfinished changes, stash them, switch to another branch, return to the original branch, and reapply the stashed changes.`
```shell
git stash push -m "<stash_label>"
```

## **Part 7:** `Resolve 3 specific mistakes (wrong message, misplaced commits, reflog recovery).`
```shell

```

## **Part 8 & 9:** `Manually resolve created branch conflicts and release annotated tag v1.0`
```shell
git checkout branch_1
git merge branch_2

git diff

git checkout --ours <file>
git checkout --theirs <file>

git add <file>

git commit -m "<commit_message>"
```