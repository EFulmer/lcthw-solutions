# Exercise 13, Extra Credit 1:
#
# Take your favorite other language and use it to run this program, but
# include as many command line arguments as possible.
# See if you can bust it by giving it way too many arguments.
import subprocess


def main():
    program_name = "./ex_13/ex_13"
    extra_args = [str(i) for i in range(1, 146_874)]
    program_output = subprocess.run([program_name, *extra_args])
    print(program_output)


if __name__ == "__main__":
    main()


# Answer:
# Through trial and error, the max is 146,874 arguments (including the
# program name).
# Unsure where that number comes from, since it's not a power of 2.
# ...
# TODO: Relevant SO question here:
# https://stackoverflow.com/questions/14419464/c-argv-what-is-the-maximum-size-of-data
# Read into it more. In limits.h it's defined?
