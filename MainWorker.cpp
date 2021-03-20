#include "Management.cpp"

void MenuInsert(){
    cout<<"-------------------------------------------"<<endl;
    cout<<"    1.According to Nhan Vien Hop Dong"<<endl;
    cout<<"    2.According to Nhan Vien Bien Che"<<endl;
    cout<<"    0.Exit"<<endl;
    cout<<"-------------------------------------------"<<endl;
}

void Menu(){
    cout<<"---------------------------------------------"<<endl;
    cout<<"1. Save data Worker"<<endl;
    cout<<"2. Show list employee"<<endl;
    cout<<"3. Remove employee"<<endl;
    cout<<"4. Update data according to ID"<<endl;
    cout<<"5. Statistic NhanVien according to name"<<endl;
    cout<<"6. Sort list according to name"<<endl;
    cout<<"7. Insert to list with autonatically index"<<endl;
    cout<<"8. Search NhanVien according to ID"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"------------------------------------------------"<<endl;
}



bool ascesding(string a,string b){
    return a>b;
}

bool descensing(string a,string b){
    return a<b;
}



int main(){

Management<NhanVien*> list;


 int choice,choiceSave;
 Menu();
 cout<<"Enter choice ";cin>>choice;


do{
   switch (choice)
   {

       case 1:

       {
           MenuInsert();
           cout<<"Enter ChoiceSave ";cin>>choiceSave;

          do{
           switch (choiceSave)

           { 
                 NhanVien *p;
               case 1:
               {
                   p = new NVHD;
                    int checkk;
                   do{
                     checkk=1;
                     p->input();
                    try{
                       list.checkUniqueID(p->getId());
                       }
                   catch (const char* mess){
                       cout<<mess<<endl;
                       checkk=0;
                   }

                   } while (checkk==0); 
                   list.add(p);
                   break;
               }

               case 2:
               {
                   p = new NVBC;
                    int checkk;
                   do{
                     checkk=1;
                     p->input();
                    try{
                       list.checkUniqueID(p->getId());
                       }
                   catch (const char* mess){
                       cout<<mess<<endl;
                       checkk=0;
                   }

                   } while (checkk==0); 
                   list.add(p);
                   break;
               }
           }
              MenuInsert();
               cout<<"Enter ChoiceSave ";cin>>choiceSave;
               
          } while (choiceSave!=0);

          cout<<endl;
          break;
       } 
   
   
   
     case 2:
        {
            list.show1();
            cout<<endl;
            break;
        }
    
    case 3:
    {
        int index;
        cout<<"Enter index : ";cin>>index;
        list.removeAt(index);
        cout<<endl;
        break;
    }
    case 4:
    {
    
        string idd;
        cout<<"Enter idd to update: ";cin>>idd;
        list.update(idd);
         cout<<endl;
        break;
    }

    case 5:
    {
        string name;
        cout<<"Enter name: ";std::fflush(stdin);getline(cin,name);
        list.searchName(name);
        cout<<endl;
        break;
    }

    case 6:
    {
        int choice2;
        cout<<"1.Sort Descesding"<<endl;
        cout<<"2.Sort Ascesding"<<endl;
        cout<<"Enter choice: ";cin>>choice2;
        if (choice2==1) list.sort(descensing); else
        if (choice2==2) list.sort(ascesding);
        cout<<endl;
        list.show1();
        cout<<endl;
        break;
        
        
    }
    case 7:
    {
        NhanVien *p;
        int index;
        int choiceSave1;
       
          MenuInsert();
          cout<<"Enter Enter Choice Of Type Staff ";cin>>choiceSave1;

          do{
           switch (choiceSave1)

           { 
                 NhanVien *p;
               case 1:
               {
                   int checkk=1;
                    p = new NVHD;
                   do{
                     checkk=1;
                     p->input();
                    try{
                       list.checkUniqueID(p->getId());
                       }
                   catch (const char* mess){
                       cout<<mess<<endl;
                       checkk=0;
                   }

                   } while (checkk==0); 

                   cout<<"Enter index ";cin>>index;
                   list.insertAt(p,index);
                   cout<<"---Save successful------"<<endl;
                   break;
               }

               case 2:
               {
                   p = new NVBC;
                   int checkk;
                   do{
                     checkk=1;
                     p->input();
                    try{
                       list.checkUniqueID(p->getId());
                       }
                   catch (const char* mess){
                       cout<<mess<<endl;
                       checkk=0;
                   }

                   } while (checkk==0); 
                   cout<<"Enter index: ";cin>>index;
                   list.insertAt(p,index);
                   break;
               }
            }
               MenuInsert();
               cout<<"Enter Choice Of Type Staff: ";cin>>choiceSave1;
               cout<<endl<<endl<<endl;
                       
    }         while (choiceSave1!=0);
    cout<<endl;
    break;

    }
    case 8:
    {
        string idd;
        cout<<"Enter id: ";std::fflush(stdin);getline(cin,idd);
        list.searchAt(idd);
    }

   
   }
      Menu();
      cout<<"Enter choice ";cin>>choice;


 }while (choice!=0);

    


}