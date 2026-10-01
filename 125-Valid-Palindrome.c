bool isPalindrome(char* s) {
    int j=0,i=0;

    while(s[j]!='\0'){
        j++;
    }
    j--;
    while(i<j){
        while(i<j&&!isalnum(s[i])){
            i++;
        }
        while(i<j&&!isalnum(s[j])){
            j--;
        }
    if(tolower(s[i])!=tolower(s[j])){
        return false;
    }   
    i++;
    j--;
    }
    return true;
}

    