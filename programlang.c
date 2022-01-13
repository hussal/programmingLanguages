//  Created by Hussein Saleh on 9/5/21.
//Programming languages assignment

#include <stdio.h>

int main() {
    
    int html;
    int java;
    int cpp;
    int csharp;
    int js;
    int php;
    int swift;
    int kot;
    int python;
    int total;
    int weblang;
    int mobile;
    int objOr;
    
    printf("Welcome to the Calumet High School Programming Survey \n");
    printf("Please enter the total number of students who know: \n");
    
    printf("\t HTML: ");
    scanf("%d", &html);
    
    printf("\n \t Java: ");
    scanf("%d", &java);
    
    printf("\n \t C++: ");
    scanf("%d", &cpp);
    
    printf("\n \t C#: ");
    scanf("%d", &csharp);
    
    printf("\n \t JavaScript: ");
    scanf("%d", &js);
    
    printf("\n \t PhP: ");
    scanf("%d", &php);
    
    printf("\n \t Swift: ");
    scanf("%d", &swift);
    
    printf("\n \t Kotlin: ");
    scanf("%d", &kot);
    
    printf("\n \t Python: ");
    scanf("%d", &python);
    
    total = html + java + cpp + csharp + js + php + swift + kot + python;
    weblang = js + php + html;
    mobile = swift + kot;
    objOr = java + cpp + csharp + python;
    
    printf("\n Total students: %d", total);
    printf("\n Total who know Web languages: %d", weblang);
    printf("\n Total who know Mobile App Dev languages: %d", mobile);
    printf("\n Total who know Object Oriented languages: %d \n", objOr);
    
    return 0;
}
