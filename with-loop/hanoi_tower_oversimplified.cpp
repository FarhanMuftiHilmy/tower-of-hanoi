#include <bits/stdc++.h> 


using namespace std;




int main()
{
	int jumlah_disk = 5;
	
	
	//int A[jumlah_disk] = {1, 2, 3}; 	
	int A[jumlah_disk] = {1, 2, 3, 4, 5};
	int indeks_a = 0;
	//int B[jumlah_disk] = {0, 0, 0};
	int B[jumlah_disk] = {0, 0, 0, 0, 0};
	int indeks_b = 0;
	//int C[jumlah_disk] = {0, 0, 0};
	int C[jumlah_disk] = {0, 0, 0, 0, 0};
	int indeks_c = 0;
	int temp;
	int loop = 0;
	int apop, bpop, cpop;
	
	
	//Hitung banyak langkah
	int n = pow (2, jumlah_disk) - 1;
	

	cout << "SEBELUM" << endl;
	//OUTPUT SEBELUM
	for(int i=0;i<jumlah_disk;i++){
		cout << A[i] << endl;
		
	}
	cout << "-----" << endl;
	for(int i=0;i<jumlah_disk;i++){
		cout << B[i] << endl;;
		
	}
	cout << "-----" << endl;
	for(int i=0;i<jumlah_disk;i++){
		cout << C[i] << endl;
		
	}
	
	
	

		
	
	if(jumlah_disk%2 != 0){
		while(true){
			
		//count indeks a
		for(int i=0;i<jumlah_disk;i++){
			if(A[i]!= 0){
				indeks_a++;
			}			
					
		}
		//count indeks c
		for(int i=0;i<jumlah_disk;i++){
			if(C[i]!= 0){
				indeks_c++;
			}	
			if(indeks_c == 0){
				indeks_c = 1;
			}			  
				
		}
		
		
		//PINDAH A KE C atau sebaliknya
	
			cpop = C[indeks_c-1];
			apop = A[indeks_a-1];
			if(apop>cpop){
				temp = A[indeks_a-1];
				A[indeks_a-1] = 0;
				if(indeks_c-1 == 0){
					C[indeks_c-1] = temp;
				}else{
					C[indeks_c] = temp;
				}			
				
				
			
			} else{
				temp = C[indeks_c-1];
				C[indeks_c-1] = 0;
				
					A[indeks_a] = temp;
						
			
				
			}				
		
					
		
		
	
		loop++;
		cout << "langkah ke" << loop << endl;
		//OUTPUT LANGKAH 1 dst
		for(int i=0;i<jumlah_disk;i++){
			cout << A[i] << endl;
			
		}
		cout << "-----" << endl;
		for(int i=0;i<jumlah_disk;i++){
			cout << B[i] << endl;;
			
		}
		cout << "-----" << endl;
		for(int i=0;i<jumlah_disk;i++){
			cout << C[i] << endl;
		}
		if(loop == n){
			break;
		}					
			
		indeks_a = 0;	
		indeks_c = 0;
		//count indeks a
		for(int i=0;i<jumlah_disk;i++){
			if(A[i]!= 0){
				indeks_a++;
			} 
			if(indeks_a == 0){
				indeks_a = 1;
			}		
		}
		//count indeks b
		for(int i=0;i<jumlah_disk;i++){
			if(B[i]!= 0){
				indeks_b++;
			} 
			if(indeks_b == 0){
				indeks_b = 1;
			}
				
					
		}
		//PINDAH A KE B atau sebaliknya
		
		apop = A[indeks_a-1];
		bpop = B[indeks_b-1];
		if(apop>bpop){
			temp = A[indeks_a-1];
			A[indeks_a-1] = 0;
			indeks_a++;				
			B[indeks_b-1] = temp;
		} else{
			temp = B[indeks_b-1];
			B[indeks_b-1] = 0;
			A[indeks_a] = temp;
		}
		loop++;
		cout << "langkah ke" << loop << endl;
		//OUTPUT LANGKAH 1 dst
		for(int i=0;i<jumlah_disk;i++){
			cout << A[i] << endl;
			
		}
		cout << "-----" << endl;
		for(int i=0;i<jumlah_disk;i++){
			cout << B[i] << endl;;
			
		}
		cout << "-----" << endl;
		for(int i=0;i<jumlah_disk;i++){
			cout << C[i] << endl;
		}
		if(loop == n){
			break;
		}		
		
		indeks_a = 0;
		indeks_b = 0;
		//count indeks b
		for(int i=0;i<jumlah_disk;i++){
			if(B[i]!= 0){
				indeks_b++;
			}			
			if(indeks_b == 0){
				indeks_b = 1;
			}		
		}
		//count indeks c
		for(int i=0;i<jumlah_disk;i++){
			if(C[i]!= 0){
				indeks_c++;
			}
			if(indeks_c == 0){
				indeks_c = 1;
			}			
		}
		//PINDAH B KE C atau sebaliknya
		
		cpop = C[indeks_c-1];
		bpop = B[indeks_b-1];
		//PINDAH B KE C
	 	if(bpop > cpop){
	 	
	 		temp = B[indeks_b-1];
			B[indeks_b-1] = 0;
			C[indeks_c] = temp;
		 }else{ //PINDAH C KE B
		 	temp = C[indeks_c-1];
		 	C[indeks_c-1] = 0;
		 	B[indeks_b] = temp;
		 }
		 loop++;
		 cout << "langkah ke" << loop << endl;
		//OUTPUT LANGKAH 1 dst
		for(int i=0;i<jumlah_disk;i++){
			cout << A[i] << endl;
			
		}
		cout << "-----" << endl;
		for(int i=0;i<jumlah_disk;i++){
			cout << B[i] << endl;;
			
		}
		cout << "-----" << endl;
		for(int i=0;i<jumlah_disk;i++){
			cout << C[i] << endl;
		}
		 if(loop == n){
			break;
		}		
			
		
		indeks_b = 0;
		indeks_c = 0;
			
			
		}
		
		
		
		
				
		
	
		
		
		
		

	
		
		
		
	
	}
	
	
}


