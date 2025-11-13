// 函数: sub_656800
// 地址: 0x656800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = arg5 + arg6

if (arg6 == 0)
    edi = arg5

int32_t var_20
int32_t eax_5
char* ecx_4
char* const edx_15

if (arg2 != 0)
    int32_t edx_16 = arg3[1]
    int32_t esi_5 = *arg3
    
    if (edi s< edx_16 * esi_5)
        return sub_656800(arg4, edi, 0)
    
    eax_5 = arg4
    
    if (eax_5 == 0)
        return edi - (edx_16 - 1) * esi_5
    
    if (eax_5 == 1)
        return edi - (edx_16 - 1) * esi_5
    
    char const* const var_1c_1 = "TableIndextToSlot"
    var_20 = 0x1caf
    edx_15 = "unexpected table alignment"
    ecx_4 = "HaltMsg"
else
    int32_t ecx = *arg3
    
    if (ecx == 0)
        return 0
    
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(edi)
    int32_t temp0_1 = divs.dp.d(edx_1:eax_3, ecx)
    int32_t esi_2 = arg3[1]
    int32_t result = mods.dp.d(edx_1:eax_3, ecx)
    arg6 = temp0_1
    
    if (temp0_1 s>= esi_2)
        result += (temp0_1 - esi_2) * ecx
        arg6 = esi_2 - 1
    
    eax_5 = arg4
    
    if (eax_5 u> 5)
        char const* const var_1c = "TableIndextToSlot"
        var_20 = 0x1ca1
        edx_15 = &data_801800
        ecx_4 = "Halt"
    else
        switch (eax_5)
            case 1
                return result
            case 2
                result = divs.dp.d(sx.q(edi), esi_2)
                
                if (result s>= ecx)
                    return ecx - 1
                
                return result
            case 3
                return ecx - result - 1
            case 4
                return ecx - result - 1
            case 5
                return ecx - divs.dp.d(sx.q(edi), esi_2) - 1

sub_63b870(eax_5, edx_15, ecx_4, "C:\x\ax2017\Engine\UI2.cpp", var_20, "TableIndextToSlot")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
