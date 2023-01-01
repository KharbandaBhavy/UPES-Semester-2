# Plot 1
import matplotlib.pyplot as plt
import numpy as np

xpoints = np.array([1, 10])
ypoints = np.array([3, 10])

plt.plot(xpoints, ypoints)
plt.show()

# Plot 2
from matplotlib import pyplot as plt
import numpy as np
import math #needed for definition of pi
x = np.arange(0, math.pi*2, 0.05)
y = np.sin(x)
plt.plot(x,y)
plt.xlabel("angle")
plt.ylabel("sine")
plt.title('sine wave')
plt.show()


