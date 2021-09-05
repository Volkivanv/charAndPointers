#include <iostream>


bool substr(char* x,char* y){
    int i = 0;

    while(*(x + i) != '\0'){
        int j = 0;
       while(*(x + i + j) == * (y + j) ){
           ++j;
           if (*(y + j) == '\0') return true;


       }
       ++i;

    }

    return false;

}


int main() {
    char a[] = "Hello world";
    char b[] = "world";
    char c[] = "banana";

    std::cout << (substr(a,b)? "true": "false") << " " << (substr(a,c)? "true": "false");

}
