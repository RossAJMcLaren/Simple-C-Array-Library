all: sort search generate linkLibrary testAPP linkLibraryTest

sort:
	cl /c sort.c
	
search:
	cl /c search.c

generate:
	cl /c generate.c

testApp:
	cl /c arrayTestApp.c
	
linkLibrary:
	lib /OUT:array.lib sort.obj search.obj generate.obj
	
linkLibraryTest:
	link arrayTestApp.obj array.lib

