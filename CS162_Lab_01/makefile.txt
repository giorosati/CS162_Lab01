all:
	g++ Main.cpp readMatrix.cpp determinant.cpp -o prog

clean: 
	rm *.o