#pragma once

/**
 *@file EX6-2.h
 * contain PrintHex function
 * 
 * @author Yakir Yohanan
*/


/**
* @brief Receive some varible address and his size on bytes
		 and then prints the hexadecimal representation of that 
		 variable from that address forward

 @param var - some variable address
 @param sizeOf - the variable size in bytes
*/
void CharPrintHex(char *var, int sizeOf);

void IntPrintHex(int* var, int sizeOf);