bool isValid(char * s){
    int len = strlen(s);
    if(len ==0) return true;
    char stack[len];
    int top=-1;
    for(int i=0;i<len;++i)
    {
        if (top > -1 && ((stack[top] == '(' && s[i] == ')') || (stack[top] == '[' && s[i] == ']') || (stack[top] == '{' && s[i] == '}')))
        {
            top--;
        }else{
            stack[++top]=s[i];
        }
    }
    if(top==-1)
    {
        return true;
    }
    return false;
}
