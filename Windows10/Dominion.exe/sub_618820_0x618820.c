// 函数: sub_618820
// 地址: 0x618820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t eax = data_b81fdc
int32_t edi = arg1

if (eax != 3)
    if (eax != 5 && eax != 4 && eax != 6 && data_b81fd8 == 0)
        int32_t eax_1 = arg2
        
        if (arg2 == data_b824a4)
            eax_1 = data_b824a8
        
        arg1 = sub_59f9b0(eax_1, arg2, 0xb80ad8, eax_1, 7, 0, nullptr, 0, 0, 0, 0, 0)
        eax = data_b81fdc
    
    if (eax != 3 && eax != 5 && eax != 4 && eax != 6 && data_b81fd8 == 0)
        int32_t eax_2 = arg2
        
        if (arg2 == data_b824a4)
            eax_2 = data_b824a8
        
        arg1 = sub_59f9b0(eax_2, arg2, 0xb80ad8, eax_2, 9, 0, nullptr, 0, edi, 0, 0, 0)

uint32_t result = data_cc8d5c

if (result != 0)
    if (arg2 != *(result + 0x7590))
        return result
    
    int32_t var_10_1 = 0
    int32_t var_14_1 = arg1
    return sub_5af930(result, data_171e70c, arg1.b)

sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
