name=$1

if [[ $name == '' ]]; then
	echo 'enter folder name'
else
	mkdir $name
	cp 0.cpp "$name/code.cpp"
	touch "$name/inputs.txt"
fi
