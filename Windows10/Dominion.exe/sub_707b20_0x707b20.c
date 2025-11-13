// 函数: sub_707b20
// 地址: 0x707b20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* esi = arg2
free(*arg3)
free(arg3[1])
char* ecx = esi
void* edx = &ecx[1]
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
int32_t eax = data_147ded8
int32_t eax_1

if (eax == 0)
    eax_1 = malloc(ecx - edx + 1)
else
    eax_1 = eax(ecx - edx + 1, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AttachmentLoader.c", 0x58)

*arg3 = eax_1
void* ecx_4 = eax_1 - esi

do
    eax_1.b = *esi
    esi = &esi[1]
    *(ecx_4 + esi - 1) = eax_1.b
while (eax_1.b != 0)

char* esi_1 = arg4
char* ecx_5 = esi_1
void* edx_1 = &ecx_5[1]

do
    eax_1.b = *ecx_5
    ecx_5 = &ecx_5[1]
while (eax_1.b != 0)

int32_t eax_2 = data_147ded8
int32_t result

if (eax_2 == 0)
    result = malloc(ecx_5 - edx_1 + 1)
else
    result = eax_2(ecx_5 - edx_1 + 1, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AttachmentLoader.c", 0x59)

arg3[1] = result
void* ecx_9 = result - esi_1

do
    result.b = *esi_1
    esi_1 = &esi_1[1]
    *(ecx_9 + esi_1 - 1) = result.b
while (result.b != 0)

return result
