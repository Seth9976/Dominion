// 函数: sub_4acb80
// 地址: 0x4acb80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
void* i = data_147abd8
int32_t edi
int32_t var_14 = edi

for (; i != 0; i = *(i + 4))
    if (_stricmp(*(i + 8), arg2) == 0)
        if (i != 0)
            return (**arg1)(*(i + 8))
        
        break

for (void* i_1 = data_147abd8; i_1 != 0; i_1 = *(i_1 + 4))
    int32_t eax_2 = _stricmp(*(i_1 + 8), arg2)
    
    if (eax_2 == 0)
        sub_63b870(eax_2, &data_801800, "StateDoesntExist(arg_name)", "C:\x\ax2017\Engine\UI2.h", 
            0x69, "UI2StateDeclI::FindOrAlloc")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

(**arg1)(arg2)
int32_t result = data_147abd8
data_147abdc += 1
arg1[1] = result
data_147abd8 = arg1
return result
