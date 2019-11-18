#include <stdio.h>

int main{
 "$(cut -d ' ' -f7 log.txt | awk '{
    list[$1]+=$2
   }
   END {
     for (i in list) printf("%s\t%s\n",i,list[i])
   }' | sort -r -n -k 2 | head -n 5 )"}'
   
}
