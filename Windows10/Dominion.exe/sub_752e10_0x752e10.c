// 函数: sub_752e10
// 地址: 0x752e10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = sub_752f80(*arg1)
result[0xc] = arg1[0xc]
result[0x13] = arg1[0x13]
result[0x14] = arg1[0x14]
result[0x15] = arg1[0x15]
result[0x16] = arg1[0x16]
result[0x17] = arg1[0x17]
result[0x18] = arg1[0x18]
result[0xd] = arg1[0xd]
result[0xe] = arg1[0xe]
result[0xf] = arg1[0xf]
result[0x10] = arg1[0x10]
result[0x11] = arg1[0x11]
result[0x12] = arg1[0x12]
char* edi = arg1[0x19]
char* ecx_3 = edi
void* edx_2 = &ecx_3[1]
int32_t eax_8

do
    eax_8.b = *ecx_3
    ecx_3 = &ecx_3[1]
while (eax_8.b != 0)
int32_t eax_9 = data_147ded8
int32_t eax_10

if (eax_9 == 0)
    eax_10 = malloc(ecx_3 - edx_2 + 1)
else
    eax_10 = eax_9(ecx_3 - edx_2 + 1, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x6a)

result[0x19] = eax_10
void* ecx_7 = eax_10 - edi

do
    eax_10.b = *edi
    edi = &edi[1]
    *(ecx_7 + edi - 1) = eax_10.b
while (eax_10.b != 0)

result[0x1e] = arg1[0x1e]
result[0x1f] = arg1[0x1f]
result[0x20] = arg1[0x20]
result[0x21] = arg1[0x21]
result[0xa] = arg1[0xa]
int32_t* ecx_8 = arg1[0x23]

if (ecx_8 == 0)
    ecx_8 = arg1
    result[0x23] = ecx_8
    
    if (ecx_8 != 0)
        goto label_752eff
else
    result[0x23] = ecx_8
label_752eff:
    result[6] = ecx_8[6]
    result[5] = ecx_8[5]
    result[8] = ecx_8[8]
    result[7] = ecx_8[7]
    result[0x1a] = ecx_8[0x1a]
    result[0x1d] = ecx_8[0x1d]
    result[0x1c] = ecx_8[0x1c]
    result[0x22] = ecx_8[0x22]
    result[9] = ecx_8[9]
    result[0x25] = ecx_8[0x25]
    result[0x24] = ecx_8[0x24]
    result[0x26] = ecx_8[0x26]
    result[0x27] = ecx_8[0x27]

sub_753020(result)
return result
