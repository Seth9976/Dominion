// 函数: sub_752440
// 地址: 0x752440
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_19 = data_147ded8
char* esi = arg1
int32_t* result_1

if (eax_19 == 0)
    result_1 = malloc(0x1a8)
else
    result_1 = eax_19(0x1a8, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skin.c", 0x42)

int32_t* result = result_1

if (result != 0)
    memset(result, 0, 0x1a8)

char* ecx = esi
void* edx = &ecx[1]

do
    result_1.b = *ecx
    ecx = &ecx[1]
while (result_1.b != 0)

int32_t eax = data_147ded8
int32_t eax_1

if (eax == 0)
    eax_1 = malloc(ecx - edx + 1)
else
    eax_1 = eax(ecx - edx + 1, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skin.c", 0x43)

*result = eax_1
void* ecx_4 = eax_1 - esi

do
    eax_1.b = *esi
    esi = &esi[1]
    *(ecx_4 + esi - 1) = eax_1.b
while (eax_1.b != 0)

int32_t eax_2 = data_147ded8
int32_t* eax_3

if (eax_2 == 0)
    eax_3 = malloc(0xc)
else
    eax_3 = eax_2(0xc, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skin.c", 0x22)

if (eax_3 != 0)
    eax_3[2] = 0

int32_t eax_4 = data_147ded8
*eax_3 = 0
eax_3[1] = 4
int128_t* eax_5

if (eax_4 == 0)
    eax_5 = malloc(0x10)
else
    eax_5 = eax_4(0x10, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skin.c", 0x22)

if (eax_5 != 0)
    *eax_5 = zx.o(0)

eax_3[2] = eax_5
int32_t eax_6 = data_147ded8
result[1] = eax_3
int32_t* eax_7

if (eax_6 == 0)
    eax_7 = malloc(0xc)
else
    eax_7 = eax_6(0xc, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skin.c", 0x23)

if (eax_7 != 0)
    eax_7[2] = 0

int32_t eax_8 = data_147ded8
*eax_7 = 0
eax_7[1] = 4
int128_t* eax_9

if (eax_8 == 0)
    eax_9 = malloc(0x10)
else
    eax_9 = eax_8(0x10, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skin.c", 0x23)

if (eax_9 != 0)
    *eax_9 = zx.o(0)

eax_7[2] = eax_9
int32_t eax_10 = data_147ded8
result[2] = eax_7
int32_t* eax_11

if (eax_10 == 0)
    eax_11 = malloc(0xc)
else
    eax_11 = eax_10(0xc, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skin.c", 0x24)

if (eax_11 != 0)
    eax_11[2] = 0

int32_t eax_12 = data_147ded8
*eax_11 = 0
eax_11[1] = 4
int128_t* eax_13

if (eax_12 == 0)
    eax_13 = malloc(0x10)
else
    eax_13 = eax_12(0x10, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skin.c", 0x24)

if (eax_13 != 0)
    *eax_13 = zx.o(0)

eax_11[2] = eax_13
int32_t eax_14 = data_147ded8
result[3] = eax_11
int32_t* eax_15

if (eax_14 == 0)
    eax_15 = malloc(0xc)
else
    eax_15 = eax_14(0xc, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skin.c", 0x25)

if (eax_15 != 0)
    eax_15[2] = 0

int32_t eax_16 = data_147ded8
*eax_15 = 0
eax_15[1] = 4
int128_t* eax_17

if (eax_16 == 0)
    eax_17 = malloc(0x10)
else
    eax_17 = eax_16(0x10, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\Skin.c", 0x25)

if (eax_17 != 0)
    *eax_17 = zx.o(0)

eax_15[2] = eax_17
result[4] = eax_15
return result
