// 函数: sub_573050
// 地址: 0x573050
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
*(result + 4) = arg3
*result = 2
*(result + 8) = ebx
int32_t ecx_4 = *arg4
*(result + 0x14) = arg4[1]
*(result + 0x10) = ecx_4
*(result + 0x1c) = 0
*(result + 0x20) = 0
int32_t edi_1 = *(arg3 + 0x1a0c)
*(arg3 + 0x1a0c) = edi_1 + 1
int32_t eax_10
int32_t edx_2
edx_2:eax_10 = sx.q(ecx_4)
int32_t eax_12
int32_t edx_3
edx_3:eax_12 = sx.q(edi_1)
*(result + 0x28) = eax_12
*(result + 0x2c) = eax_10 | edx_3
*(result + 0x44) = 0
*(result + 0x24) = 0
*(result + 0x34) = 0
int32_t eax_13

if (ebx != 0)
    eax_13 = *(ebx + 0x38)
else
    eax_13 = 0

int32_t* ecx_6 = arg4
*(result + 0x38) = eax_13
uint32_t esi_4 = zx.d((*ecx_6).w)

if (esi_4 u>= 0x320)
    sub_591930()
    ecx_6 = arg4

if (*(esi_4 * 0x64 + arg3 + 0x1a70) != 0xffffffff)
    *(result + 0x30) = *ecx_6
    return result

if (ebx != 0)
    *(result + 0x30) = *(ebx + 0x30)
    return result

*(result + 0x30) = 0
return result
