#include <stdio.h>
#include <stdlib.h>

//diziler pointerın özel bir hali bu yüzden pointerı bir dizi olarak kullanabilmeliyim. bellek tahsisinden sonra pointerı dizi olarak kullanabiliriz.
//c ve c tabanlı dillerde pointer hangi tipte tanımlanmışsa o tipte değerler atayabilirsin bunun içinde bellek tahsisi gerekir buna da dynamic memory allocation denir
//bunun için de kullandığımız üç fonk var malloc calloc -> bunlar pointera ilk defa bellek ataması yapmak istediğimiz zaman kullanılır ralloc bunun için kullanılmaz 
// ralloc tahsis edilmiş bir bellek alanını genişletmek için kullanılır aksi takdirde istenmeyen sonuclar doğurabilir
//bu fonksiyonların üçü de stdlib.h içinde bulunur
//type casting tip değiştirmek için. bazı derleyiciler malloc kullanmak için bunu kesin istiyor
//p= (int *) bunun anlamı int to pointer
//mallocta afaki değer giriyoruz belki iyer yoktur aşar Bunun da kontrolünü if(p==NULL) bununla yaparız. bu işlemmle belleğin tahsis edilip edilemediğini anlarız
//tahsis ettiğin belleği serbest bırakmak için free yi kullanmak zorundasın

int main()
{
    int *p,i,n=10;
    p=(int *)malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("out of memory");
        exit(1);// programı biritmek için exit(0) da yazabilirsin fark etmez.
    }
    // bu satıra geldiyse bellekte yer açılmış demektir
    
    printf("adress of p:%X\n",p);
    
    for(i=0;i<10;i++) // hangi adreslerin tahsis edildiğini göstermek için bu foru açtık yani adresleri yazdırıyoruz
    {
      printf("%X\n",&p[i]);

    }
    
    
    
    for(i=0;i<10;i++) // hangi adreslerin tahsis edildiğini göstermek için bu foru açtık yani adresleri yazdırıyoruz
    {
        // p[i]=i;
         *(p+i)=i; //üsttekiyle aynı işlem
        // printf("%X\n",&p[i]);
        printf("i:%d %X %d \n",i,&p[i],p[i]);
    }
        
    for(i=-100;i<11;i++) // başka bir program kullanmadığı için -1dekileri de tahsis etti. ama başka program kullanmış olsaydı patlardı bellek taşar
     {
         p[i]=i;
         printf(",=%d ,%X\n",i,&p[i]);
         
     } 
        
    free(p);
    return 0;
}