PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
* main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout -b feature1
Switched to a new branch 'feature1'
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
* feature1
  main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout main
Switched to branch 'main'
Your branch is up to date with 'origin/main'.
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
  feature1
* main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout -b feautre2
Switched to a new branch 'feautre2'
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
  feature1
* feautre2
  main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout -d feautre2
HEAD is now at fa076ee I add C lang
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
* (HEAD detached at refs/heads/feautre2)
  feature1
  feautre2
  main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout feature2
error: pathspec 'feature2' did not match any file(s) known to git
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout main    
Switched to branch 'main'
Your branch is up to date with 'origin/main'.
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
  feature1
  feautre2
* main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout -d feature2
fatal: git checkout: --detach does not take a path argument 'feature2'
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
  feature1
  feautre2
* main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch feature2
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
  feature1
  feature2
  feautre2
* main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch -d  feature2
Deleted branch feature2 (was fa076ee).
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
  feature1
  feautre2
* main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch -d  feature2
error: branch 'feature2' not found
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch -d  feautre2
Deleted branch feautre2 (was fa076ee).
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
  feature1
* main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout main
Already on 'main'
Your branch is up to date with 'origin/main'.
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout feature1
Switched to branch 'feature1'
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status
On branch feature1
nothing to commit, working tree clean
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
* feature1
  main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status
On branch feature1
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   index.c

no changes added to commit (use "git add" and/or "git commit -a")
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git add .
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git commit -m "Adding a new Branch"
[feature1 e76a715] Adding a new Branch
 1 file changed, 2 insertions(+)
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status
On branch feature1
nothing to commit, working tree clean
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout main
Switched to branch 'main'
Your branch is up to date with 'origin/main'.
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout feature1
Switched to branch 'feature1'
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
* feature1
  main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status
On branch feature1
nothing to commit, working tree clean
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git push origin feature1
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 16 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 325 bytes | 325.00 KiB/s, done.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
remote:
remote: Create a pull request for 'feature1' on GitHub by visiting:
remote:      https://github.com/kiranasdoddmani/LocalRepo/pull/new/feature1
remote:
To https://github.com/kiranasdoddmani/LocalRepo.git
 * [new branch]      feature1 -> feature1
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
* feature1
  main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git diff main
diff --git a/index.c b/index.c
index a831bfc..59c110d 100644
--- a/index.c
+++ b/index.c
@@ -1 +1,3 @@
 hello i am c programming langauge
+ I am learning java and become developer
+
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout main
Switched to branch 'main'
Your branch is up to date with 'origin/main'.
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
  feature1
* main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout feature1
Switched to branch 'feature1'
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
* feature1
  main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout main    
Switched to branch 'main'
Your branch is up to date with 'origin/main'.
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch       
  feature1
* main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git pull origin main
remote: Enumerating objects: 1, done.
remote: Counting objects: 100% (1/1), done.
remote: Total 1 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Unpacking objects: 100% (1/1), 901 bytes | 300.00 KiB/s, done.
From https://github.com/kiranasdoddmani/LocalRepo
 * branch            main       -> FETCH_HEAD
   fa076ee..ba47a54  main       -> origin/main
Updating fa076ee..ba47a54
Fast-forward
 index.c | 2 ++
 1 file changed, 2 insertions(+)
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch                                      
  feature1
* main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status  
On branch main
Your branch is up to date with 'origin/main'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   index.c

no changes added to commit (use "git add" and/or "git commit -a")
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git add .
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git commit -m "adding the button"
[main 55b9dd7] adding the button
 1 file changed, 1 insertion(+), 1 deletion(-)
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo>
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
  feature1
* main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout feature1
Switched to branch 'feature1'
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
* feature1
  main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status
On branch feature1
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   index.c

no changes added to commit (use "git add" and/or "git commit -a")
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git add
Nothing specified, nothing added.
hint: Maybe you wanted to say 'git add .'?
hint: Disable this message with "git config set advice.addEmptyPathspec false"
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git add .
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git commit -m"adding drownsom"
[feature1 e457aaf] adding drownsom
 1 file changed, 1 insertion(+), 1 deletion(-)
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
* feature1
  main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git diff main
diff --git a/index.c b/index.c
index e09a004..52aab84 100644
--- a/index.c
+++ b/index.c
@@ -1,3 +1,3 @@
 hello i am c programming langauge
- I am learning java and become developer(button)
+ I am learning java and become developer(drownsom)

PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
* feature1
  main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git merge main
Auto-merging index.c
CONFLICT (content): Merge conflict in index.c
Automatic merge failed; fix conflicts and then commit the result.
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status
On branch feature1
You have unmerged paths.
  (fix conflicts and run "git commit")
  (use "git merge --abort" to abort the merge)

Unmerged paths:
  (use "git add <file>..." to mark resolution)
        both modified:   index.c

no changes added to commit (use "git add" and/or "git commit -a")
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git add .
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git commit -m "Adding both"
[feature1 a6c8edc] Adding both
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status
On branch feature1
nothing to commit, working tree clean
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
* feature1
  main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout main
Switched to branch 'main'
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
  feature1
* main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git merge feature1
Updating 55b9dd7..a6c8edc
Fast-forward
 index.c | 3 +++
 1 file changed, 3 insertions(+)
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status
On branch main
Your branch is ahead of 'origin/main' by 3 commits.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch 
  feature1
* main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout feature1
Switched to branch 'feature1'
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
* feature1
  main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git checkout main
Switched to branch 'main'
Your branch is ahead of 'origin/main' by 3 commits.
  (use "git push" to publish your local commits)
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git push origin main
Enumerating objects: 11, done.
Counting objects: 100% (11/11), done.
Delta compression using up to 16 threads
Compressing objects: 100% (9/9), done.
Writing objects: 100% (9/9), 838 bytes | 838.00 KiB/s, done.
Total 9 (delta 5), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (5/5), completed with 1 local object.
To https://github.com/kiranasdoddmani/LocalRepo.git
   ba47a54..a6c8edc  main -> main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git branch
  feature1
* main
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git add .
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status
On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   index.c

PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git reset index.c
Unstaged changes after reset:
M       index.c
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status       
On branch main
Your branch is up to date with 'origin/main'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   index.c

no changes added to commit (use "git add" and/or "git commit -a")
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git add .
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git commit -m "delete button"
[main 0a58798] delete button
 1 file changed, 1 insertion(+), 1 deletion(-)
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status
On branch main
Your branch is ahead of 'origin/main' by 1 commit.
  (use "git push" to publish your local commits)

nothing to commit, working tree clean
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git reset HEAD~1
Unstaged changes after reset:
M       index.c
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status      
On branch main
Your branch is up to date with 'origin/main'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   index.c

no changes added to commit (use "git add" and/or "git commit -a")
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git log
commit a6c8edc371dd86db785c070c506dd66bf7d91a9c (HEAD -> main, origin/main, feature1)
Merge: e457aaf 55b9dd7
Author: kiranasdoddmani <3310kiranasdoddmani@gmail.com>
Date:   Sat Apr 5 19:13:34 2025 +0530

    Adding both

commit e457aaf90a16221adbbfa5d80b5190d79934ba18
Author: kiranasdoddmani <3310kiranasdoddmani@gmail.com>
Date:   Sat Apr 5 18:28:15 2025 +0530
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git reset e457aaf90a16221adbbfa5d80b5190d79934ba18
Unstaged changes after reset:                                               
M       index.c
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status
On branch main
Your branch is behind 'origin/main' by 3 commits, and can be fast-forwarded.
  (use "git pull" to update your local branch)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   index.c

no changes added to commit (use "git add" and/or "git commit -a")
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git log
commit e457aaf90a16221adbbfa5d80b5190d79934ba18 (HEAD -> main)
Author: kiranasdoddmani <3310kiranasdoddmani@gmail.com>
Date:   Sat Apr 5 18:28:15 2025 +0530

    adding drownsom

commit e76a71557828deba5c3ef56ad1ffbc67d075319b (origin/feature1)
Author: kiranasdoddmani <3310kiranasdoddmani@gmail.com>
Date:   Sat Apr 5 18:08:15 2025 +0530

PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git log   
commit e457aaf90a16221adbbfa5d80b5190d79934ba18 (HEAD -> main)
Author: kiranasdoddmani <3310kiranasdoddmani@gmail.com>
Date:   Sat Apr 5 18:28:15 2025 +0530

    adding drownsom

commit e76a71557828deba5c3ef56ad1ffbc67d075319b (origin/feature1)
Author: kiranasdoddmani <3310kiranasdoddmani@gmail.com>
Date:   Sat Apr 5 18:08:15 2025 +0530

PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git reset --hard e457aaf90a16221adbbfa5d80b5190d79934ba18
HEAD is now at e457aaf adding drownsom
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git reset --hard e457aaf90a16221adbbfa5d80b5190d79934ba18
HEAD is now at e457aaf adding drownsom
PS C:\Users\KIRANA S DODDAMANI\Desktop\Git And GitHub\LocalRepo> git status
On branch main
Your branch is behind 'origin/main' by 3 commits, and can be fast-forwarded.
  (use "git pull" to update your local branch)

nothing to commit, working tree clean