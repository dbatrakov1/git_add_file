#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
How to use:
1)gh repo create Repo_name //repository name
git init
git remote add git_add_file https://github.com/Username/Repo_name.git
git push --set-upstream Repo_name master
      
2) ./git_add file_name.c comment
("file_name.c" is a file which you going to aad to repository
"comment" is a commitment comment, IF(comment == 0)THAN comment = file_name.c)

3) Enter two times user name and password (to push and pull files)
 */
int main( int argc, char *argv[] )  {

  if( argc == 3 ) {
    printf("Program name %s, comment %s\n", argv[1], argv[2]);
  }
  else if( argc > 3 ) {
    printf("Too many arguments supplied.\n");
    return 1;
  }
  else {
    printf("Two arguments expected.\n");
    return 1;
  }
  //  system("git status");
  system("git pull");
  char buf1[50];
  sprintf(buf1, "git add %s", argv[1]);
  system(buf1);
  char buf2[50];
  sprintf(buf2, "git commit -m ""%s""", (*argv[2] == '0') ? argv[1] : argv[2]);
  system(buf2);
  system("git push");
}
  
