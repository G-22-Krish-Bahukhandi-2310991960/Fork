// #include<stdio.h>
// int main(){
//     float rice_price=16.75, sugar_price=15,quant_rice, quant_sugar;
//     printf("How much rice u need: ");
//     scanf("%f",&quant_rice);
//     printf("How much sugar u need: ");
//     scanf("%f",&quant_sugar);
//     printf("****List of ITEMS****\n");
//     printf("ITEM\t\t\t\tPrice\n");
//     printf("Rice\t\t\t\t%f\n",rice_price*quant_rice);
//     printf("Sugar\t\t\t\t%f\n",sugar_price*quant_sugar);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     label:
//     int a,b,c,d;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);
//     scanf("%d",&d);
//     Swith(d){
//         case 1:
        
//     }



// }


#include<stdio.h>
int main(){
    // for(int i=0; i<10;i+=2){
    //     printf("%d",i);
    // }
    // return 0;

    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=0; i<b;i++){
        int t=a;
        a=t*b;
        printf("%d",a);
    }
    return 0;
}