// 函数: sub_573260
// 地址: 0x573260
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

TEB* fsbase
void* esi = *fsbase->ThreadLocalStoragePointer

if (*(esi + 0xf010) s>= 0x200)
    sub_591930()

int32_t eax_1 = *(esi + 0xf010)
int32_t temp0 = data_cc8dd8

if (eax_1 s< temp0)
    sub_63b870(eax_1, &data_801800, "curDepth >= origContextDepth", 
        "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 0x16dd, "IsDomContextStackEmpty")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* ebx

if (eax_1 != temp0)
    ebx = esi - 0x68 + eax_1 * 0x78
else
    ebx = nullptr

void* result = esi + 0x10 + eax_1 * 0x78
*(esi + 0xf010) = eax_1 + 1
*(result + 0xc) = arg2
*result = 3
*(result + 4) = arg3
*(result + 8) = ebx
*(result + 0x10) = arg4
*(result + 0x1c) = 0
*(result + 0x20) = 0
int32_t ebx_2 = *(arg3 + 0x1a0c)
*(arg3 + 0x1a0c) = ebx_2 + 1
int32_t eax_8
int32_t edx_1
edx_1:eax_8 = sx.q(sub_5916d0(ebx_2 + 1, result, arg3, arg4))
int32_t eax_10
int32_t edx_2
edx_2:eax_10 = sx.q(ebx_2)
*(result + 0x28) = eax_10
*(result + 0x2c) = eax_8 | edx_2
*(result + 0x44) = 0
*(result + 0x24) = 0
*(result + 0x30) = sub_5916d0(eax_10, edx_2, arg3, arg4)
*(result + 0x34) = 0

if (ebx != 0)
    *(result + 0x38) = *(ebx + 0x38)
    return result

*(result + 0x38) = ebx
return result
