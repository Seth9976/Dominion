// 函数: sub_4ff5c0
// 地址: 0x4ff5c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
int32_t edx = 0
int32_t i = 7
int32_t* eax_2 = *(sub_573400() + 4) + 0x1594

do
    if (*eax_2 != 0 && eax_2[2] == 0)
        edx += 1
    
    i += 1
    eax_2 = &eax_2[4]
while (i s< 0x21)

if (edx != 0)
    int32_t* result = sub_562880(arg3, arg2, var_c)
    
    if (result == 0)
        return result
    
    void* eax_6 = sub_573400()
    arg2 = zx.d(result.w)
    int32_t ebx_1 = *(eax_6 + 0xc)
    void* edi = *(eax_6 + 4)
    
    if (arg2 u>= 0x320)
        sub_591930()
    
    int32_t eax_7 = arg2 * 0x64
    sub_576e90(eax_7, edi, &var_c, ebx_1, *(eax_7 + edi + 0x1a4c), 0)
    int32_t var_1c_3 = var_c + 2
else
    void* eax_3 = sub_573400()
    sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 1, 1, 0, 0)
    void* eax_4 = sub_573400()
    int32_t ecx_1 = *(eax_4 + 0xc)
    
    if (ecx_1 == 0xffffffff)
        sub_63b870(eax_4, &data_801800, "c.activePlayer != PLAYER_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t eax_5 = *(eax_4 + 4)
    int32_t ecx_2 = ecx_1 * 0x5a30
    int32_t var_1c_1 = ecx_2
    *(ecx_2 + eax_5 + 0x17558) |= 2
    int32_t var_1c_2 = 4

return sub_564ce0(arg2)
