// 函数: sub_566920
// 地址: 0x566920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void** edx = __chkstk(0x1910)
void var_1914
int32_t var_c8c
__builtin_memcpy(&var_c8c, sub_566240(&var_1914, edx, 1, &var_1914, edx), 0xc84)

if (arg1 == 0)
    return arg1

if (arg1 == 1)
    return var_c8c

sub_63b870(arg1, &data_801800, "cards.numCards == 1", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x693, "RevealDeckOne")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
