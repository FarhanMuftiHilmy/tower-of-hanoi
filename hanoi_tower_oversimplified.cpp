#include <bits/stdc++.h> 


using namespace std;




int main()
{
	int jumlah_disk = 5;
	
	
	int A[jumlah_disk] = {1, 2, 3, 4, 5};
	int indeks_a = 0;
	int B[jumlah_disk] = {0, 0, 0, 0, 0};
	int indeks_b = 0; 
	int C[jumlah_disk] = {0, 0, 0, 0, 0};
	int indeks_c = 0;
	int temp = 0;
	int loop = 0;
	int apop  = 0;
	int bpop = 0;
	int cpop = 0;
	
	
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
			
		}
		
		
		//PINDAH A KE C atau sebaliknya
	
		if(indeks_a == 0){
		    apop = A[indeks_a];
		} else{
		    apop = A[indeks_a-1];
		}
		if(indeks_c == 0){
		    cpop = C[indeks_c];
		} else{
		    cpop = C[indeks_c-1];
		}
		
		if(apop>cpop){
			temp = A[indeks_a-1];
			A[indeks_a-1] = 0;
			C[indeks_c] = temp;		
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
		}
		//count indeks b
		for(int i=0;i<jumlah_disk;i++){
			if(B[i]!= 0){
				indeks_b++;
			} 
		
		}
		//PINDAH A KE B atau sebaliknya
		if(indeks_a == 0){
		    apop = A[indeks_a];
		} else{
		    apop = A[indeks_a-1];
		}
		if(indeks_b == 0){
		    bpop = B[indeks_b];
		} else{
		    bpop = B[indeks_b-1];
		}
		

		if(apop>bpop){
			temp = A[indeks_a-1];
			A[indeks_a-1] = 0;		
			B[indeks_b] = temp;
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
		}
		//count indeks c
		for(int i=0;i<jumlah_disk;i++){
			if(C[i]!= 0){
				indeks_c++;
			}
		}
		//PINDAH B KE C atau sebaliknya
        if(indeks_c == 0){
		    cpop = C[indeks_c];
		} else{
		    cpop = C[indeks_c-1];
		}
		if(indeks_b == 0){
		    bpop = B[indeks_b];
		} else{
		    bpop = B[indeks_b-1];
		}
		    
		
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


