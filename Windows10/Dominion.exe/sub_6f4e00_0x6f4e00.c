// 函数: sub_6f4e00
// 地址: 0x6f4e00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
int32_t eax = *arg2
char* edi_1 = *arg4
int32_t var_1c
char const* const var_18_1
char* ecx_1

if (eax != 0)
    if (eax != *(arg3 + 0x24))
        eax = _aligned_free(eax)
        *arg2 = 0
    
    if (edi_1 != 0)
        char* esi = edi_1
        void* ecx_2 = &esi[1]
        
        do
            eax.b = *esi
            esi = &esi[1]
        while (eax.b != 0)
        
        int32_t eax_1 = sub_687730(esi - ecx_2 + 1)
        *arg2 = eax_1
        memcpy(eax_1, edi_1, esi - ecx_2 + 1)
        sub_63d8d0(arg5, *arg4)
        char* result = *arg5
        char* const result_1 = &data_801800
        
        if (result != 0)
            result_1 = result
        
        *arg4 = result_1
        return result
    
    var_18_1 = "DefDeepCopyString"
    var_1c = 0x25b
    ecx_1 = "pExistingString"
else
    var_18_1 = "DefinitionDeleteString"
    var_1c = 0x17c
    ecx_1 = "*pString"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Engine\Definition.cpp", var_1c, var_18_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
