xor $2, $2
addi $1, 4
sw $1, 0($2)
xor $1, $1
addi $1, 2
sw $1, 4($2)
lw $3, 4($2)      
lw $4, 0($2)     
compi $5, 2
compi $5, 4
comp $5, $5
