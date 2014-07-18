int main(){
	int counter;
	int sum = 0;
	for(counter = 0; counter < 1000; counter++){
		if(i % 3 == 0 || i % 5 == 0){
			sum += i;
		}
	}
	cout << sum;
	return 0;
}
