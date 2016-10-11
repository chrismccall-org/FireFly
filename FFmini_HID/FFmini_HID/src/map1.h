// OS headers
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/eeprom.h>
#include <avr/pgmspace.h>

//uint16_t EEMEM MAP1_CRC;
uint8_t EEMEM MAP1_STATIC = 31;

// I pulled this map from the firstcurvestella.fly file
uint16_t EEMEM MAP1[101] = {

20000,	//	0
20000,	//	1
20000,	//	2
20000,	//	3
20000,	//	4
20000,	//	5
57772,	//	6
49517,	//	7
43329,	//  8
38506,	//	9
34658,	//	10
31512,	//	11
28886,	//	12
26663,	//	13
24752,	//	14
23101,	//	15
21658,	//	16
20384,	//	17
17772,	//	18
15433,	//	19
13330,	//	20
11421,	//	21
9696,	//	22
8113,	//	23
7777,	//	24
7462,	//	25
6150,	//	26
4935,	//	27
3808,	//	28
2757,	//	29
2664,	//	30
2580,	//	31
1666,	//	32
1616,	//	33
1568,	//	34
1522,	//	35
1480,	//	36
2160,	//	37
3505,	//	38
4781,	//	39
6660,	//	40
7150,	//	41
7608,	//	42
7440,	//	43
7272,	//	44
7104,	//	45
6948,	//	46
6804,	//	47
6660,	//	48
6528,	//	49
6396,	//	50
6264,	//	51
6144,	//	52
6036,	//	53
5916,	//	54
5808,	//	55
5712,	//	56
5604,	//	57
5508,	//	58
5863,	//	59
6660,	//	60
6555,	//	61
6450,	//	62
6345,	//	63
6240,	//	64
6150,	//	65
6060,
5970,
5880,
5790,
5700,
5625,
5550,
5475,
5400,
5325,
9100,
8996,
8866,
8762,
8658,
8554,
8450,
8346,
8242,
8138,
8060,
7956,
7878,
7774,
7696,
7618,
7514,
7436,
7358,
7280,
7202,
7124,
7072,
6994,
6916

};
