Main: main.o Usuario.o Personal.o Cliente.o Administrador.o Chef.o Mesero.o Lavaplatos.o
	g++ main.o Usuario.o Personal.o Cliente.o Administrador.o Chef.o Mesero.o Lavaplatos.o -o main

main.o: main.cpp Usuario.h Personal.h Cliente.h Administrador.h Chef.h Mesero.h Lavaplatos.h
	g++ -c main.cpp

Usuario.o: Usuario.h Usuario.cpp
	g++ -c Usuario.cpp

Personal.o: Usuario.h Personal.h Personal.cpp
	g++ -c Personal.cpp

Cliente.o: Usuario.h Cliente.h Cliente.cpp
	g++ -c Cliente.cpp

Administrador.o: Usuario.h Personal.h Administrador.h Administrador.cpp
	g++ -c Administrador.cpp

Chef.o: Usuario.h Personal.h Chef.h Chef.cpp
	g++ -c Chef.cpp

Mesero.o: Usuario.h Personal.h Mesero.h Mesero.cpp
	g++ -c Mesero.cpp

Lavaplatos.o: Usuario.h Personal.h Lavaplatos.h Lavaplatos.cpp
	g++ -c Lavaplatos.cpp

clean:
	rm -f *.o main


