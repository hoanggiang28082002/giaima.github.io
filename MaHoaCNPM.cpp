#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
int main()
{
	
    char username[] = "dieu anh luon giu kin trong tim";
    char passwrod[] = "sao em vo tinh";
    char user[50], pass[50]; 
 
    printf("TEN DANG NHAP: ");
    gets(user);
    printf("MAT KHAU: ");
    gets(pass); 
 
    while(strcmp(user, username) != 0 || strcmp(pass, passwrod) != 0) 
	{
        printf("\TEN DANG NHAP HOAC MAT KHAU KHONG CHINH XAC \nYEU CAU NHAP LAI\n");
        printf("TEN DANG NHAP: ");
        gets(user);
        printf("MAT KHAU: ");
        gets(pass);
    }
    printf("DANG NHAP THANH CONG!\n");
	
	string P,C,K;
	string M="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	cout<<"NHAP NOI DUNG: ";cin>>P; C=P;
	cout<<"NHAP CHUOI KHOA K: ";cin>>K; 
	
	for(int i=0;i<P.size();i++)
	 for(int j=0;j<M.size();j++)
	  if(P[i]==M[j]) 
	  {
	  C[i]=K[j];
      }
	  
	cout<<"CHUOI MA HOA: "<<C;
	
return 0;
}

