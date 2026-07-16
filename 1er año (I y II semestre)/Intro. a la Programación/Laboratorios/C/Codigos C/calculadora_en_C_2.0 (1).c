#include<stdio.h>
#include<math.h>

int main(){
    
int entrada,salida=1,op;
float a,b,res=0;
int ent;
do{
printf("CALCULADORA\n");
printf("[1] SUMA/RESTA [2]MULTIPLICACION\n");
printf("[3] DIVISION   [4]MODULO \n");
printf("[5] FACTORIAL  [6]POTENCIA \n");
printf("[7] RAIZ    \n");
scanf("%d",&op);

 switch(op){
    case 1:// suma/resta
        if(res==0){
            printf("INGRESE EL PRIMER VALOR A SUMAR/RESTAR\n");
            scanf("%d",&a);
            printf("INGRESE EL SEGUNDO VALOR\n");
            scanf("%d",&b);
            res=a+b;
            
        }else{

            printf("INGRESE EL VALOR A SUMAR/RESTAR A %d \n",res);
            scanf("%d",&b);
            res=res+b;
            
        }
        ent= (int)res;
    printf("EL RESULTADO ES:\n" );
    switch(ent){
        case 0: printf("%.0f (cero)", res); break;
                case 1: printf("%.0f (uno)", res); break;
                case 2: printf("%.0f (dos)", res); break;
                case 3: printf("%.0f (tres)", res); break;
                case 4: printf("%.0f (cuatro)", res); break;
                case 5: printf("%.0f (cinco)", res); break;
                case 6: printf("%.0f (seis)", res); break;
                case 7: printf("%.0f (siete)", res); break;
                case 8: printf("%.0f (ocho)", res); break;
                case 9: printf("%.0f (nueve)", res); break;
                case 10: printf("%.0f (diez)", res); break;
                case 11: printf("%.0f (once)", res); break;
                case 12: printf("%.0f (doce)", res); break;
                case 13: printf("%.0f (trece)", res); break;
                case 14: printf("%.0f (catorce)", res); break;
                case 15: printf("%.0f (quince)", res); break;
                case 16: printf("%.0f (diecis�is)", res); break;
                case 17: printf("%.0f (diecisiete)", res); break;
                case 18: printf("%.0f (dieciocho)", res); break;
                case 19: printf("%.0f (diecinueve)", res); break;
                case 20: printf("%.0f (veinte)", res); break;
                case 21: printf("%.0f (veintiuno)", res); break;
                case 22: printf("%.0f (veintid�s)", res); break;
                case 23: printf("%.0f (veintitr�s)", res); break;
                case 24: printf("%.0f (veinticuatro)", res); break;
                case 25: printf("%.0f (veinticinco)", res); break;
                case 26: printf("%.0f (veintis�is)", res); break;
                case 27: printf("%.0f (veintisiete)", res); break;
                case 28: printf("%.0f (veintiocho)", res); break;
                case 29: printf("%.0f (veintinueve)", res); break;
                case 30: printf("%.0f (treinta)", res); break;
    } 
    break;

    case 2://multiplicacion
        if(res==0){
            printf("INGRESE EL PRIMER VALOR A MULTIPLICAR\n");
            scanf("%d",&a);
            printf("INGRESE EL SEGUNDO VALOR\n");
            scanf("%d",&b);
            res=a*b;
            
        }else{
            printf("INGRESE EL VALOR A MULTIPLICAR A %d \n",res);
            scanf("%d",&b);
            res=res*b;
            
        }
        ent= (int)res;
    printf("EL RESULTADO ES:\n" );
    switch(ent)
    {
        case 0: printf(" %d (cero)",res);
        break;
        case 1: printf(" %d (uno)",res);
        break;
        case 2: printf("%d (dos)",res);
        break;
        case 3: printf("%d (tres)",res);
        break;
        case 4: printf("%d (cuatro)",res);
        break;
        case 5: printf("%d (cinco)",res);
        break;
        case 6: printf("%d (seis)",res);
        break;
        case 7: printf("%d (siete)",res);
        break;
        case 8: printf("(ocho)",res);
        break;
        case 9: printf("%d (nueve)",res);
        break;
        case 10: printf("%d (diez)",res);
        break;
        case 11: printf("%d (once)",res);
        break;
        case 12: printf("%d (doce)",res);
        break;
        case 13: printf("%d (trece)",res);
        break;
        case 14: printf("%d (catorce)",res);
        break;
        case 15: printf("%d (quince)",res);
        break;
        case 16: printf("%d (dieciséis)",res);
        break;
        case 17: printf("%d (diecisiete)",res);
        break;
        case 18: printf("%d (dieciocho)",res);
        break;
        case 19: printf("%d (diecinieve)",res);
        break;
        case 20: printf("%d (veinte)",res);
        break;
        case 21: printf("%d (veintiuno)",res);
        break;
        case 22: printf("%d (veintidós)",res);
        break;
        case 23: printf("%d (veintitrés)",res);
        break;
        case 24: printf("%d (veinticuatro)",res);
        break;
        case 25: printf(" %d (vienticinco)",res);
        break;
        case 26: printf(" %d (vientiséis)",res);
        break;
        case 27: printf("%d (veintisiete)",res);
        break;
        case 28: printf("%d (veintiocho)",res);
        break;
        case 29: printf("%d (veintinueve)",res);
        break;
        case 30: printf("%d (treinta)",res);
        break;
    } 
    break;
    
    case 3://division
        if(res==0){
            printf("INGRESE EL VALOR DEL DIVIDENDO\n");
            scanf("%d",&a);
            do{
                printf("INGRESE El DEL VALOR DIVISOR\n");
                scanf("%d",&b);
            }while(b==0);
            res=a/b;
            
        }else{
            do{
                printf("INGRESE EL VALOR QUE VA A DIVIDIR A %d \n",res);
                scanf("%d",&b);
            }while(b==0);
            res=res/b;
            
        }
    ent= (int)res;
    printf("EL RESULTADO ES:\n" );
    switch(ent)
    {
        case 0: printf(" %d (cero)",res);
        break;
        case 1: printf(" %d (uno)",res);
        break;
        case 2: printf("%d (dos)",res);
        break;
        case 3: printf("%d (tres)",res);
        break;
        case 4: printf("%d (cuatro)",res);
        break;
        case 5: printf("%d (cinco)",res);
        break;
        case 6: printf("%d (seis)",res);
        break;
        case 7: printf("%d (siete)",res);
        break;
        case 8: printf("%d(ocho)",res);
        break;
        case 9: printf("%d (nueve)",res);
        break;
        case 10: printf("%d (diez)",res);
        break;
        case 11: printf("%d (once)",res);
        break;
        case 12: printf("%d (doce)",res);
        break;
        case 13: printf("%d (trece)",res);
        break;
        case 14: printf("%d (catorce)",res);
        break;
        case 15: printf("%d (quince)",res);
        break;
        case 16: printf("%d (dieciséis)",res);
        break;
        case 17: printf("%d (diecisiete)",res);
        break;
        case 18: printf("%d (dieciocho)",res);
        break;
        case 19: printf("%d (diecinieve)",res);
        break;
        case 20: printf("%d (veinte)",res);
        break;
        case 21: printf("%d (veintiuno)",res);
        break;
        case 22: printf("%d (veintidós)",res);
        break;
        case 23: printf("%d (veintitrés)",res);
        break;
        case 24: printf("%d (veinticuatro)",res);
        break;
        case 25: printf(" %d (vienticinco)",res);
        break;
        case 26: printf(" %d (vientiséis)",res);
        break;
        case 27: printf("%d (veintisiete)",res);
        break;
        case 28: printf("%d (veintiocho)",res);
        break;
        case 29: printf("%d (veintinueve)",res);
        break;
        case 30: printf("%d (treinta)",res);
        break;
    } 
    break;
    
    case 4://modulo
        if(res==0){
            printf("INGRESE EL VALOR A MODULAR\n");
            scanf("%d",&a);
            do{
                printf("INGRESE El VALOR DEL MODULO\n");
                scanf("%d",&b);
            }while(b==0);
            res= a % b;
            
        }else{
            do{
            printf("INGRESE EL VALOR QUE VA A MODULAR A %d \n",res);
            scanf("%d",&b);
            }while(b==0);
            res=res%b;
            
        }

    ent= (int)res;
    printf("EL RESULTADO ES:\n" );
    switch(ent)
    {
        case 0: printf(" %d (cero)",res);
        break;
        case 1: printf(" %d (uno)",res);
        break;
        case 2: printf("%d (dos)",res);
        break;
        case 3: printf("%d (tres)",res);
        break;
        case 4: printf("%d (cuatro)",res);
        break;
        case 5: printf("%d (cinco)",res);
        break;
        case 6: printf("%d (seis)",res);
        break;
        case 7: printf("%d (siete)",res);
        break;
        case 8: printf("(ocho)",res);
        break;
        case 9: printf("%d (nueve)",res);
        break;
        case 10: printf("%d (diez)",res);
        break;
        case 11: printf("%d (once)",res);
        break;
        case 12: printf("%d (doce)",res);
        break;
        case 13: printf("%d (trece)",res);
        break;
        case 14: printf("%d (catorce)",res);
        break;
        case 15: printf("%d (quince)",res);
        break;
        case 16: printf("%d (dieciséis)",res);
        break;
        case 17: printf("%d (diecisiete)",res);
        break;
        case 18: printf("%d (dieciocho)",res);
        break;
        case 19: printf("%d (diecinieve)",res);
        break;
        case 20: printf("%d (veinte)",res);
        break;
        case 21: printf("%d (veintiuno)",res);
        break;
        case 22: printf("%d (veintidós)",res);
        break;
        case 23: printf("%d (veintitrés)",res);
        break;
        case 24: printf("%d (veinticuatro)",res);
        break;
        case 25: printf(" %d (vienticinco)",res);
        break;
        case 26: printf(" %d (vientiséis)",res);
        break;
        case 27: printf("%d (veintisiete)",res);
        break;
        case 28: printf("%d (veintiocho)",res);
        break;
        case 29: printf("%d (veintinueve)",res);
        break;
        case 30: printf("%d (treinta)",res);
        break;
    } 
    break;
    
    case 5://factorial
        if(res<0){
            printf("EL VALOR DEBE SER UN NUMERO POSITIVO \n");
        }else{
            if(res==0){
                do{
                    printf("INGRESE EL VALOR DE LA BASE\n");
                    scanf("%d",b);

                }while(b<=0); 
                res=1;
                for(a=1;a<b;a++){
                    res=res*a;
                }
            }else{
                
                for(a=(res-1);a>1;a--){
                    res=res*a;
                }
            }
        }
        
    ent= (int)res;
    printf("EL RESULTADO ES:\n" );
    switch(ent)
    {
        case 0: printf(" %d (cero)",res);
        break;
        case 1: printf(" %d (uno)",res);
        break;
        case 2: printf("%d (dos)",res);
        break;
        case 3: printf("%d (tres)",res);
        break;
        case 4: printf("%d (cuatro)",res);
        break;
        case 5: printf("%d (cinco)",res);
        break;
        case 6: printf("%d (seis)",res);
        break;
        case 7: printf("%d (siete)",res);
        break;
        case 8: printf("(ocho)",res);
        break;
        case 9: printf("%d (nueve)",res);
        break;
        case 10: printf("%d (diez)",res);
        break;
        case 11: printf("%d (once)",res);
        break;
        case 12: printf("%d (doce)",res);
        break;
        case 13: printf("%d (trece)",res);
        break;
        case 14: printf("%d (catorce)",res);
        break;
        case 15: printf("%d (quince)",res);
        break;
        case 16: printf("%d (dieciséis)",res);
        break;
        case 17: printf("%d (diecisiete)",res);
        break;
        case 18: printf("%d (dieciocho)",res);
        break;
        case 19: printf("%d (diecinieve)",res);
        break;
        case 20: printf("%d (veinte)",res);
        break;
        case 21: printf("%d (veintiuno)",res);
        break;
        case 22: printf("%d (veintidós)",res);
        break;
        case 23: printf("%d (veintitrés)",res);
        break;
        case 24: printf("%d (veinticuatro)",res);
        break;
        case 25: printf(" %d (vienticinco)",res);
        break;
        case 26: printf(" %d (vientiséis)",res);
        break;
        case 27: printf("%d (veintisiete)",res);
        break;
        case 28: printf("%d (veintiocho)",res);
        break;
        case 29: printf("%d (veintinueve)",res);
        break;
        case 30: printf("%d (treinta)",res);
        break;
    } 



    break;
    
    case 6://potencia

    break;
    
    case 7://raiz

    break;
    
    case 8://salida

    break;


 }


}while (salida != 0);



}
