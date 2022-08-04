#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<time.h>

void mathscal(){
    char eq[100];
    int t[10];
    char ex[10];
    char xp[100];
    char * token;
    printf("Enter your equation : ");
    scanf("%s",eq);
    int l=strlen(eq);
    int x=0;
    for(int i=0;i<l;i++){
        if(eq[i]=='+' ||eq[i]=='-' ||eq[i]=='*' ||eq[i]=='/' ||eq[i]=='%'){
            ex[x]=eq[i];
            sprintf(xp,"%c",eq[i]);
            token = strtok(eq, xp);
            t[x]= atoi(token);
            x++;
            break;
        }
    }
    for(int i=0;i<l;i++){
        if(eq[i]=='+' ||eq[i]=='-' ||eq[i]=='*' ||eq[i]=='/' ||eq[i]=='%'){
            ex[x]=eq[i];
            sprintf(xp,"%c",eq[i]);
            token = strtok(NULL,xp);
            t[x]= atoi(token);
            x++;
            break;
        }
    }
    token = strtok(NULL,"");
    t[x]= atoi(token);
    int no,n,i,ans;
    ans=t[0];
    for(i=0;i<l-1;++i){
        switch (ex[i]){
            case '+':
            ans=ans+t[i+1];
            break;
            case '-':
            ans=ans-t[i+1];
            break;
            case '*':
            ans=ans*t[i+1];
            break;
            case '/':
            ans=ans/t[i+1];
            break;
            case '%':
            ans=ans%t[i+1];
            break;
        }
    }
    printf("\n\nYour answer is: %d", ans);
}

void lengthconv(){
    char ch1[10],ch2[10];
    double inp1, conv=0, ans;
    int ft, in;
    printf("\n\n\n");
    printf("Choose type of input : \n");
    printf("Kilometer km\n");
    printf("Meter m\n");
    printf("Centimeter cm\n");
    printf("Millimeter mm\n");
    printf("Foot ft\n");
    printf("Yard yd\n");
    printf("Inch in\n"); 
    printf("Foot Inch ftin\n");
    printf("Nautical Mile nmi\n");
    printf("\n");
    printf("Enter your choice: (km,yd,ft,ftin)\n");
    scanf("%s", ch1);
    if(strcmp(ch1, "ftin")==0){
        printf("Enter value of ft. : \n");
        scanf("%d", &ft);
        printf("Enter value of in. : \n");
        scanf("%d", &in);
    }
    else{
        printf("Enter the value : ");
        scanf("%lf", &inp1);
    }
    printf("\n\n");
    printf("Conversion into?  \n");
    printf("Kilometer km\n");
    printf("Meter m\n");
    printf("Centimeter cm\n");
    printf("Millimeter mm\n");
    printf("Mile mi\n");
    printf("Foot ft\n");
    printf("Yard yd\n");
    printf("Inch in\n"); 
    printf("Foot Inch ftin\n");
    printf("Nautical Mile nmi\n");
    printf("\n");
    printf("Enter your choice: (km,yd,ft,ftin)\n");
    scanf("%s", ch2);
    if(strcmp(ch1, "km")==0){
        conv= inp1*1000;
    }
    else if(strcmp(ch1, "m")==0){
        conv= inp1;
    }
    else if(strcmp(ch1, "cm")==0){
        conv= inp1/100;
    }
    else if(strcmp(ch1, "mm")==0){
        conv= inp1/1000;
    }
    else if(strcmp(ch1, "mi")==0){
        conv= inp1*1609.344;
    }
    else if(strcmp(ch1, "ft")==0){
        conv= inp1/3.28084;
    }
    else if(strcmp(ch1, "yd")==0){
        conv= inp1/1.0936;
    }
    else if(strcmp(ch1, "in")==0){
        conv= inp1/39.37;
    }
    else if(strcmp(ch1, "nmi")==0){
        conv= inp1*1852;
    }
    else if(strcmp(ch1, "ftin")==0){
        conv=((ft*12)+in)/39.37;
    }


    if(strcmp(ch2, "km")==0){
        ans= conv/1000;
    }
    else if(strcmp(ch2, "m")==0){
        ans= conv;
    }
    else if(strcmp(ch2, "cm")==0){
        ans= conv*100;
    }
    else if(strcmp(ch2, "mm")==0){
        ans= conv*1000;
    }
    else if(strcmp(ch2, "mi")==0){
        ans= conv/1609.344;
    }
    else if(strcmp(ch2, "ft")==0){
        ans= conv*3.28084;
    }
    else if(strcmp(ch2, "yd")==0){
        ans= conv*1.0936;
    }
    else if(strcmp(ch2, "in")==0){
        ans= conv*39.37;
    }
    else if(strcmp(ch2, "nmi")==0){
        ans= conv/1852;
    }
    else if(strcmp(ch2, "ftin")==0){
        ans= conv*39.37;
        ft= ans/12;
        if((ans-(ft*12))>6){
            in=(ans-(ft*12)) +1;
        }
        else{
            in= ans-(ft*12);
        }
    }
    printf("\n\n");
    if(strcmp(ch1,ch2)==0){
        printf("Your answer is %.2lf %s", inp1,ch2);
    }
    else if(strcmp(ch2, "ftin")==0){
        printf("Your answer is %d ft %d in", ft,in);
    }
    else{
        printf("Your answer is %.2lf %s",ans,ch2);
    }
}

void areaconv(){
    char ch1[10],ch2[10];
    double inp1, conv=0, ans;
    printf("\n\n\n");
    printf("Choose type of input : \n");
    printf("Square kilometer km\n");
    printf("Hectare ha\n");
    printf("Square meter m\n");
    printf("Sqaure centimeter cm\n");
    printf("Square millimeter mm\n");
    printf("Acre ac\n");
    printf("Square mile mi\n");
    printf("Square foot ft\n");
    printf("Square yard yd\n");
    printf("Square inch in\n"); 
    printf("\n");
    printf("Enter your choice: (km,yd,ac,ha)\n");
    scanf("%s", ch1);
    printf("Enter the value : ");
    scanf("%lf", &inp1);
    printf("\n\n");
    printf("Conversion into?  \n");
    printf("Square kilometer km\n");
    printf("Hectare ha\n");
    printf("Square meter m\n");
    printf("Sqaure centimeter cm\n");
    printf("Square millimeter mm\n");
    printf("Acre ac\n");
    printf("Square mile mi\n");
    printf("Square foot ft\n");
    printf("Square yard yd\n");
    printf("Square inch in\n");
    printf("\n");
    printf("Enter your choice: (km,yd,ac,ha)\n");
    scanf("%s", ch2);
    if(strcmp(ch1, "km")==0){
        conv= inp1*1000000;
    }
    else if(strcmp(ch1,"ha")==0){
        conv= inp1*10000;
    }
    else if(strcmp(ch1, "m")==0){
        conv= inp1;
    }
    else if(strcmp(ch1, "cm")==0){
        conv= inp1/10000;
    }
    else if(strcmp(ch1, "mm")==0){
        conv= inp1/1000000;
    }
    else if(strcmp(ch1,"ac")==0){
        conv= inp1*4046.856;
    }
    else if(strcmp(ch1, "mi")==0){
        conv= inp1*2589988.11;
    }
    else if(strcmp(ch1, "ft")==0){
        conv= inp1/10.7639104;
    }
    else if(strcmp(ch1, "yd")==0){
        conv= inp1/1.19599005;
    }
    else if(strcmp(ch1, "in")==0){
        conv= inp1/1550;
    }



    if(strcmp(ch2, "km")==0){
        ans= conv/1000000;
    }
    else if(strcmp(ch2,"ha")==0){
        ans= conv/10000;
    }
    else if(strcmp(ch2, "m")==0){
        ans= conv;
    }
    else if(strcmp(ch2, "cm")==0){
        ans= conv*10000;
    }
    else if(strcmp(ch2, "mm")==0){
        ans= conv*1000000;
    }
    else if(strcmp(ch2,"ac")==0){
        ans= conv/4046.856;
    }
    else if(strcmp(ch2, "mi")==0){
        ans= conv/2589988.11;
    }
    else if(strcmp(ch2, "ft")==0){
        ans= conv*10.7639104;
    }
    else if(strcmp(ch2, "yd")==0){
        ans= conv*1.19599005;
    }
    else if(strcmp(ch2, "in")==0){
        ans= conv*1550;
    }
    printf("\n\n");
    if(strcmp(ch1,ch2)==0){
        printf("Your answer is %.2lf %s", inp1,ch2);
    }
    else{
        printf("Your answer is %.2lf %s",ans,ch2);
    }
}

void volconv(){
    char ch1[10],ch2[10];
    double inp1, ans, conv=0;
    printf("\n\n\n");
    printf("Choose type of input : \n");
    printf("Cubic meter m\n");
    printf("Cubic centimeter cm\n");
    printf("Cubic millimeter mm\n");
    printf("Liter l\n");
    printf("Centiliter cl\n");
    printf("Mililiter ml\n");
    printf("Cubic foot ft\n");
    printf("Cubic yard yd\n");
    printf("Cubic inch in\n"); 
    printf("\n");
    printf("Enter your choice: (ml,l,m,cm)\n");
    scanf("%s", ch1);
    printf("Enter the value : ");
    scanf("%lf", &inp1);
    printf("\n\n");
    printf("Conversion into?  \n");
    printf("Cubic meter m\n");
    printf("Cubic centimeter cm\n");
    printf("Cubic millimeter mm\n");
    printf("Liter l\n");
    printf("Centiliter cl\n");
    printf("Mililiter ml\n");
    printf("Cubic foot ft\n");
    printf("Cubic yard yd\n");
    printf("Cubic inch in\n"); 
    printf("\n");
    printf("Enter your choice: (ml,l,m,cm)\n");
    scanf("%s", ch2);
    if(strcmp(ch1, "m")==0){
        conv= inp1;
    }
    else if(strcmp(ch1,"cm")==0){
        conv= inp1/1000000;
    }
    else if(strcmp(ch1, "mm")==0){
        conv= inp1/1000000000;
    }
    else if(strcmp(ch1, "l")==0){
        conv= inp1/1000;
    }
    else if(strcmp(ch1, "cl")==0){
        conv= inp1/100000;
    }
    else if(strcmp(ch1,"ml")==0){
        conv= inp1/1000000;
    }
    else if(strcmp(ch1, "ft")==0){
        conv= inp1/35.3146667;
    }
    else if(strcmp(ch1, "yd")==0){
        conv= inp1/1.30795062;
    }
    else if(strcmp(ch1, "in")==0){
        conv= inp1/61023.7441;
    }


    if(strcmp(ch2, "m")==0){
        ans= conv;
    }
    else if(strcmp(ch2,"cm")==0){
        ans= conv*1000000;
    }
    else if(strcmp(ch2, "mm")==0){
        ans= conv*1000000000;
    }
    else if(strcmp(ch2, "l")==0){
        ans= conv*1000;
    }
    else if(strcmp(ch2, "cl")==0){
        ans= conv*100000;
    }
    else if(strcmp(ch2,"ml")==0){
        ans= conv*1000000;
    }
    else if(strcmp(ch2, "ft")==0){
        ans= conv*35.3146667;
    }
    else if(strcmp(ch2, "yd")==0){
        ans= conv*1.30795062;
    }
    else if(strcmp(ch2, "in")==0){
        ans= conv*61023.7441;
    }
    printf("\n\n");
    if(strcmp(ch1,ch2)==0){
        printf("Your answer is %.2lf %s", inp1,ch2);
    }
    else{
        printf("Your answer is %.2lf %s",ans,ch2);
    }
}

void tempconv(){
    char ch1[10],ch2[10];
    double inp, ans;
    printf("\n\n\n");
    printf("Choose type of input : \n");
    printf("Celcius 'C\n");
    printf("Fahrenheit 'F\n");
    printf("Kelvin\n");
    printf("\n");
    printf("Enter your choice: (C,F,K)\n");
    scanf("%s", ch1);
    printf("Enter the value : ");
    scanf("%lf", &inp);
    printf("\n\n");
    printf("Conversion into?  \n");
    printf("Celcius 'C\n");
    printf("Fahrenheit 'F\n");
    printf("Kelvin\n");
    printf("\n");
    printf("Enter your choice: (C,F,K)\n");
    scanf("%s", ch2);
    if(strcmp(ch1,"C")==0 && strcmp(ch2,"F")==0){
        ans= inp*1.8+32;
    }
    else if(strcmp(ch1,"F")==0 && strcmp(ch2,"C")==0){
        ans=(inp-32)/1.8;
    }
    else if(strcmp(ch1,"K")==0 && strcmp(ch2,"F")==0){
        ans=1.8*(inp-273.15)+32;
    }
    else if(strcmp(ch1,"F")==0 && strcmp(ch2,"K")==0){
        ans=((inp-32)/1.8) + 273.15;
    }
    else if(strcmp(ch1,"C")==0 && strcmp(ch2,"K")==0){
        ans= inp+273.15;
    }
     else if(strcmp(ch1,"K")==0 && strcmp(ch2,"C")==0){
        ans=inp-273.15;
    }
    printf("\n\n");
    if(strcmp(ch1,ch2)==0){
        printf("Your answer is %.2lf %s", inp,ch2);
    }
    else{
        printf("Your answer is %.2lf %s",ans,ch2);
    }

}

void speedconv(){
    char ch1[10],ch2[10];
    double inp, ans;
    printf("\n\n\n");
    printf("Choose type of input : \n");
    printf("Meter per second m/s\n");
    printf("Kilometer per hour km/h\n");
    printf("Kilometer per second km/s\n");
    printf("Mile per hour mph\n");
    printf("\n");
    printf("Enter your choice: (m/s, km/h, mph)\n");
    scanf("%s", ch1);
    printf("Enter the value : ");
    scanf("%lf", &inp);
    printf("\n\n");
    printf("Conversion into?");
    printf("Meter per second m/s\n");
    printf("Kilometer per hour km/h\n");
    printf("Kilometer per second km/s\n");
    printf("Mile per hour mph\n");
    printf("\n");
    printf("Enter your choice: (m/s, km/h, mph)\n");
    scanf("%s", ch2);
    if(strcmp(ch1,"m/s")==0 && strcmp(ch2,"km/h")==0){
        ans=inp*3.6;
    }
    else if(strcmp(ch1,"m/s")==0 && strcmp(ch2,"km/s")==0){
        ans=inp/1000;
    }
    else if(strcmp(ch1,"m/s")==0 && strcmp(ch2,"mph")==0){
        ans=inp* 2.23693629;
    }
    else if(strcmp(ch1,"km/h")==0 && strcmp(ch2,"m/s")==0){
        ans=inp/3.6;
    }
    else if(strcmp(ch1,"km/h")==0 && strcmp(ch2,"km/s")==0){
        ans=inp/3600;
    }
    else if(strcmp(ch1,"km/h")==0 && strcmp(ch2,"mph")==0){
        ans=inp/1.609344;
    }
    else if(strcmp(ch1,"km/s")==0 && strcmp(ch2,"m/s")==0){
        ans=inp*1000;
    }
    else if(strcmp(ch1,"km/s")==0 && strcmp(ch2,"km/h")==0){
        ans=inp*3600;
    }
    else if(strcmp(ch1,"km/s")==0 && strcmp(ch2,"mph")==0){
        ans=inp*2236.93629;
    }
    else if(strcmp(ch1,"mph")==0 && strcmp(ch2,"m/s")==0){
        ans=inp/ 2.23693629;
    }
    else if(strcmp(ch1,"mph")==0 && strcmp(ch2,"km/h")==0){
        ans=inp*1.609344;
    }
    else if(strcmp(ch1,"mph")==0 && strcmp(ch2,"km/s")==0){
        ans=inp/2236.93629;
    }
    printf("\n\n");
    if(strcmp(ch1,ch2)==0){
        printf("Your answer is %.2lf %s", inp,ch2);
    }
    else{
        printf("Your answer is %.2lf %s",ans,ch2);
    }

}

void massconv(){
    char ch1[10],ch2[10];
    double inp, ans, conv=0;
    printf("\n\n\n");
    printf("Choose type of input : \n");
    printf("Tonne t\n");
    printf("Kilogram kg\n");
    printf("Gram g\n");
    printf("Miligram mg\n");
    printf("Quintal q\n");
    printf("Pound lb\n");
    printf("Ounce oz\n");
    printf("\n");
    printf("Enter your choice: (t/kg/lb)\n");
    scanf("%s", ch1);
    printf("Enter the value : ");
    scanf("%lf", &inp);
    printf("\n\n");
    printf("Conversion into?  \n");
    printf("Tonne t\n");
    printf("Kilogram kg\n");
    printf("Gram g\n");
    printf("Miligram mg\n");
    printf("Quintal q\n");
    printf("Pound lb\n");
    printf("Ounce oz\n");
    printf("\n");
    printf("Enter your choice: (t/kg/lb)\n");
    scanf("%s", ch2);
    if(strcmp(ch1,"t")==0){
        conv= inp*1000;
    }
    else if(strcmp(ch1,"kg")==0){
        conv=inp;
    }
    else if(strcmp(ch1,"g")==0){
        conv=inp/1000;
    }
    else if(strcmp(ch1,"mg")==0){
        conv=inp/1000000;
    }
    else if(strcmp(ch1,"q")==0){
        conv=inp*100;
    }
    else if(strcmp(ch1,"lb")==0){
        conv=inp/2.20462262;
    }
    else if(strcmp(ch1,"oz")==0){
        conv=inp/35.2739619;
    }


    if(strcmp(ch2,"t")==0){
        ans=conv/1000;
    }
    else if(strcmp(ch2,"kg")==0){
        ans=conv;
    }
    else if(strcmp(ch2,"g")==0){
        ans=conv*1000;
    }
    else if(strcmp(ch2,"mg")==0){
        ans=conv*1000000;
    }
    else if(strcmp(ch2,"q")==0){
        ans=conv/100;
    }
    else if(strcmp(ch2,"lb")==0){
        ans=conv*2.20462262;
    }
    else if(strcmp(ch2,"oz")==0){
        ans=conv*35.2739619;
    }

    printf("\n\n");
    if(strcmp(ch1,ch2)==0){
        printf("Your answer is %.2lf %s", inp,ch2);
    }
    else{
        printf("Your answer is %.2lf %s",ans,ch2);
    }

}

void numsystem(){
    char ch1[10],ch2[10];
    int inp1, s=0, ans=0, conv=0;
    char inp2[20];
    printf("\n\n\n");
    printf("Select numeral system : \n");
    printf("Binary BIN\n");
    printf("Octal OCT\n");
    printf("Decimal DEC\n");
    printf("Hexadecimal HEX\n");
    printf("\n");
    printf("Enter your choice: (BIN, DEC, HEX)\n");
    scanf("%s", ch1);
    printf("Enter the value : ");
    if(strcmp(ch1,"BIN")==0 || strcmp(ch1,"DEC")==0 || strcmp(ch1,"OCT")==0){
        scanf("%d", &inp1);
    }
    else if(strcmp(ch1,"HEX")==0){
        scanf("%s", inp2);
    }
    printf("\n\n");
    printf("Conversion into? \n");
    printf("Binary BIN\n");
    printf("Octal OCT\n");
    printf("Decimal DEC\n");
    printf("Hexadecimal HEX\n");
    printf("\n");
    printf("Enter your choice: (BIN, DEC, HEX)\n");
    scanf("%s", ch2);
    if(strcmp(ch1,"BIN")==0 && strcmp(ch2,"DEC")==0){
        int i=0;
        while(inp1!=0){
            s=(inp1%10)*(int)pow(2,i);
            conv=conv+s;
            inp1=inp1/10;
            i=i+1;
        }
        printf("Your ans is %d", conv);
    }
    else if(strcmp(ch1,"DEC")==0 && strcmp(ch2,"BIN")==0){
        int rem, i = 1;
        while (inp1!=0) {
            rem = inp1 % 2;
            inp1 /= 2;
            conv += rem * i;
            i *= 10;
        }
        printf("Your ans is %d", conv);
    }
    else if(strcmp(ch1,"BIN")==0 && strcmp(ch2,"OCT")==0){
        int i=0;
        while(inp1!=0){
            s=(inp1%10)*(int)pow(2,i);
            ans=ans+s;
            inp1=inp1/10;
            i=i+1;
        }
        int j=1;
        while(ans!=0){
            conv += (ans % 8) * j;
            ans /= 8;
            j *= 10;
        }
        printf("Your ans is %d", conv);
    }
    else if(strcmp(ch1,"OCT")==0 && strcmp(ch2,"BIN")==0){
        int i=0;
        while (inp1 != 0) {
        ans += (inp1 % 10) * pow(8, i);
        ++i;
        inp1 /= 10;
        }
        i = 1;
        while (ans != 0) {
        conv += (ans % 2) * i;
        ans /= 2;
        i *= 10;
        }
        printf("Your ans is %d", conv);
    }
    else if(strcmp(ch1,"BIN")==0 && strcmp(ch2,"HEX")==0){
        int remainder, i=1;
        while (inp1 != 0){
            remainder = inp1 % 10;
            ans = ans + remainder * i;
            i = i * 2;
            inp1 = inp1 / 10;
        }
        printf("%X", ans);
    }
    else if(strcmp(ch1,"HEX")==0 && strcmp(ch2,"BIN")==0){
        int i=0;
        while (inp2[i])
        {
        switch (inp2[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
            printf("1010"); break;
        case 'B':
            printf("1011"); break;
        case 'C':
            printf("1100"); break;
        case 'D':
            printf("1101"); break;
        case 'E':
            printf("1110"); break;
        case 'F':
            printf("1111"); break;
        default:
            printf("\n Invalid hexa digit %c ", inp2[i]);
            break;
        }
        i++;
    }
    }
    else if(strcmp(ch1,"DEC")==0 && strcmp(ch2,"OCT")==0){
        int j=1;
        while(inp1!=0){
            conv += (inp1 % 8) * j;
            inp1 /= 8;
            j *= 10;
        }
        printf("Your ans is %d", conv);
    }
    else if(strcmp(ch1,"OCT")==0 && strcmp(ch2,"DEC")==0){
        int i=0;
        while (inp1 != 0) {
        ans += (inp1 % 10) * pow(8, i);
        ++i;
        inp1 /= 10;
        }
        printf("Your ans is %d", ans);
    }
    else if(strcmp(ch1,"DEC")==0 && strcmp(ch2,"HEX")==0){
        long quotient, remainder;
        int i, j = 0;
        char hexadecimalnum[100];
        quotient = inp1;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
    printf("Your ans is- " );
    for (i = j; i >= 0; i--){
        printf("%c", hexadecimalnum[i]);
    }
    }
    else if(strcmp(ch1,"HEX")==0 && strcmp(ch2,"DEC")==0){
        int decimal = 0, base = 1;
        int i = 0, value, length;
        length = strlen(inp2);
        for(i = length--; i >= 0; i--)
        {
        if(inp2[i] >= '0' && inp2[i] <= '9')
        {
            decimal += (inp2[i] - 48) * base;
            base *= 16;
        }
        else if(inp2[i] >= 'A' && inp2[i] <= 'F')
        {
            decimal += (inp2[i] - 55) * base;
            base *= 16;
        }
        else if(inp2[i] >= 'a' && inp2[i] <= 'f')
        {
            decimal += (inp2[i] - 87) * base;
            base *= 16;
        }
    }
    printf("Your ans is = %d\n", decimal);
    }
    else if(strcmp(ch1,"OCT")==0 && strcmp(ch2,"HEX")==0){
        int i=0;
        while (inp1 != 0) {
        ans += (inp1 % 10) * pow(8, i);
        ++i;
        inp1 /= 10;
        }
        long quotient, remainder;
        int k, j = 0;
        char hexadecimalnum[100];
        quotient = ans;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
    printf("Your ans is-" );
    for (k = j; k >= 0; k--){
        printf("%c", hexadecimalnum[k]);
    }
    }
    else if(strcmp(ch1,"HEX")==0 && strcmp(ch2,"OCT")==0){
        int decimal = 0, base = 1;
        int i = 0, value, length;
        length = strlen(inp2);
        for(i = length--; i >= 0; i--)
        {
        if(inp2[i] >= '0' && inp2[i] <= '9')
        {
            decimal += (inp2[i] - 48) * base;
            base *= 16;
        }
        else if(inp2[i] >= 'A' && inp2[i] <= 'F')
        {
            decimal += (inp2[i] - 55) * base;
            base *= 16;
        }
        else if(inp2[i] >= 'a' && inp2[i] <= 'f')
        {
            decimal += (inp2[i] - 87) * base;
            base *= 16;
        }
        }
    int j=1;
        while(decimal!=0){
            conv += (decimal % 8) * j;
            decimal /= 8;
            j *= 10;
        }
        printf("Your ans is %d", conv);
}
}

void bmical(){
    double weight,cms,  height;
    double bmi;
    printf("Enter your weight(kgs) : ");
    scanf("%lf", &weight);
    printf("Enter your height(cms) : ");
    scanf("%lf", &cms);
    height= cms/100;
    bmi=weight/(height*height);
    printf("\n\n");
    printf("Your BMI is : %.1lf\n\n", bmi);
    printf("Status : \n");
    if(bmi<18.5){
        printf("Underweight\n\n");
    }
    else if(bmi>18.5 && bmi<25){
        printf("Normal\n\n");
    }
    else if(bmi>25){
        printf("Overweight\n\n");
    }
}

int monthdates(int n){
    switch(n){
        case 1:
        return 31;
        case 2:
        return 28;
        case 3:
        return 31;
        case 4:
        return 30;
        case 5:
        return 31;
        case 6:
        return 30;
        case 7:
        return 31;
        case 8:
        return 31;
        case 9:
        return 30;
        case 10:
        return 31;
        case 11:
        return 30;
        case 12:
        return 31;
        default:
        return 0;
    }
}

void agecal(){
    char birth[100], today[100];
    printf("Enter your birth date(dd/mm/yyyy) : ");
    scanf("%s",birth);
    //printf("Enter today's date(dd/mm/yyyy) : ");
    //scanf("%s",today);
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    //printf("Current Date: %d-%d-%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
    char * token = strtok(birth, "/");
    int bdate= atoi(token);
    token = strtok(NULL, "/");
    int bmonth= atoi(token);
    token = strtok(NULL, "/");
    int byear= atoi(token);
    int tdate=tm.tm_mday;
    int tmonth=tm.tm_mon+1;
    int tyear=tm.tm_year+1900;
    /*
    char * token1 = strtok(today, "/");
    int tdate= atoi(token1);
    token1 = strtok(NULL, "/");
    int tmonth= atoi(token1);
    token1 = strtok(NULL, "/");
    int tyear= atoi(token1);
    */
    int agey, agem,aged;
    if(bdate<=31 && tdate<=31 && bmonth<=12 && tmonth<=12 && tyear>=byear){
    if(tmonth>bmonth){
        agey=tyear-byear;
        if(tdate>=bdate){
            agem=tmonth-bmonth;
            aged=tdate-bdate;
        }
        else{
            agem=tmonth-1-bmonth;
            int mdays=monthdates(bmonth);
            aged=(mdays-bdate)+tdate;
        }
    }
    else if(tmonth==bmonth){
        if(tdate>=bdate){
            agey=tyear-byear;
            agem=0;
            aged=tdate-bdate;
        }
        else{
            agey=tyear-1-byear;
            agem=11;
            int mdays=monthdates(bmonth-1);
            aged=(mdays-bdate)+tdate;
        }
    }
    else{
        agey=tyear-1-byear;
        if(tdate>=bdate){
            agem=(12-bmonth)+tmonth;
            aged=tdate-bdate;
        }
        else{
            agem=(12-bmonth)+tmonth-1;
            int mdays=monthdates(bmonth-1);
            aged=(mdays-bdate)+tdate;
        }
    }

    printf("\n\nYour age is : \n");
    printf("%d Years %d Months %d Days\n",agey,agem,aged);
    }
    else{
        printf("Invalid input");
    }
}

int currencycal(){
    return 0;
}

int gstcal(){
    return 0;
}

int main(){
    int op;
    system("clear");
    while (1){
        printf("\n\n\n");
        printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n");
        printf("MULTIFUNCTIONAL CALCULATOR\n");
        printf("\n");
        printf("TYPES OF OPERATIONS:\n");
        printf("\n");
        printf("1. Maths Calculator\n");
        printf("2. Length Converter\n");
        printf("3. Area Converter\n");
        printf("4. Volume Converter\n");
        printf("5. Temperature Converter\n");
        printf("6. Speed Converter\n");
        printf("7. Mass Converter\n");
        printf("8. Numeral System\n");
        printf("9. BMI Calculator\n");
        printf("10. Age Calculator\n");
        printf("11. Currency Converter\n");
        printf("12. GST Calculator\n\n");
        printf("(0)Exit\n\n");
        printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n");
        printf("Enter your choice: ");
        scanf("%d", &op);
        printf("\n\n");
        switch (op){
            case 1:
                system("clear");
                mathscal();
                break;
            case 2:
                system("clear");
                lengthconv();
                break;
            case 3:
                system("clear");
                areaconv();
                break;
            case 4:
                system("clear");
                volconv();
                break;
            case 5:
                system("clear");
                tempconv();
                break;
            case 6:
                system("clear");
                speedconv();
                break;
            case 7:
                system("clear");
                massconv();
                break;
            case 8:
                system("clear");
                numsystem();
                break;
            case 9:
                system("clear");
                bmical();
                break;
            case 10:
                system("clear");
                agecal();
                break;
            case 11:
                system("clear");
                currencycal();
                break;
            case 12:
                system("clear");
                gstcal();
                break;
            case 0:
                exit(1);
            default:
                printf("Invalid Input");
        }
    }
    return 0;
}