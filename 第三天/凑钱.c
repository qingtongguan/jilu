// #include<stdio.h>
//int main() {
//	
//	int x;
//	int n;
//	int edit=0; //edit���ڿ�����һ�������ͽ����� 
//	int a,b,c;
//	printf("���������볢�ԵĽ�Ԫ��\n");
//	scanf("%d",&x);
//	for(a=0;a<=x/0.5;a++) {
//		for(b=0;b<=x/0.2;b++) {
//			for(c=0;c<=x/0.1;c++) {
//				if(a*0.5+b*0.2+c*0.1==x){
//					printf("��%dö5�ǣ�%dö2�ǣ�%dö1�ǿ��Դճ�%dԪ\n",a,b,c,x); 
//					n++;
//					edit=1; 
//					break;
//				}
//			
//			}
//			if(edit=1) break;
//		}
//			if(edit=1) break;
//	}
//	printf("��%d�ַ���\n",n);
//	
//	return 0;
//}   
 #include<stdio.h>
int main() {
	
	int x;
	int n;
	int edit=0; //edit���ڿ�����һ�������ͽ����� 
	int a,b,c;
	printf("���������볢�ԵĽ�Ԫ��\n");
	scanf("%d",&x);
	for(a=0;a<=x/0.5;a++) {
		for(b=0;b<=x/0.2;b++) {
			for(c=0;c<=x/0.1;c++) {
				if(a*0.5+b*0.2+c*0.1==x){
					printf("��%dö5�ǣ�%dö2�ǣ�%dö1�ǿ��Դճ�%dԪ\n",a,b,c,x); 
					n++;
					edit=1; 
					
				}
			
			}
			goto out;
		}
			
	}
	out:
	printf("��%d�ַ���\n",n);
	
	return 0;
}             
