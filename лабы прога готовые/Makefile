# OBJS = src/lab1.cpp build/rect.o build/barrel.o build/matrix.o build/my_string.o build/txt_wrapper.o

# debug.out:
# 	g++ -g -o debug.out lab1.cpp rect.cpp barrel.cpp matrix.cpp my_string.cpp txt_wrapper.cpp


# debug: build/debug.out
# 	gdb debug.out

# build/rect.o: src/rect.cpp src/rect.hpp
# 	g++ -g -c -o build/rect.o src/rect.cpp

# build/my_string.o: src/my_string.cpp src/my_string.hpp
# 	g++ -g -c -o build/my_string.o src/my_string.cpp

# build/barrel.o: src/barrel.cpp src/barrel.hpp
# 	g++ -g -c -o build/barrel.o src/barrel.cpp

# build/matrix.o: src/matrix.cpp src/matrix.hpp
# 	g++ -g -c -o build/matrix.o src/matrix.cpp

# build/txt_wrapper.o: src/txt_wrapper.cpp src/txt_wrapper.hpp
# 	g++ -g -c -o build/txt_wrapper.o src/txt_wrapper.cpp

# build/debug.out: $(OBJS)
# 	g++ -g -o build/debug.out src/lab1.cpp build/rect.o build/my_string.o build/barrel.o build/matrix.o build/txt_wrapper.o


OBJS = build/lab1.o build/matrix.o build/rect.o build/barrel.o build/my_string.o build/txt_wrapper.o

build/debug.out: $(OBJS)
	g++ -g -o build/debug.out $(OBJS)

build/lab1.o: src/lab1.cpp
	g++ -g -c src/lab1.cpp -o build/lab1.o

build/matrix.o: src/matrix.cpp
	g++ -g -c src/matrix.cpp -o build/matrix.o

build/rect.o: src/rect.cpp
	g++ -g -c src/rect.cpp -o build/rect.o

build/barrel.o: src/barrel.cpp
	g++ -g -c src/barrel.cpp -o build/barrel.o

build/my_string.o: src/my_string.cpp
	g++ -g -c src/my_string.cpp -o build/my_string.o

build/txt_wrapper.o: src/txt_wrapper.cpp
	g++ -g -c src/txt_wrapper.cpp -o build/txt_wrapper.o

build/leaks.out : $(OBJS)
	g++ -g -fsanitize=address -o build/leaks.out $(OBJS)

.PHONY : leaks
leaks: build/leaks.out
	./build/leaks.out

build/test_rect_basic_methods.out: tests/test_rect_basic_methods.cpp src/rect.cpp
	g++	-g	-o	build/test_rect_basic_methods.out	tests/test_rect_basic_methods.cpp	src/rect.cpp

build/test_rect_properties.out: tests/test_rect_properties.cpp src/rect.cpp
	g++	-g	-o	build/test_rect_properties.out	tests/test_rect_properties.cpp	src/rect.cpp

build/test_rect_operations.out: tests/test_rect_operations.cpp src/rect.cpp
	g++	-g	-o	build/test_rect_operations.out	tests/test_rect_operations.cpp	src/rect.cpp

build/test_bounding_rect.out: tests/test_bounding_rect.cpp src/rect.cpp
	g++	-g	-o	build/test_bounding_rect.out	tests/test_bounding_rect.cpp	src/rect.cpp

test:	build/test_rect_basic_methods.out	build/test_rect_properties.out	build/test_rect_operations.out build/test_bounding_rect.out
	./build/test_rect_basic_methods.out
	./build/test_rect_properties.out
	./build/test_rect_operations.out
	./build/test_bounding_rect.out


.PHONY : clean
clean:
	rm -rf build/*