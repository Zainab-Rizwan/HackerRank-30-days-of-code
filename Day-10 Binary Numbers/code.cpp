#!/bin/python3

import math
import os
import random
import re
import sys


   

if __name__ == '__main__':
    con = int(input())
    
    result= 0
    maximum= 0
    
    while (con > 0):
        if (con % 2== 1):
            result= result+1
            if (result > maximum):
                maximum= result
        else:
            result= 0  
        con= con // 2  
    print(maximum)
        
    