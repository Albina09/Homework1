.PHONY := clean
object = Project1 Project2 Project3 Project4
all: $(object)

$(object): %: %.c
		gcc $< -o $@ -g


.PHONY := clean
clean:
		rm -rf $(object)
