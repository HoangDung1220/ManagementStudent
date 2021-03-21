#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int n,m,k;
int u[100],v[100],d[100][100],value[100],check[100],luu[100];
const int big = 10000;
int col=0;

int minn(int first,int last);
void road(int first,int last);
void create();

void input(){
    fstream f;
    f.open("dijkstra.txt",ios::in);
    f>>n;
    f>>m;
    f>>k;
    for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
    if  (i!=j){
     d[i][j]=-1;
     d[j][i]=-1;
    }
   
    for (int i=1;i<=m;i++){
        f>>u[i];
        f>>v[i];
        f>>d[u[i]][v[i]];
        d[v[i]][u[i]]=d[u[i]][v[i]];
    }

    int first,last,kt;
    for (int i=1;i<=k;i++){
        f>>kt;
        f>>first;
        f>>last;
        if (kt==1){
            cout<<minn(first,last)<<endl;
        } else 
        if (kt==0){
            road(first,last);
            cout<<endl;
        }
    }
    f.close();

}

void create(){
    for (int i = 1;i<=n;i++) 
    {
        check[i]=0;
        value[i]= big;
    }
}

void show(){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
        cout<<d[i][j]<<" ";
        cout<<endl;
    }

}

void show1(){
    for (int i=1;i<=n;i++)
    cout<<value[i]<<" ";
    cout<<endl;
}
int theCloseIndex(){
    int min = big;
    int index = -1;
    for (int i=1;i<=n;i++){
        if (check[i]==0 && value[i]<min){
            index = i;
            min = value[i];
        }
    }
    check[index]=1;
    return index;

}

int minn(int first,int last){
    create();
    luu[first]=-1;
    int f = first;
    value[f]=0;
    check[f]=1;
    while (check[last]!=1 && f!=-1)

   {
      
        for (int w=1;w<=n;w++){
        if (d[f][w]!=-1 && check[w]==0 && value[w]>value[f]+d[f][w]){
        luu[w]=f;
        value[w]= value[f]+d[f][w];
        }
        }
        f = theCloseIndex();
    }
    return value[f];
}

void road(int first, int last){
    cout<<last<<" ";
while (luu[last]!=luu[first]){
    cout<<luu[last]<<" ";
    last = luu[last];
}

}
int main(){
    input();
    return 0;
}

