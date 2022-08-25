#!/bin/bash
clear
echo

	# Asks user for a kind of operation
    echo "Enter your calc option: "
    echo "1 for Sum; "
    echo "2 for Subtraction; "
    echo "3 for Multiplication; "
    echo "4 for Division. "
    	read Operation

	# Asks for first number value
    echo "Write first number: "
    	read Number1

	# Asks for second number value
    echo "Write another number: "
    	read Number2


	# Case 1 - Sum
    if [ $Operation == 1 ]
	then
	# Sum of two numbers
	Sum=$((Number1 + Number2))
	# Writes numbers sum for user
	echo "Sum result is: "$Sum
    fi


	# Case 2 - Subtraction
    if [ $Operation == 2 ]
	then
	# Subtraction of two numbers
	Sub=$((Number1 - Number2))
	# Writes numbers subtraction for user
	echo "Subtraction result is: "$Sub
    fi


	# Case 3 - Multiplication
    if [ $Operation == 3 ]
	then
	# Multiplication of two numbers
	Multi=$((Number1 * Number2))
	# Writes numbers subtraction for user
	echo "Multiplication result is: "$Multi
    fi


	# Case 4 - Division
    if [ $Operation == 4 ]
	then
	# Division of two numbers
	Div=$((Number1 / Number2))
	# Writes numbers division for user
	echo "Division result is: "$Div
    fi