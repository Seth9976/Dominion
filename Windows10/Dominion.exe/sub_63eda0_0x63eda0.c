// 函数: sub_63eda0
// 地址: 0x63eda0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result = arg3
int32_t* result_1 = result
int32_t var_24
char const* const var_20
char* ecx

if (arg4 s>= arg5)
    int32_t i = 0
    
    if (arg5 s<= 0)
        return result
    
    while (i s<= arg4 - 1)
        int32_t edx_3 = i + sub_63ed10(result, arg4 - 1 - i + 1)
        int32_t ecx_2 = *(arg2 + (i << 2))
        *(arg2 + (i << 2)) = *(arg2 + (edx_3 << 2))
        i += 1
        *(arg2 + (edx_3 << 2)) = ecx_2
        result = result_1
        
        if (i s>= arg5)
            return result
    
    var_20 = "RandomPCGIntRange"
    var_24 = 0x120
    ecx = "mmin <= mmax"
else
    var_20 = "ShuffleIntsN"
    var_24 = 0x132
    ecx = "total >= count"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\Random.cpp", var_24, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
