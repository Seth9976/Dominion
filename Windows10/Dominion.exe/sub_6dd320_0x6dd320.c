// 函数: sub_6dd320
// 地址: 0x6dd320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
int32_t var_c
char const* const var_8
int32_t result
char* ecx_1

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x10))
    var_8 = "AttribTagGetField"
    var_c = 0x8b
    ecx_1 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
else
    result = *(*(*(arg1 + 0xc) + (arg2 << 2)) + 0xc)
    
    if (result != 0)
        return result
    
    var_8 = "AttribTagGetDefMap"
    var_c = 0x1fe
    ecx_1 = "pAttribField->pDefMap"

sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Engine\AttribMap.cpp", var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
