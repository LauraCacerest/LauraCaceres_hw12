adveccion_graf.png: LC_grafica.py  advection.loadtxt
	python LC_grafica.py

advection.txt : a.out
	./a.out > advection.txt

a.out:
	c++  LC_adveccion.cpp
