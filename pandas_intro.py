import pandas as pd

xyz={'Day':[1,2,3,4],'visitors':['vedha','Krishna','yarasuri','rama'],'ph no':[123,456,789,497]}
df1=pd.DataFrame(xyz);
df2=pd.DataFrame(xyz);
df3=pd.merge(df1,df2,on="Day")
print(df3)