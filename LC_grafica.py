import numpy as np
import matplotlib.pyplot as plt

datos=np.loadtxt ('advection.txt')
x=datos[:,0]
d=datos[:,1]


plt.figure()
plt.plot(x,d)
plt.legend()
plt.xlabel('x')
plt.ylabel('y')
plt.title('Advección')
plt.savefing('adveccion_graf.png')
