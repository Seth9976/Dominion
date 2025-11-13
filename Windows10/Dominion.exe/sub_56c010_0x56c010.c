// 函数: sub_56c010
// 地址: 0x56c010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax
int32_t edx
eax, edx = sub_573400()
int32_t var_14 = *(eax + 0x28)
int32_t var_18 = *(eax + 0x2c)
int32_t eax_3 = *eax
uint32_t var_10_1
int32_t var_c
uint32_t var_8
void* edi

if (eax_3 != 2)
    if (eax_3 != 3)
        sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 
            0x1294, "ThisTurnOnce")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    edi = eax + 4
    uint32_t eax_7
    int32_t edx_1
    eax_7, edx_1 = sub_5916d0(eax_3, edx, *(eax + 4), *(eax + 0x10))
    var_8 = eax_7
    var_c = edx_1
    uint32_t eax_8
    int32_t edx_2
    eax_8, edx_2 = sub_5915b0(eax_7, edx_1, *edi, *(eax + 0x10))
    var_10_1 = eax_8
    
    if ((*(eax + 0x10) & 0x30) == 0)
        void* eax_9 = sub_576940(eax_8, edx_2, *edi, *(eax + 0x10))
        var_14 = *(eax_9 + 0x38)
        var_18 = *(eax_9 + 0x3c)
else
    uint32_t eax_4 = *(eax + 0x10)
    edi = eax + 4
    uint32_t ebx_1 = zx.d(eax_4.w)
    var_c = *(eax + 0x14)
    int32_t ecx_1 = *edi
    var_8 = eax_4
    
    if (ebx_1 u>= 0x320)
        sub_591930()
    
    var_10_1 = *(ebx_1 * 0x64 + ecx_1 + 0x1a4c)

void* eax_11 = sub_5768a0(*edi)
int32_t eax_12 = arg9

if (eax_12 == 0xffffffff)
    eax_12 = *(eax + 0xc)

*(eax_11 + 0x14) = eax_12
*(eax_11 + 0x1c) = var_8
*(eax_11 + 0x20) = var_c
*(eax_11 + 0x24) = var_10_1
*(eax_11 + 0x18) = 0xffffffff
int32_t ecx_7 = *(eax + 0x20)
*(eax_11 + 0x44) = *(eax + 0x1c)
*(eax_11 + 0x48) = ecx_7
*(eax_11 + 0x28) = *(eax + 0x24)
*(eax_11 + 0x54) = arg2
*(eax_11 + 0x50) = arg3
*(eax_11 + 0x58) = arg4
*(eax_11 + 0x5c) = arg8
*(eax_11 + 0x60) = arg5
*(eax_11 + 0x84) = arg7
*(eax_11 + 0x38) = var_14
*(eax_11 + 0x3c) = var_18
*eax_11 = 4
*(eax_11 + 4) = 2
*(eax_11 + 0x4c) = 2
*(eax_11 + 0x70) = 0
*(eax_11 + 0x74) = 0
*(eax_11 + 0x7c) = 0
return sub_56b8e0(eax_11 + 0x78, eax_11 + 0x70, *edi, eax_11 + 0x74, eax_11 + 0x78, arg6)
