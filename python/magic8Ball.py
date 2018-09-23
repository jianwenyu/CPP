#!/usr/bin/python3

import random

def getAnswer(answerNumber):
	if answerNumber==1:
		return "you get 1"
	elif answerNumber==2:
		return "you get 2"
	elif answerNumber==3:
		return "you get 3"

r = random.randint(1,3)
st = getAnswer(r)
print(st)

