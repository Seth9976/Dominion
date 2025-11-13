// 函数: sub_6674e0
// 地址: 0x6674e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg6
int32_t edi = 0
char const* const var_24
int32_t var_20
char const* const var_1c
char* ecx_4
int32_t edx

if (ebx s<= 0)
    edx = data_c23bac
label_66759f:
    *arg4 = ebx
    
    if (arg3 != 0)
        arg1 = zx.d(arg3.w)
        
        if (arg1 u< edx)
            arg1 = arg1 * 0x18d0 + data_c23ba8
            
            if (*(arg1 + 0x18c8) == arg3)
                return sub_6673f0(arg1, arg2, arg1, arg4, 0)
        
    label_6675e5:
        var_1c = "DataArray<struct UI2>::DataArrayGet"
        var_20 = 0x6d
        ecx_4 = "DataArrayTryToGet(id) != NULL"
    else
    label_6675a5:
        var_1c = "DataArray<struct UI2>::DataArrayGet"
        var_20 = 0x6c
        ecx_4 = "id != DATAID_NULL"
    
    var_24 = "C:\x\ax2017\Engine\DataArray.h"
else
    int32_t* esi_1 = arg2
    int32_t* eax_1 = arg5 - arg2
    arg5 = eax_1
    
    while (true)
        arg1 = sub_665600(*(eax_1 + esi_1))
        int32_t ecx_1 = *(arg1 + 0x18c8)
        *esi_1 = ecx_1
        
        if (ecx_1 == 0)
            goto label_6675a5
        
        edx = data_c23bac
        arg1 = zx.d(ecx_1.w)
        
        if (arg1 u>= edx)
            goto label_6675e5
        
        arg1 *= 0x18d0
        ebx = arg6
        
        if (*(arg1 + data_c23ba8 + 0x18c8) != ecx_1)
            goto label_6675e5
        
        int32_t ecx_2 = data_c23ba8
        
        if (*(arg1 + ecx_2 + 5) == 0)
            void* ecx_3 = *(arg1 + ecx_2 + 0x1718)
            
            if (ecx_3 != 0)
                arg1 = sub_6655e0(ecx_3)
            
            if (ecx_3 == 0 || arg1.b == 0)
                edi += 1
                esi_1 = &esi_1[1]
                
                if (edi s>= ebx)
                    goto label_66759f
                
                eax_1 = arg5
                continue
        
        var_1c = "FilterParentsOnly"
        var_20 = 0x398d
        var_24 = "C:\x\ax2017\Engine\UI2.cpp"
        ecx_4 = "!IsTemplate(UI2Get(parentsOnly[i]))"
        break
sub_63b870(arg1, &data_801800, ecx_4, var_24, var_20, var_1c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
