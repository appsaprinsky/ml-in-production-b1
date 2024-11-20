print('hi')

class Multiply:
    def mul(self):
        result = self.num1 * self.num2
        return result

    def __init__(self,num1,num2):
        self.num1 = num1
        self.num2 = num2

a = Multiply(5,6)
print(a.mul())
import joblib
