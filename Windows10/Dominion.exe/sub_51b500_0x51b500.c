// 函数: sub_51b500
// 地址: 0x51b500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
int32_t edx
ecx, edx = __chkstk(0xa054)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
void* eax_2 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t var_ac
uint32_t eax_3 = sub_51b470(*(eax_2 + 0x423c), &var_ac)
uint32_t esi = eax_3

if (esi != 0)
label_51b579:
    
    if (esi == 1 && var_ac == 0x13 && *ecx == esi)
        goto label_51b58b
else if (*ecx == 1)
    *(eax_2 + 0x423c) = eax_3
    data_cc8dc8
    sub_4d8ad0(esi)
    esi = sub_51b470(*(eax_2 + 0x423c), &var_ac)
    
    if (esi != 0)
        goto label_51b579
    
label_51b58b:
    eax_3.b = 0
    CookieCheckFunction(eax_3)
    return eax_3

void var_a054
void var_502c
memcpy(&var_502c, sub_51ad70(&var_a054, &var_ac, esi, sub_5f6fa0()), 0x5020)
memcpy(edx, &var_502c, 0x5020)
uint32_t eax_6
eax_6.b = 1
CookieCheckFunction(eax_6)
return eax_6
