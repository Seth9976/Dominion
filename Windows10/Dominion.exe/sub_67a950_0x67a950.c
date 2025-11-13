// 函数: sub_67a950
// 地址: 0x67a950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_2 = *(arg1 + 0x15f8)

if (eax_2 == 2)
    int32_t var_98 = 0
    void var_6c
    void var_28
    void var_18
    int128_t* eax_4 = sub_656980(&var_6c, 0, arg1, &var_6c, &var_28, &var_18)
    int32_t var_a8 = 0
    int128_t var_4c = *eax_4
    int96_t var_5c = (eax_4[1]).12
    int128_t* eax_6 = sub_656980(&var_4c, 1, arg1, &var_4c, &var_28, &var_18)
    int128_t var_8c = *eax_6
    *(eax_6 + 0x18)
    CookieCheckFunction(eax_6)
    return eax_6

if (eax_2 == 3)
    uint32_t eax_7
    int32_t edx
    eax_7, edx = sub_657e50(arg1)
    int32_t var_c = edx
    CookieCheckFunction(eax_7)
    return eax_7

sub_63b870(eax_2, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x5736, 
    "UI2GetScrollDeltaAmount")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
