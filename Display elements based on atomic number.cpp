#include<iostream.h>
#include<conio.h>


struct Element
{
         int atomicNumber;
         char* name;
}; // end struct Element

void setData(int a , Element &e)
{
      e.atomicNumber=a;
      switch(a)
     {
              case 1 : e.name="Hydrogen";break;
              case 2 : e.name="Helium";break;
              case 3 : e.name="Lithium";break;
              case 4 : e.name="Beryllium";break;
              case 5 : e.name="Boron";break;
              case 6 : e.name="Carbon";break;
              case 7 : e.name="Nitrogen";break;
              case 8 : e.name="Oxygen";break;
              case 9 : e.name="Flourine";break;
              case 10 : e.name="Neon";break;
              case 11 : e.name="Sodium";break;
              case 12 : e.name="Magnesium";break;
              case 13 : e.name="Aluminium";break;
              case 14 : e.name="Silicon";break;
              case 15 : e.name="Phosphorus";break;
              case 16 : e.name="Sulfur";break;
              case 17 : e.name="Chlorine";break;
              case 18 : e.name="Argon";break;
              case 19 : e.name="Potassium";break;
              case 20 : e.name="Calcium";break;
              case 21 : e.name="Scandium";break;
              case 22 : e.name="Titanium";break;
              case 23 : e.name="Vanadium";break;
              case 24 : e.name="Chromium";break;
              case 25 : e.name="Manganese";break;
              case 26 : e.name="Iron";break;
              case 27 : e.name="Cobalt";break;
              case 28 : e.name="Nickel";break;
              case 29 : e.name="Copper";break;
              case 30 : e.name="Zinc";break;
              case 31 : e.name="Gallium";break;
              case 32 : e.name="Germanium";break;
              case 33 : e.name="Arsenic";break;
              case 34 : e.name="Selenium";break;
              case 35 : e.name="Bromine";break;
              case 36 : e.name="Krypton";break;
              case 37 : e.name="Rubidium";break;
              case 38 : e.name="Strontium";break;
              case 39 : e.name="Yttrium";break;
              case 40 : e.name="Zirconium";break;
              case 41 : e.name="Niobium";break;
              case 42 : e.name="Molybdenum";break;
              case 43 : e.name="Technetium";break;
              case 44 : e.name="Ruthenium";break;
              case 45 : e.name="Rhodium";break;
              case 46 : e.name="Palladium";break;
           case 47 : e.name="Silver";break;
              case 48 : e.name="Cadmium";break;
           case 49 : e.name="Indium";break;
              case 50 : e.name="Tin";break;
              case 51 : e.name="Antimony";break;
              case 52 : e.name="Tellurium";break;
           case 53 : e.name="Iodine";break;
              case 54 : e.name="Xenon";break;
           case 55 : e.name="Cesium";break;
              case 56 : e.name="Barium";break;
              case 57 : e.name="Lanthanum";break;
              case 58 : e.name="Cerium";break;
           case 59 : e.name="Praseodymium";break;
              case 60 : e.name="Neodymium";break;
           case 61 : e.name="Promethium";break;
              case 62 : e.name="Samarium";break;
              case 63 : e.name="Europium";break;
              case 64 : e.name="Gadolinium";break;
           case 65 : e.name="Terbium";break;
              case 66 : e.name="Dysprosium";break;
           case 67 : e.name="Holmium";break;
              case 68 : e.name="Thulium";break;
              case 69 : e.name="Ytterbium";break;
              case 70 : e.name="Lutetium";break;
           case 71 : e.name="Hafnium";break;
              case 72 : e.name="Tantalum";break;
              case 73 : e.name="Tungsten";break;
              case 74 : e.name="Rhenium";break;
           case 75 : e.name="Osmium";break;
              case 76 : e.name="Iridium";break;
              case 78 : e.name="Platinum";break;
              case 79 : e.name="Gold";break;
           case 80 : e.name="Mercury";break;
              case 81 : e.name="Thalium";break;
              case 82 : e.name="Lead";break;
              case 83 : e.name="Bismuth";break;
           case 84 : e.name="Polonium";break;
              case 85 : e.name="Astatine";break;
              case 86 : e.name="Radon";break;
              case 87 : e.name="Francium";break;
           case 88 : e.name="Radium";break;
              case 89 : e.name="Actinium";break;
              case 90 : e.name="Thorium";break;
              case 91 : e.name="Protactinium";break;
           case 92 : e.name="Uranium";break;
              case 93 : e.name="Neptunium";break;
              case 94 : e.name="Plutinium";break;
              case 95 : e.name="Americium";break;
           case 96 : e.name="Curium";break;
              case 97 : e.name="Berkelium";break;
              case 98 : e.name="Californium";break;
              case 99 : e.name="Einsteinium";break;
           case 100 : e.name="Fermium";break;
              case 101 : e.name="Mendelevium";break;
              case 102 : e.name="Nobelium";break;
              case 103 : e.name="Lawrencium";break;
           case 104 : e.name="Rutherfordium";break;
              case 105 : e.name="Dubnium";break;
              case 106 : e.name="Seaborgium";break;
              case 107 : e.name="Bohrium";break;
           case 108 : e.name="Hassium";break;
              case 109 : e.name="Meitnerium";break;
              case 110 : e.name="Darmstadtium(Ununnilium)";break;
              case 111 : e.name="Roentgenium(Unununium)";break;
           case 112 : e.name="Ununbium";break;  
     }
}

void viewData(Element e)
{
      cout<<e.atomicNumber<<"\t\t"<<e.name<<endl;
}

void mainMenu()
{
      cout<<"    ______________________________________   "<<endl;
     cout<<"   /                                      \\ "<<endl;
      cout<<"  |                                        | "<<endl;
      cout<<"  |            Periodic Table              | "<<endl;
      cout<<"  |                                        | "<<endl;
     cout<<"   \\______________________________________/ "<<endl;
     cout<<endl;
}

int main()
{
     int anumber;
     getData:
     clrscr();
     mainMenu();
     cout<<"Enter the atomic number of element(113 to exit):";
     Element element;
     cin>>anumber;
     if(anumber<113 && anumber>0)
     {
      setData(anumber,element);
      clrscr();
      viewData(element);
      getch();
      goto getData;
     }
     else if(anumber==113)
     {
      clrscr();
      cout<<"Thank you for using this Program"<<endl;//end program
      getch();
      return 0;
     }
     else
     {
          cout<<"\a\nYou must choose a number from 1 to 112 "<<endl;
          getch();
          goto getData;
     }
}
//end





Author : Saber Boostani
EmaiL : Nights.Rainy72@Yahoo.Com
Site : Www.SourceBaran.Com