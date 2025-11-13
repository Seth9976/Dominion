// 函数: sub_69d3e0
// 地址: 0x69d3e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t count = *(arg4 + 0xc)
int32_t var_18
char const* const var_14
char* ecx

if (count != 0)
    memcpy(arg2, arg3, count)
    char result = sub_69c520(arg4)
    
    if (result == 0)
        return result
    
    count = *(arg4 + 0x10)
    
    if (count != 8)
        if (count s<= 0 || count s>= 0x12)
            return sub_69d380(count, arg4, arg2, nullptr, arg3)
        
        var_14 = "DefinitionDeepCopyReplaceBlock"
        var_18 = 0x344
        ecx = "!DefTypeIsBuiltIn(pDefMap)"
    else
        char* edi_1 = *arg3
        
        if (edi_1 != 0)
            char* esi_1 = edi_1
            void* ecx_2 = &esi_1[1]
            
            do
                count.b = *esi_1
                esi_1 = &esi_1[1]
            while (count.b != 0)
            
            int32_t eax = sub_687730(esi_1 - ecx_2 + 1)
            *arg2 = eax
            return memcpy(eax, edi_1, esi_1 - ecx_2 + 1)
        
        var_14 = "DefDeepCopyString"
        var_18 = 0x25b
        ecx = "pExistingString"
else
    var_14 = "DefinitionGetSize"
    var_18 = 0x6d
    ecx = "pDefMap->definitionSize != 0"

sub_63b870(count, &data_801800, ecx, "C:\x\ax2017\Engine\Definition.cpp", var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
