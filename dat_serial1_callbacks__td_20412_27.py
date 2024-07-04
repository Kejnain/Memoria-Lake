def onReceive(dat, rowIndex, message, bytes, peer):
    try:
        value = int(message) 
        value = max(0, min(2, value))  
        
        constantCHOP = op('constant1')  
        constantCHOP.par.value0 = value  
    except ValueError:
        pass 
