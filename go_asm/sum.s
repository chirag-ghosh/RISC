xor $1, $1
xor $2, $2
xor $3, $3
addi $3, 4092
addi $1, 1
add $2, $1
sw $2, 0($3)
addi $3, -4
xor $4, $4
add $4, $1
addi $4, -8
bltz $4, 5
addi $30, 1
and $30, $30
b 14