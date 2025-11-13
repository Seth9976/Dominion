// 函数: sub_61d4f0
// 地址: 0x61d4f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x5028)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* eax_2 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
char* eax_3 = *(eax_2 + 0x350c)

if (eax_3 != 0 && *eax_3 != 0)
    void var_502c
    
    if (sub_4e6680(eax_2 + 0x3510, eax_2 + 0x350c, &var_502c, eax_2 + 0x3510) == 0)
        char* eax_6 = *(eax_2 + 0x350c)
        char* const ecx_3 = &data_801800
        
        if (eax_6 != 0)
            ecx_3 = eax_6
        
        char* const var_10_2 = ecx_3
        sub_63b7f0("invalid campaign string %s")
        sub_61dd90(eax_2 + 0x353c)
        data_cc8dc8
        char* eax_7 = sub_4d8ad0(eax_2)
        CookieCheckFunction(eax_7)
        return eax_7
    
    eax_3 = sub_5ac2e0(&var_502c)
    data_171efd0 = eax_3

CookieCheckFunction(eax_3)
return eax_3
