#include <stdio.h>


struct man
{
    int man_age;
    float man_height;
    char name;
};

int main()   {

    struct man characteristics;
    characteristics.man_age = 21;
    characteristics.man_height = 170.25126;
    characteristics.name = 'P';
    printf("Age is = %d\n", characteristics.man_age);
    printf("Height is = %f\n", characteristics.man_height);
    printf("Name is = %c\n", characteristics.name);



// --------------------------Big example----------------------------------


struct student
{
   int id;
   float marks;
   char fav_cha;
   char qualification;
   int *su;
};

int main() {
   struct student Pratyay, Binoy, Pulak;

// structure names =  Pratyay, Binoy, Pulak
// member names =     id, marks, fav_cha
    

   Pratyay.id=1;
   Binoy.id=2;
   Pulak.id=3;

   Pratyay.marks=19.11;
   Binoy.marks=18.25;
   Pulak.marks=15.41;

   Pratyay.fav_cha='p';
   Binoy.fav_cha='b';
   Pulak.fav_cha='p';

   int a=45;
   Pulak.su = &a;

    


printf("ID of Pratyay : %d\n", Pratyay.id);
printf("ID of Binoy : %d\n", Binoy.id);
printf("ID of Pulak : %d\n", Pulak.id);

printf("Marks of Pratyay : %f\n", Pratyay.marks);
printf("Marks of Binoy : %f\n", Binoy.marks);
printf("Marks of Pulak : %f\n", Pulak.marks);

printf("fav_cha of Pratyay : %c\n", Pratyay.fav_cha);
printf("fav_cha of Binoy : %c\n", Binoy.fav_cha);
printf("fav_cha of Pulak : %c\n", Pulak.fav_cha);

// strcpy(Pratyay.qualification, "Very Good Boy");
// printf("fav_cha of Pulak : %c\n", Pratyay.qualification);


printf("fav_cha of Pulak : %p\n", *(Pulak.su));












    return 0;
}


