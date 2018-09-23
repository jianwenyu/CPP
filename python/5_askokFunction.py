def ask_ok(prompt, retries=4,reminder = 'Please try again!'):
	while True:
		ok = input(prompt)
		if ok in ("y", "ye", "yes"):
			return True
		if ok in ("n", "no", "nope"):
			return False
		retries = retries - 1
		if retries < 0:
			raise ValueError('Invalid user response')
		print(reminder)

if(ask_ok("4+3=7?:")):
	print("you are right")
else:
	print("you are wrong")