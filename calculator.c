int oddtest(double a);

int main(){
	
	
	return 0;
}


int oddtest(double a) {
    /*number is even, therefore false*/
    if (a == 0) {
        return 0;
    }
    /*number is odd, therefore true*/
    else if (a == 1) {
        return 1;
    }
    /*recursion*/
    else return oddtest(a-2);
}