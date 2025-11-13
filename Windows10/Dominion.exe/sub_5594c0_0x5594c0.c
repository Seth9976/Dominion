// 函数: sub_5594c0
// 地址: 0x5594c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t eax = sub_559420()
void* eax_1
int32_t edx
eax_1, edx = sub_573400()
int32_t result = sub_583f70(eax_1, edx, *(eax_1 + 4), 0x1200, eax)
int32_t result_1 = result

if (result_1 != 0)
    int32_t result_2 = result_1
    
    if (result_1 s> 1)
        result_2 = 1
    
    void* eax_2 = sub_573400()
    void* eax_3 = sub_559420()
    int32_t var_1c_1 = 0
    int32_t var_20_1 = 0xffffffff
    int32_t var_24_1 = 0
    int32_t eax_5 = neg.d(result_2)
    void var_2c
    result = sub_571fa0(eax_5, 0xffffffff, *(eax_2 + 4), 0x1200, eax_5, eax_3, nullptr, var_2c)
    
    if (*(eax_2 + 0xc) != 0xffffffff)
        void* eax_6 = sub_573400()
        int32_t ecx_3 = *(eax_6 + 0xc)
        
        if (ecx_3 == 0xffffffff)
            sub_63b870(eax_6, &data_801800, "c.activePlayer != PLAYER_NONE", 
                "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        result = *(eax_6 + 4)
        int32_t ecx_4 = ecx_3 * 0x5a30
        *(ecx_4 + result + 0x17558) |= 0x400
    
    if (result_2 == result_1)
        int32_t eax_7 = sub_559420()
        int32_t edi = *(sub_573400() + 4)
        
        if (eax_7 == 0)
            return sub_559220(0)
        
        if (eax_7 - 7 u> 0x41)
            sub_591930()
        
        if (eax_7 s>= 0x48)
            sub_591930()
        
        return sub_559220(*(edi + eax_7 * 0x10 + 0x152c))

return result
