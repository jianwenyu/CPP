def greet(*args):
    for name in args:
        print("hello, {}".format(name))

greet("lee","jack","tom")
