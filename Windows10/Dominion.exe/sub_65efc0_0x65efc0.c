// 函数: sub_65efc0
// 地址: 0x65efc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_1c
int32_t var_18
char const* const var_14
char* ecx

if (arg2 != 0)
    arg1 = arg5
    
    if (arg1 != 0xffffffff)
        __builtin_memcpy(arg4, arg2, 0x78)
        int32_t esi_2 = 0
        
        if (arg1 s< 0)
            return arg4
        
        int32_t edi_2 = 0
        
        while (true)
            if (edi_2 s< 0 || esi_2 s>= *(arg3 + 0x18))
                var_14 = "XDynArray<struct TextEntry>::operator []"
                var_18 = 0xe2
                var_1c = "C:\x\ax2017\Engine\xDynArray.h"
                ecx = "index >= 0 && index < mSize"
                break
            
            int32_t* edx_1 = *(arg3 + 0x14)
            
            if (*(edx_1 + edi_2) == 1)
                sub_65e640(arg4, *(edx_1 + edi_2 + 0x20))
                arg1 = arg5
            
            esi_2 += 1
            edi_2 += 0x34
            
            if (esi_2 s> arg1)
                return arg4
            
            continue
    else
        var_14 = "ComputeFancy"
        var_18 = 0x2a2a
        var_1c = "C:\x\ax2017\Engine\UI2.cpp"
        ecx = "endIdx != -1"
else
    var_14 = "ComputeFancy"
    var_18 = 0x2a28
    var_1c = "C:\x\ax2017\Engine\UI2.cpp"
    ecx = "&initialFancy"

sub_63b870(arg1, &data_801800, ecx, var_1c, var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
