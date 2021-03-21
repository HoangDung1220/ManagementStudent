#include "kethua2.h"
int main(){

    kethua p0(1,2);
    p0.Show();
    
    kethua2 p;
    p.show();

    kethua2 p1(1,2,3);
    p1.Show();
    cout<<p0;
  //  cout<<p;

  /*
  toán tử xuất ở kethua có thể thực hiện được cho kethua2
  solve: slicing từ đối tượng dẫn xuất sang đối tượng cơ sở
  kethua: cơ sở
  kethua2: lớp dẫn xuất
  
  */
    cout<<endl;
    kethua *p4;
    kethua2 *p5;
    p4 = &p0;
    p5 = (kethua2*) p4;
   // p5 = &p1;
    cout<<"hello"<<endl;
    p5->Show();
    p4->Show();


   // p4 =&p1;

  //  p5 = static_cast<kethua2*>(p0);
/*
p4 sẽ show ra kethua 
khi có virtual thì p4 sẽ show kethua2;
kethua *p = new kethua2();
p.huy-> huy lớp chủ kế thừa => phải tạo ra hàm ảo của lớp destruction
kethua2 p1(1,2,3);
kethua p=p1;//được slicing


*/
    return 0;
}