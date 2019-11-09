import pandas as pd
from matplotlib.pyplot import *
style.use("fivethirtyeight")
xyz={'Day':[1,2,3,4],'visitors':[200,130,254,123],'phno':[123,456,789,497],"add":[456,123,789,123]}
df1=pd.DataFrame(xyz);
df1.set_index("Day",inplace=True)
df1.plot()
show()
