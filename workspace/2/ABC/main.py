import os


def main():
    for i in range(248, 0, -1):
        v = f"ABC{i//100}{(i%100)//10}{i%10}"
        os.makedirs(v, exist_ok=True)
        with open(os.path.join(v, "a.cpp"), mode="w") as fp:
            fp.write("#include <iostream>")


if __name__ == "__main__":
    main()