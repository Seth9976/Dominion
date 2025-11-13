// 函数: sub_707950
// 地址: 0x707950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = sub_707a50(*arg1)
result[0x14] = arg1[0x14]
result[0x15] = arg1[0x15]
result[0x12] = arg1[0x12]
result[0x13] = arg1[0x13]
result[0x16] = arg1[0x16]
result[0x17] = arg1[0x17]
result[0x11] = arg1[0x11]
char* esi = arg1[5]
char* ecx_6 = esi
void* edx = &ecx_6[1]
int32_t eax_1

do
    eax_1.b = *ecx_6
    ecx_6 = &ecx_6[1]
while (eax_1.b != 0)
int32_t eax_2 = data_147ded8
int32_t eax_3

if (eax_2 == 0)
    eax_3 = malloc(ecx_6 - edx + 1)
else
    eax_3 = eax_2(ecx_6 - edx + 1, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\RegionAttachment.c", 0x36)

result[5] = eax_3
void* ecx_10 = eax_3 - esi

do
    eax_3.b = *esi
    esi = &esi[1]
    *(ecx_10 + esi - 1) = eax_3.b
while (eax_3.b != 0)

result[6] = arg1[6]
result[7] = arg1[7]
result[8] = arg1[8]
result[9] = arg1[9]
result[0xa] = arg1[0xa]
result[0xb] = arg1[0xb]
result[0xc] = arg1[0xc]
*(result + 0x80) = *(arg1 + 0x80)
*(result + 0x90) = *(arg1 + 0x90)
*(result + 0x60) = *(arg1 + 0x60)
*(result + 0x70) = *(arg1 + 0x70)
result[0xd] = arg1[0xd]
result[0xe] = arg1[0xe]
result[0xf] = arg1[0xf]
result[0x10] = arg1[0x10]
return result
