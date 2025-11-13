// 函数: sub_752290
// 地址: 0x752290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_147ded8
char* esi = arg2
int64_t* eax_1

if (eax == 0)
    eax_1 = malloc(8)
else
    eax_1 = eax(8, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAttachment.c", 0x2a)

if (eax_1 != 0)
    *eax_1 = 0

arg3[2] = eax_1
*eax_1 = arg5
*(arg3[2] + 4) = arg6
char* ecx_2 = esi
void* edx = &ecx_2[1]
int32_t eax_3

do
    eax_3.b = *ecx_2
    ecx_2 = &ecx_2[1]
while (eax_3.b != 0)
int32_t eax_4 = data_147ded8
int32_t eax_5

if (eax_4 == 0)
    eax_5 = malloc(ecx_2 - edx + 1)
else
    eax_5 = eax_4(ecx_2 - edx + 1, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\spAttachment.c", 0x2e)

*arg3 = eax_5
void* ecx_6 = eax_5 - esi

do
    eax_5.b = *esi
    esi = &esi[1]
    *(ecx_6 + esi - 1) = eax_5.b
while (eax_5.b != 0)

arg3[1] = arg4
return arg4
