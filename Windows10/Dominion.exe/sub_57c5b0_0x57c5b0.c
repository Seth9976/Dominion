// 函数: sub_57c5b0
// 地址: 0x57c5b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t var_18 = arg2

if (arg4 == 0xffffffff)
    arg2 = sub_591930()

int32_t* edi = arg5
int32_t eax_2 = *edi
int32_t var_14
uint32_t var_10
int128_t* var_c
int32_t edi_5

if (eax_2 == 1)
    edi_5 = 0
    var_c = nullptr
    var_10 = *((edi[1] << 5) + arg3 + 0x152c8)
    var_14 = 1
else if (eax_2 == 2)
    uint32_t eax_17 = zx.d((edi[1]).w)
    
    if (eax_17 u>= 0x320)
        sub_591930()
    
    var_10 = *(eax_17 * 0x64 + arg3 + 0x1a4c)
    uint32_t eax_21 = zx.d((edi[1]).w)
    
    if (eax_21 u>= 0x320)
        sub_591930()
    
    uint32_t edi_7 = zx.d((edi[1]).w)
    var_c = *(eax_21 * 0x64 + arg3 + 0x1a4c)
    
    if (edi_7 u>= 0x320)
        sub_591930()
    
    edi_5 = *(edi_7 * 0x64 + arg3 + 0x1a6c) u>> 4 & 1
    var_14 = 1
else
    if (eax_2 != 3)
        sub_63b870(eax_2 - 3, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
            0x1dab, "GetAbilityVisibileType")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    var_10 = sub_5915b0(eax_2 - 3, arg2, arg3, edi[1])
    int16_t eax_7
    int32_t edx
    eax_7, edx = sub_5916b0(edi[1])
    uint32_t ecx_2 = zx.d(eax_7)
    void* edi_1 = ecx_2 * 0x64
    void* edi_2
    
    if (ecx_2 u< 0x320)
        edi_2 = edi_1 + arg3
        var_c = *(edi_1 + arg3 + 0x1a4c)
    else
        sub_591930()
        edi_2 = edi_1 + arg3
        var_c = *(edi_1 + arg3 + 0x1a4c)
        edx = sub_591930()
    
    edi_5 = *(edi_2 + 0x1a6c) u>> 4 & 1
    uint32_t eax_11 = arg5[1]
    
    if ((eax_11.b & 0x30) != 0)
        var_14 = *(sub_5769e0(eax_11, edx, arg3, eax_11) + 0xb0)
    else
        var_14 = *(sub_576940(eax_11, edx, arg3, eax_11) + 0x84)

void* result = sub_5916b0(arg4)
int32_t ecx_5 = *(arg3 + 0x1504)

if (ecx_5 != 3 && ecx_5 != 5 && ecx_5 != 4 && ecx_5 != 6)
    ecx_5.b = ecx_5 == 2
    result = sub_61b1b0(arg5, 0x18, ecx_5.b, var_18, arg4, *arg5, arg5[1], var_10, var_c, edi_5, 
        var_14, result, 0, 0)

int32_t edi_10 = 0

if (arg7 s> 0)
    do
        result = *(arg3 + 0x1504)
        
        if (result != 3 && result != 5 && result != 4 && result != 6)
            int32_t ecx_6
            ecx_6.b = result == 2
            result = sub_61b1b0(result, 0x1a, ecx_6.b, var_18, arg4, *(arg6 + (edi_10 << 2)), 
                nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)
        
        edi_10 += 1
    while (edi_10 s< arg7)

CookieCheckFunction(result)
return result
