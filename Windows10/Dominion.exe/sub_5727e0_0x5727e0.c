// 函数: sub_5727e0
// 地址: 0x5727e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg3
int32_t var_20_1
char const* const ecx

if (arg2 != 0)
    if (*(arg3 + 0x1520) s>= 0x320)
        sub_591930()
    
    int32_t ecx_1 = *(arg3 + 0x1520)
    int32_t edx = *(arg3 + 0xd48)
    *(arg3 + 0x1520) = ecx_1 + 1
    void* result = ecx_1 * 0x64 + 0x1a48 + arg3
    *result = sub_571b30(arg2, edx)
    *(result + 4) = arg2
    *(result + 0x28) = arg5
    *(result + 0x30) = arg5
    *(result + 0x2c) = 0xffffffff
    *(result + 0x24) = 0
    *(result + 0x5c) = 0
    *(result + 0xc) = 1
    int32_t ebx_5 = (result - arg3 - 0x1a48) s/ 0x64
    int32_t* esi_2
    
    if (arg6 == 0xffffffff)
        esi_2 = arg4
        arg1 = sub_572560(arg6, ebx_5, arg3, esi_2, arg5)
    else if (arg6 != 0)
        esi_2 = arg4
        arg1 = sub_572710(arg6, ebx_5, arg3, esi_2, 0xffffffff, arg6)
    else
        esi_2 = arg4
        arg1 = sub_572660(arg6, ebx_5, arg3, esi_2, arg5)
    
    if (esi_2 != 0)
        void* eax_4 = *(arg3 + 0x1504)
        
        if (eax_4 != 3 && eax_4 != 5 && eax_4 != 4 && eax_4 != 6)
            eax_4 = sub_61b1b0(eax_4, 0, eax_4 == 2, arg5, ebx_5, esi_2, arg6, nullptr, nullptr, 0, 
                0, 0, 0, 0)
        
        uint32_t i = 0
        
        if (*(arg3 + 0xd38) s> 0)
            do
                eax_4 = sub_581a00(eax_4, ebx_5, arg3, i, 2)
                i += 1
            while (i s< *(arg3 + 0xd38))
        
        return result
    
    char const* const var_1c_4 = "CardCreate"
    var_20_1 = 0x493
    ecx = "where != CW_NONE"
else
    char const* const var_1c = "CardCreate"
    var_20_1 = 0x466
    ecx = "what != CARD_NONE"

sub_63b870(arg1, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_20_1, 
    "CardCreate")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
