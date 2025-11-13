// 函数: sub_6a6c70
// 地址: 0x6a6c70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_c = arg1
char* const ecx_3
char i

do
    char* _Str1_1 = *arg1
    char* const _Str1 = &data_801800
    
    if (_Str1_1 != 0)
        _Str1 = _Str1_1
    
    int32_t eax_1 = *(arg2 + 4)
    
    if (eax_1 != 3)
        goto label_6a6ca2
    
    if (sub_7076e0(arg2) != 0)
        eax_1 = *(arg2 + 4)
    label_6a6ca2:
        
        if (eax_1 == 4 && _strnicmp(_Str1, *(arg2 + 0xc), *(arg2 + 0x10)) == 0
                && sub_7076e0(arg2) != 0)
            return 1
    
    i = sub_6a67a0(arg1, arg2)
    ecx_3 = &data_801800
while (i != 0)
char* eax_5 = *arg1

if (eax_5 != 0)
    ecx_3 = eax_5

char* const var_1c_2 = ecx_3
sub_6a6740(arg2, "failed to read block '%s'")
uint32_t result
result.b = 0
return result
