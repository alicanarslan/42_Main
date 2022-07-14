int ft_isdigit(int x){
    if (x >= 0 && x <= 9) return 1;
    else return 0;
}
 int main()
 {
     char c;
     char res;    
     c = '$';
     res = ft_isdigit(c);
     printf("%d\n", res);
     c = 'G';
     res = ft_isdigit(c);
     printf("%d\n", res);
     c = '1';
     res = ft_isdigit(c);
     printf("%d\n", res);
     c = '3';
     res = ft_isdigit(c);
     printf("%d\n", res);
 }