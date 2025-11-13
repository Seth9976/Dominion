// 函数: sub_561af0
// 地址: 0x561af0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c9c
void* eax_1 = __security_cookie ^ &var_c9c
void* var_c = eax_1
var_c9c = arg2

if (arg3 != 0)
    int32_t var_cb0_1
    char const* const var_cac_1
    char* ecx
    
    if (arg3 s< 0)
        var_cac_1 = "MoneyPlus"
        var_cb0_1 = 0x63
        ecx = "amount >= 0"
    label_561c3c:
        sub_63b870(eax_1, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 
            var_cb0_1, var_cac_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_2 = sub_573400()
    uint32_t ebx_1 = 0
    
    if ((var_c9c.b & 1) != 0)
        ebx_1 = sub_56b780()
    
    if (sub_561d80(sub_56b800()) != 0)
        int32_t var_cac_2 = 0xc
        void var_c98
        sub_588db0(&var_c98, *(eax_2 + 0xc), *(eax_2 + 4), arg3, 0x3ea, 0, 0, 0, nullptr, &var_c98, 
            ebx_1)
        eax_1 = sub_573400()
        int32_t ecx_3 = *(eax_1 + 0xc)
        
        if (ecx_3 == 0xffffffff)
            goto label_561c26
        
        uint32_t eax_7 = *(eax_1 + 4)
        int32_t ecx_4 = ecx_3 * 0x5a30
        *(ecx_4 + eax_7 + 0x17558) |= 4
        CookieCheckFunction(eax_7)
        return eax_7
    
    uint32_t eax_8 = sub_573400()
    sub_590760(eax_8, *(eax_8 + 0xc), *(eax_8 + 4), 0, arg3, ebx_1, 0)
    
    if (*eax_2 == 2 && arg4 == 0)
        void* ecx_8 = *(eax_2 + 4)
        int32_t edx_2 = *(ecx_8 + 0x19b0)
        *(ecx_8 + 0x19b0) = edx_2 + 1
        *(*(eax_2 + 4) + (edx_2 << 2) + 0x38fe8) = *(eax_2 + 0x10)
    
    eax_1 = sub_573400()
    int32_t ecx_10 = *(eax_1 + 0xc)
    
    if (ecx_10 == 0xffffffff)
    label_561c26:
        var_cac_1 = "SetGainFlag"
        ecx = "c.activePlayer != PLAYER_NONE"
        var_cb0_1 = 0x52
        goto label_561c3c
    
    eax_1 = *(eax_1 + 4)
    int32_t ecx_11 = ecx_10 * 0x5a30
    *(ecx_11 + eax_1 + 0x17558) |= 1

CookieCheckFunction(eax_1)
return eax_1
