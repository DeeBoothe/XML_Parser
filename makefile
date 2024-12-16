all: xml_parser.exe

xml_parser.exe: xml_parser.o
     gcc -o xml_parser.exe xml_parser.o

xml_parser.o: xml_parser.cpp
     gcc -c xml_parser.cpp

clean:
     rm xml_parser.o xml_parser.exe