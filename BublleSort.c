void bsort (int v[],int qtd){
     int i, j;
     //i = n° de etapas
     //j= determina o m/ de comparações
     int aux;
     for (i=1;i<qtd;i++){
    // p/ i=1 => 1<5 V continua
    // p/ i=2 => 2<5 V continua
          for (j=0;j<qtd-i;j++){
   //p/ i=1 => j=0 => 0<5-1=4 => V continua
    		  //j=1 => 1<5-1=4 => V continua
    		  //j=2 => 2<5-1=4 => V continua
    		  //j=3 => 3<5-1=4 => V continua
    		  //j=4 => 4<5-1=4 => F sai (sobe)
               if (v[j]>v[j+1]){
            //p/i=1 => v[0]>v[0+1]=46>39 => V entra
                 //v[1]>v[1+1]=46>55 => F sai
                 //v[2]>v[2+1]=55>14 => V entra
                 //v[3]>v[3+1]=55>27 => V entra
    
			         aux=v[j];
		  //p/i=1 => aux=v[0]=46
				  // aux=v[2]=55
				  // aux=v[3]=55	
                     v[j]=v[j+1];
        	//p/i=1 => v[0]=v[0+1]=39
        	        //v[2]=v[2+1]=14
        	        //v[3]=v[3+1]=27
                     v[j+1]=aux;
            //p/i=1 => v[0+1]=46
                    //v[2+1]=55
                    //v[3+1]=55
               }
          }
     }
}
