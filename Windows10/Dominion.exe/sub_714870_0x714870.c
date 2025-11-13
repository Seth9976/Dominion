// 函数: sub_714870
// 地址: 0x714870
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_7 = data_147ded8
char* esi = arg1
int128_t* result_1

if (eax_7 == 0)
    result_1 = malloc(0x10)
else
    result_1 = eax_7(0x10, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x24)

int128_t* result = result_1

if (result != 0)
    *result = zx.o(0)

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
    eax_1 =
        eax(ecx - edx + 1, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x25)

*result = eax_1
void* ecx_4 = eax_1 - esi

do
    eax_1.b = *esi
    esi = &esi[1]
    *(ecx_4 + esi - 1) = eax_1.b
while (eax_1.b != 0)

int32_t eax_2 = data_147ded8
*(result + 8) = 0

if (eax_2 == 0)
    *(result + 0xc) = malloc(0)
    return result

*(result + 0xc) = eax_2(0, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAnimation.c", 0x27)
return result
