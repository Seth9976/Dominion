// 函数: sub_752bd0
// 地址: 0x752bd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1[0x23] != 0)
    return sub_752e10(arg1) __tailcall

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
char* ecx_8 = edi
void* edx_1 = &ecx_8[1]
int32_t eax_8

do
    eax_8.b = *ecx_8
    ecx_8 = &ecx_8[1]
while (eax_8.b != 0)
int32_t eax_9 = data_147ded8
int32_t eax_10

if (eax_9 == 0)
    eax_10 = malloc(ecx_8 - edx_1 + 1)
else
    eax_10 = eax_9(ecx_8 - edx_1 + 1, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x43)

result[0x19] = eax_10
void* ecx_12 = eax_10 - edi

do
    eax_10.b = *edi
    edi = &edi[1]
    *(ecx_12 + edi - 1) = eax_10.b
while (eax_10.b != 0)

result[0x1e] = arg1[0x1e]
result[0x1f] = arg1[0x1f]
result[0x20] = arg1[0x20]
result[0x21] = arg1[0x21]
sub_759100(arg1, result)
int32_t ecx_14 = data_147ded8
int32_t _Size = arg1[9] << 2
int32_t eax_16

if (ecx_14 == 0)
    eax_16 = malloc(_Size)
else
    eax_16 =
        ecx_14(_Size, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x47)

result[0x1a] = eax_16
memcpy(eax_16, arg1[0x1a], arg1[9] << 2)
int32_t ecx_16 = data_147ded8
int32_t _Size_1 = arg1[9] << 2
int32_t eax_20

if (ecx_16 == 0)
    eax_20 = malloc(_Size_1)
else
    eax_20 =
        ecx_16(_Size_1, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x49)

result[0x1b] = eax_20
memcpy(eax_20, arg1[0x1b], arg1[9] << 2)
int32_t ecx_18 = data_147ded8
result[0x1c] = arg1[0x1c]
uint32_t _Size_2 = arg1[0x1c] * 2
int32_t eax_25

if (ecx_18 == 0)
    eax_25 = malloc(_Size_2)
else
    eax_25 =
        ecx_18(_Size_2, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x4c)

result[0x1d] = eax_25
memcpy(eax_25, arg1[0x1d], arg1[0x1c] * 2)
result[0x22] = arg1[0x22]
int32_t eax_29 = arg1[0x24]

if (eax_29 s> 0)
    int32_t ecx_20 = data_147ded8
    result[0x24] = eax_29
    int32_t _Size_3 = arg1[0x24] << 2
    int32_t eax_31
    
    if (ecx_20 == 0)
        eax_31 = malloc(_Size_3)
    else
        eax_31 = ecx_20(_Size_3, 
            "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\MeshAttachment.c", 0x51)
    
    result[0x25] = eax_31
    memcpy(eax_31, arg1[0x25], arg1[0x24] << 2)

result[0x26] = arg1[0x26]
result[0x27] = arg1[0x27]
return result
