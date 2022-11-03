package main

import (
	"bufio"
	"encoding/json"
	"fmt"
	"io/ioutil"
	"os"
	"strings"
)

type InstrData struct {
	Itype string `json:"itype"`
	OPcode string `json:"opcode"`
	Func string `json:"func"`
}

func main() {
	insfile, err := ioutil.ReadFile("./instrn.json")
	if err != nil {
		println("Error opening instruction file.")
	}
	var instrMap map [string] InstrData;
	_ = json.Unmarshal(insfile, &instrMap)

	regfile, err := ioutil.ReadFile("./regs.json")
	if err != nil {
		println("Error opening file.")
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

    fileScanner := bufio.NewScanner(readFile)
    fileScanner.Split(bufio.ScanLines)
  
    for fileScanner.Scan() {
        trimLine := strings.Trim(fileScanner.Text(), " ")
		instruction := strings.Split(trimLine, " ")[0]
		fmt.Println(instrMap[instruction])
    }
  
    readFile.Close()
}