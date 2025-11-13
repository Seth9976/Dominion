// 函数: sub_572f80
// 地址: 0x572f80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg3
TEB* fsbase
void* edi_1 = *fsbase->ThreadLocalStoragePointer + 0x10

if (*(edi_1 + 0xf000) s>= 0x200)
    sub_591930()

int32_t ecx = *(edi_1 + 0xf000)
int32_t eax_3 = ecx * 0xf
int32_t eax_4
void* edx

if (ecx != 0)
    eax_4 = eax_3 << 3
    edx = edi_1 - 0x78 + eax_4
else
    edx = nullptr
    eax_4 = eax_3 << 3

void* result = eax_4 + edi_1
*(edi_1 + 0xf000) = ecx + 1
*(result + 0x10) = arg2
*(result + 0xc) = arg5
*(result + 4) = arg3
*(result + 8) = edx
*result = 4
*(result + 0x1c) = 0
*(result + 0x20) = 0
int32_t ecx_1 = *(arg3 + 0x1a0c)
*(arg3 + 0x1a0c) = ecx_1 + 1
int32_t eax_10
int32_t edx_2
edx_2:eax_10 = sx.q(ecx_1)
*(result + 0x28) = eax_10
*(result + 0x2c) = edx_2
*(result + 0x44) = 0
*(result + 0x24) = 0
*(result + 0x34) = 0
*(result + 0x70) = arg4
*(result + 0x38) = 0
return result
