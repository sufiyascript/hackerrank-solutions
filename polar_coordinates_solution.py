# Polar Coordinates

import cmath

z = complex(input().strip())

# modulus (r)
r = abs(z)

# phase angle (phi)
phi = cmath.phase(z)

print(r)
print(phi)
