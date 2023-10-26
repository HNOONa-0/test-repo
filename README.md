first we create a folder for the repo. inside the folder, we then create main.cpp file, initializing getSum function and include necessary libraries.

then, we intialize the repo and push changes using following commands:
```
git init
git add .
git commit -m "init commit"
git remote add origin https://github.com/HNOONa-0/test-repo.git
git branch -M main
git push -u origin main
```
then, we create a branch b1 using the following command:
```
git checkout -b b1
```
inside b1 branch, we then add logic for getAverage function, print the result. we commit and push the changes using following commands:
```
git add .
git commit -m "add average function"
git push -u origin b1
```
then we checkout main (stand on main branch) using following command:
```
git checkout main
```

similarly, we create another branch b2:
```
git checkout -b b2
```
we add logic for getMin function, we commit and push the changes using the following commands:
```
git add .
git commit -m "add min function"
git push -u origin b2
```
again, checkout main:
```
git checkout main
```
pulling changes if necessary

we now merge main branch with b1 using following command:
```
git merge b1
```
there were conflicts with main.exe, easily resolved
push these changes:
```
git add .
git commit -m "merge b1"
git push -u origin main
```
again, merge main branch with b2:
```
git merge b2
```
there were conflicts inside main, above main with newly added function getMin and main.exe, easily resolved
finally, push these changes:
```
git add .
git commit -m "merge b2"
git push -u origin main
```
done!`