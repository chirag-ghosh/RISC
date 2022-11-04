package main

import (
	"bufio"
	"encoding/json"
	"fmt"
	"io/ioutil"
	"os"
	"strconv"
	"strings"
)

type InstrData struct {
	Itype string `json:"itype"`
	OPcode string `json:"opcode"`
	Func string `json:"func"`
}

func rInstr(instrName string, metadata InstrData, instruction string, regMap map [string] int) string {
	temp := strings.Split(instruction, ",")
	arg1 := strings.Split(temp[0], " ")[1]
	arg2 := strings.Trim(temp[1], " ")

	var instrCode string

	if instrName == "shll" || instrName == "shrl" || instrName == "shra" {
		shamt, err := strconv.ParseInt(arg2, 10, 0)
		if err != nil {
			fmt.Println("Bad shift amount")
		}
		instrCode = metadata.OPcode + fmt.Sprintf("%05b", regMap[arg1]) + "00000" + fmt.Sprintf("%05b", shamt) + "000000" + metadata.Func 
	} else {
		instrCode = metadata.OPcode + fmt.Sprintf("%05b", regMap[arg1]) + fmt.Sprintf("%05b", regMap[arg2]) + "00000" + "000000" + metadata.Func
	}

	return instrCode
}

func bInstr(instrName string, metadata InstrData, instruction string, regMap map [string] int) string {
	temp := strings.Split(instruction, ",")

	var instrCode string

	if instrName == "bltz" || instrName == "bz" || instrName == "bnz" {
		arg1 := strings.Split(temp[0], " ")[1]
		arg2 := strings.Trim(temp[1], " ")
		address, err := strconv.ParseInt(arg2, 10, 0)
		if err != nil {
			fmt.Println("Bad address")
		}
		instrCode = metadata.OPcode + fmt.Sprintf("%05b", regMap[arg1]) + fmt.Sprintf("%016b", address) + metadata.Func 

	} else {
		arg1 := strings.Split(temp[0], " ")[0]
		arg2 := strings.Split(temp[0], " ")[1]
		
		if arg1 == "br" {
			instrCode = metadata.OPcode + fmt.Sprintf("%05b", regMap[arg2]) + "0000000000000000" + metadata.Func 
		} else {		
			address, err := strconv.ParseInt(arg2, 10, 0)
			if err != nil {
				fmt.Println("Bad address")
			}
			instrCode = metadata.OPcode + "00000" + fmt.Sprintf("%016b", address) + metadata.Func 
		}
	}

	return instrCode

}

func iInstr(instrName string, metadata InstrData, instruction string, regMap map [string] int) string {
	temp := strings.Split(instruction, ",")
	arg1 := strings.Split(temp[0], " ")[1]
	arg2 := strings.Trim(temp[1], " ")
	var instrCode string

	if instrName == "addi" || instrName == "compi" {
		imm, err := strconv.ParseInt(arg2, 10, 0)
		if err != nil {
			fmt.Println("Bad immediate value")
		}

		instrCode = metadata.OPcode + fmt.Sprintf("%05b", regMap[arg1]) + "00000" + fmt.Sprintf("%016b", imm) 

	} else {
		var reg string
		var imm int
		fmt.Sscanf(arg2, "%d(%s)", &imm, &reg)
		reg = strings.Trim(reg, ")")
		instrCode = metadata.OPcode + fmt.Sprintf("%05b", regMap[arg1]) + fmt.Sprintf("%05b", regMap[reg]) + fmt.Sprintf("%016b", imm)
	}
	
	return  instrCode
}

func main() {
	insfile, err := ioutil.ReadFile("./instrn.json")
	if err != nil {
		fmt.Println("Error opening instruction file.")
	}
	var instrMap map [string] InstrData;
	_ = json.Unmarshal(insfile, &instrMap)

	regfile, err := ioutil.ReadFile("./regs.json")
	if err != nil {
		fmt.Println("Error opening file.")
	}

	var regMap map [string] int;
	_ = json.Unmarshal(regfile, &regMap)

	if len(os.Args) == 1 {
		fmt.Println("No file specified. Terminating.")
		return
	}

	inputFileName := os.Args[1]

	readFile, err := os.Open(inputFileName)
    if err != nil {
        fmt.Println(err)
    }
	defer readFile.Close()

    fileScanner := bufio.NewScanner(readFile)
    fileScanner.Split(bufio.ScanLines)
	
	var ins_arr []string
	ins_arr = append(ins_arr, "memory_initialization_radix=2;")
	ins_arr = append(ins_arr, "memory_initialization_vector=")
	ins_arr = append(ins_arr, "00000000000000000000000000000000")

    for fileScanner.Scan() {
        trimLine := strings.Trim(fileScanner.Text(), " ")
		instrName := strings.Split(trimLine, " ")[0]
		instrMetadata := instrMap[instrName]
		
		if instrMetadata.Itype == "r" {
			a := rInstr(instrName, instrMetadata, trimLine, regMap)
			ins_arr = append(ins_arr, a + ",")
		} else if instrMetadata.Itype == "b" {
			a := bInstr(instrName, instrMetadata, trimLine, regMap)
			ins_arr = append(ins_arr, a + ",")
		} else if instrMetadata.Itype == "i" {
			a := iInstr(instrName, instrMetadata, trimLine, regMap)
			ins_arr = append(ins_arr, a + ",")
		}
    }

	ins_arr[len(ins_arr)-1] = strings.Trim(ins_arr[len(ins_arr)-1], ",") + ";"

	temp := strings.Split(inputFileName, ".")[0]
	writeFile, err := os.Create(temp+".coe")
	if err != nil {
    	fmt.Println(err)
    	return
	}
	defer writeFile.Close()

	for i := 0; i < len(ins_arr); i++ {
		fmt.Fprintf(writeFile, "%v\n", ins_arr[i])
    }

}