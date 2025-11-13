// 函数: sub_6cde00
// 地址: 0x6cde00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
int32_t var_14
void* result
char const* const ecx

if (arg2 s< 0x80)
    int32_t ecx_1 = *(arg1 + (arg2 << 2) + 0x7c)
    
    if (ecx_1 == 0)
        result = sub_6d1290()
        *(arg1 + (arg2 << 2) + 0x7c) = *(result + 0x4cc)
    else
        uint32_t eax = zx.d(ecx_1.w)
        
        if (eax u>= data_cafe70)
            result = sub_6d1290()
            *(arg1 + (arg2 << 2) + 0x7c) = *(result + 0x4cc)
        else
            result = eax * 0x4d0 + data_cafe6c
            
            if (*(result + 0x4cc) != ecx_1 || result == 0)
                result = sub_6d1290()
                *(arg1 + (arg2 << 2) + 0x7c) = *(result + 0x4cc)
    
    *(result + 0x3c) = *(arg1 + 0x3c)
    *(result + 0x4c) = *(arg1 + 0x4c)
    
    if (not(*(result + 0x3c) f<= 0f))
        return result
    
    char const* const var_10_1 = "FabSubstate"
    var_14 = 0x1a4
    ecx = "substate->transform.t.s > 0"
else
    char const* const var_10 = "FabSubstate"
    var_14 = 0x198
    ecx = "i < 128"

sub_63b870(result, &data_801800, ecx, "C:\x\ax2017\Engine\FabDef.cpp", var_14, "FabSubstate")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
