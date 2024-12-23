s="Indian Institute Of Technology Jammu"
d=dict()
for i in s:
    if i not in d.keys():
        d[i]=1
    else:
        d[i]+=1
for i in d:
    if(i.isalpha()):
        if(i.isupper()):
            continue
        elif(i.upper() in d.keys()):
            print(i.upper(),"=",d[i.upper()],"\t",i,"=",d[i])
        else:
            print(i.upper(),"=0","\t",i,"=",d[i])
    else:
        print(i,"=",d[i])