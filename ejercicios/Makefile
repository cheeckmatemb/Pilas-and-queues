CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

all: ejercicio1 ejercicio2 ejercicio3 ejercicio4 ejercicio5

ejercicio1:
	$(CXX) $(CXXFLAGS) -o ejercicio1/tanque \
		ejercicio1/Tanque.cpp \
		ejercicio1/main.cpp

ejercicio2:
	$(CXX) $(CXXFLAGS) -o ejercicio2/sala \
		ejercicio2/Sala.cpp \
		ejercicio2/main.cpp

ejercicio3:
	$(CXX) $(CXXFLAGS) -o ejercicio3/persona \
		ejercicio3/Persona.cpp \
		ejercicio3/main.cpp

ejercicio4:
	$(CXX) $(CXXFLAGS) -o ejercicio4/carrera \
		ejercicio4/Atleta.cpp \
		ejercicio4/Carrera.cpp \
		ejercicio4/main.cpp

ejercicio5:
	$(CXX) $(CXXFLAGS) -o ejercicio5/tren \
		ejercicio5/Vagon.cpp \
		ejercicio5/Tren.cpp \
		ejercicio5/main.cpp

clean:
	rm -f ejercicio1/tanque ejercicio2/sala ejercicio3/persona \
	      ejercicio4/carrera ejercicio5/tren

.PHONY: all clean ejercicio1 ejercicio2 ejercicio3 ejercicio4 ejercicio5
