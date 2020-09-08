

#!/bin/bash

# This script is created to save time.

# Execute it as template_creator.sh  Singleton
# You can provide as much arguments as You want.


HELP_WARNING="Please, provide 2 arguments first is pattern name, second is folder where you want to create env for this pattern"

if [ $# -ne 2 ]; then
	echo $HELP_WARNING
	exit 1
fi


PATTERN_NAME=$1
FOLDER_PATH=$2

if [[ $PATTERN_NAME == *"/"* ]]; then
	echo $HELP_WARNING
	exit 1
fi

echo "Creating the following environments: $@"
echo "    "

for pat in "$@"
do
    echo "Creating folder and basic env for the: $pat in the "
    mkdir $pat
    mkdir $pat/bin
    mkdir $pat/source
    cp ./template_files/main.cpp $pat/source/main.cpp
    cp ./template_files/pattern.h $pat/source/$pat.h
    cp ./template_files/pattern.cpp $pat/source/$pat.cpp
    cp ./template_files/Description.txt $pat/Description.txt

done
