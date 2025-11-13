// 函数: sub_581a00
// 地址: 0x581a00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3

if (arg2 == 0)
    sub_63b870(arg1, &data_801800, "id != CARDID_NULL", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x28fd, "CardSetReveal")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t edi = zx.d(arg2.w)

if (edi u>= 0x320)
    sub_591930()

*(arg3 + ((edi * 0x19 + arg4) << 2) + 0x1a84) = arg5
void* result = *(arg3 + 0x1504)

if (result == 3 || result == 5 || result == 4 || result == 6)
    return result

uint32_t ecx
ecx.b = result == 2
return sub_61b1b0(result, 0x28, ecx.b, arg4, arg2, arg5, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)
