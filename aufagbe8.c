void teil(int x){       
    int y=2,i;      

for( i=2;i<=x/2;i++){ // schleife for i=von 2 bis zum Hälfte der eingegebenen Zahl x ,um Teilbarkeit zu überprüfen o
    
    if(x%i==0){         //if-Anweisung(wenn die eingegebenen Zahl x duch eine Zahle x zwischen 2 und x/2 teilbar ist )
        y=x/i;          // falls die Bedingung erfüllt ist, folgt: y=x/i 
         if(i>y)        // diese if-anweisung um die wiederhokung der teiler-Paar zu vermeiden
         break;
          printf(",(%d,%d)",i,y);
    
    }
}
}

int main()
{ int x;
printf("Zahl eingeben\n"); // eine Nachrichet zum Nutzer
scanf("%d",&x);            // um eine Zahl einzulesen
printf("((1,%d)",x);       // jede Zahl ist durch 1 teibar
teil(x);                  //Funktionssaufruf
printf(")");
    return 0;
}
