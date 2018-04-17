int oddtest(double a);
int addition(int a, int b);

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

int addition(int a, int b) {
    for (int i = 0; i < b; ++i) {
        a++;
    }
    return a;
}

