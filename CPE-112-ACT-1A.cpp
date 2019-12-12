int cpe1b::palindromic_prime(long x){
/* PRIME */

count = 0;

count = 0;
num=x;
for (j=2;j<num;j++){
	if (num%j==0){
		count++;
	}
}

if (count==0){
/* BINARY */

	pdtemp = num;
	bin=0;
	base = 1;

	for (;pdtemp>0;){
		rem=pdtemp%2;
		bin=bin+rem*base;
		base = base*10;
		pdtemp=pdtemp/2;
	}

/*REVERSE*/

	key=bin;
	temp=0;
	rev=0;

	for (;key!=0;){
		temp=key%10;
		key=key/10;
		rev=temp+(rev*10);
	}

	if (rev==bin){
		return 1;  // If the rev and bin are equal, return 1
	}

	else{
		return 0;  // Else the rev and bin are not equal, return 0
	}
}

else{
	return 0; 	// Else the number is prime, return 0
}
}
