all: sort search generate linkLibrary testAPP linkLibraryTest

sort:
	cl /c sourceFiles/sort.c
	
search:
	cl /c sourceFiles/search.c

generate:
	cl /c sourceFiles/generate.c

testApp:
	cl /c sourceFiles/arrayTestApp.c
	
linkLibrary:
	lib /OUT:array.lib sort.obj search.obj generate.obj
	
linkLibraryTest:
	link arrayTestApp.obj array.lib

