// 函数: sub_574250
// 地址: 0x574250
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t i = 7
int32_t* eax_2 = arg1 + 0x1594

do
    if (*eax_2 == 0)
        void var_60
        sub_573c80(arg2, &var_60, 0, nullptr)
        uint32_t result = sub_5735a0(&var_60, arg2, arg1, &var_60, 0)
        CookieCheckFunction(result)
        return result
    
    i += 1
    eax_2 = &eax_2[4]
while (i s< 0x12)

sub_63b870(eax_2, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x618, 
    "NextAvailableStandardPile")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
