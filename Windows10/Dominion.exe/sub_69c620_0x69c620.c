// 函数: sub_69c620
// 地址: 0x69c620
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
uint32_t eax_1 = *(arg3 + 0x10) - 1
int32_t var_18

if (eax_1 u> 0xf)
label_69c6e6:
    char const* const var_14_1 = "DefinitionFillShallowFieldWithDefaults"
    var_18 = 0xaf
label_69c6ff:
    sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Engine\Definition.cpp", var_18, 
        "DefinitionFillShallowFieldWithDefaults")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

eax_1 = zx.d(lookup_table_69c738[eax_1])

switch (eax_1)
    case 0
        int32_t eax_3 = *(arg4 + 0x24)
        *arg2 = eax_3
        return eax_3
    case 1
        void* eax_4
        eax_4.w = *(arg4 + 0x24)
        *arg2 = eax_4.w
        return eax_4
    case 2
        void* eax_7
        eax_7.b = *(arg4 + 0x24)
        *arg2 = eax_7.b
        return eax_7
    case 3
        void* eax_8
        eax_8.b = *(arg4 + 0x24) != 0
        *arg2 = eax_8.b
        return eax_8
    case 4
        int32_t eax_6 = *(arg4 + 0x24)
        *(arg2 + 4) = 0
        *arg2 = eax_6
        return eax_6
    case 5
        char* const edi = &data_801800
        int32_t edx = *(arg4 + 0x20)
        char* eax_10 = *(arg4 + 0x24)
        
        if (eax_10 != 0)
            edi = eax_10
        
        if (edx == 0)
            if (*edi == edx.b)
                *arg2 = 0
                return 0
            
            if (edx == 0)
                edx = sub_6b7ef0(edi)
        
        int32_t eax_12 = sub_69f030(edi, edx)
        *arg2 = eax_12
        return eax_12
    case 6
        char const* const var_14 = "DefinitionFillShallowFieldWithDefaults"
        *arg2 = (zx.o(0)).q
        var_18 = 0x8f
        goto label_69c6ff
    case 7
        goto label_69c6e6
