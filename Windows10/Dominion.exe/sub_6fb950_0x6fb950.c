// 函数: sub_6fb950
// 地址: 0x6fb950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_3 = *(arg3 + *arg2)
void* var_c = eax_3

if (arg4 s>= 0)
    eax_3 = *(arg3 + arg2[4])

char const* const var_28
int32_t var_24
char const* const var_20
char* ecx_1

if (arg4 s< 0 || arg4 s>= eax_3)
    var_20 = "DefinitionVariableArrayMoveItem"
    var_24 = 0xb0
    ecx_1 = "currentPosition >= 0 && currentPosition < count"
    var_28 = "C:\x\ax2017\Engine\DefEditor.cpp"
else if (arg5 s< 0 || arg5 s>= eax_3)
    var_20 = "DefinitionVariableArrayMoveItem"
    var_24 = 0xb1
    ecx_1 = "newPosition >= 0 && newPosition < count"
    var_28 = "C:\x\ax2017\Engine\DefEditor.cpp"
else if (arg5 != arg4)
    eax_3 = arg2[6]
    uint32_t count_1 = *(eax_3 + 0xc)
    
    if (count_1 != 0)
        void* esi_2 = count_1 * arg4 + var_c
        void* edi_3 = count_1 * arg5 + var_c
        __alloca_probe_16(count_1)
        int32_t __saved_edi
        memcpy(&__saved_edi, esi_2, count_1)
        void* var_28_2
        void* var_24_2
        uint32_t count
        
        if (esi_2 u<= edi_3)
            count = edi_3 - esi_2
            var_24_2 = esi_2 + count_1
            var_28_2 = esi_2
        else
            count = esi_2 - edi_3
            var_24_2 = edi_3
            var_28_2 = edi_3 + count_1
        
        memcpy(var_28_2, var_24_2, count)
        uint32_t result = memcpy(edi_3, &__saved_edi, count_1)
        CookieCheckFunction(result)
        return result
    
    var_20 = "DefinitionGetSize"
    var_24 = 0x6d
    var_28 = "C:\x\ax2017\Engine\Definition.cpp"
    ecx_1 = "pDefMap->definitionSize != 0"
else
    var_20 = "DefinitionVariableArrayMoveItem"
    var_24 = 0xb2
    ecx_1 = "newPosition != currentPosition"
    var_28 = "C:\x\ax2017\Engine\DefEditor.cpp"

sub_63b870(eax_3, &data_801800, ecx_1, var_28, var_24, var_20)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
