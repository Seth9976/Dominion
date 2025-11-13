// 函数: sub_6a4320
// 地址: 0x6a4320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = arg4
*(edi + 0x10) = arg2
void* ecx = arg2[3]
void* eax = *(ecx + 0x10)
uint32_t eax_1 = sub_69c590(ecx)

if (eax_1.b != 0)
    return sub_6a34e0(eax_1, arg2[3], *arg2 + arg3, arg2, edi)

if (eax == 5)
    return sub_6a3c70(eax, arg2, arg3, edi)

if (eax == 0x11)
    return sub_6a3a50(eax, arg2, arg3, edi)

if (eax == 0x13)
    return sub_6a4230(eax, arg2, *arg2 + arg3, *(edi + 0xc))

if (eax == 0x14)
    int32_t var_1c_4 = *(edi + 0xc)
    return sub_6a3ff0(eax, *arg2 + arg3, arg3, arg2)

char const* const var_24
int32_t var_20_2
char const* const var_1c_5
void* eax_14
char* ecx_14

if (eax == 0xc)
    void* eax_9 = *arg2 + arg3
    char* eax_10 = *(edi + 4)
    int32_t ecx_9
    
    if (eax_10 == 0 || *eax_10 == 0)
        ecx_9 = 0
    else
        ecx_9 = *(sub_63d4e0(edi + 4) + 8)
    
    char* edi_1 = sub_687730(ecx_9 + 1)
    char* const edx_6 = &data_801800
    *eax_9 = edi_1
    char* ecx_12 = *(edi + 4)
    
    if (ecx_12 != 0)
        edx_6 = ecx_12
    
    void* eax_13
    
    do
        eax_13.b = *edx_6
        edx_6 = &edx_6[1]
        *edi_1 = eax_13.b
        edi_1 = &edi_1[1]
    while (eax_13.b != 0)
    eax_14 = *arg2
    int32_t* esi_1 = arg2[4]
    char* ecx_13 = *(arg3 + eax_14)
    
    if (ecx_13 != 0)
        int32_t eax_15 = sub_69c4d0(ecx_13, 0)
        *(esi_1 + arg3) = eax_15
        return eax_15
    
    var_1c_5 = "DefinitionSetHashFromName"
    var_20_2 = 0xc2
    var_24 = "C:\x\ax2017\Engine\Definition.cpp"
    ecx_14 = "name"
else if (eax != 0xb)
    void* edx_8 = arg2[3]
    eax_14 = *(edx_8 + 0x10) - 1
    
    if (eax_14 u> 0x10)
        return sub_6a4770(eax_14, edx_8, *arg2 + arg3, *(edi + 0xc), 0)
    
    var_1c_5 = "DefParseReadFieldType"
    var_20_2 = 0x3f7
    var_24 = "C:\x\ax2017\Engine\DefParseTree.cpp"
    ecx_14 = "!DefTypeIsBuiltIn(pField->pDefMap)"
else
    void* eax_17 = *arg2 + arg3
    
    if (*(edi + 0xc) == 0)
        *eax_17 = 0
        return eax_17
    
    eax_14 = arg2[6]
    uint32_t ecx_15 = *(eax_14 + 0xc)
    
    if (ecx_15 != 0)
        int32_t* eax_18 = sub_687730(ecx_15)
        *eax_17 = eax_18
        return sub_6a4770(eax_18, arg2[6], eax_18, *(edi + 0xc), 0)
    
    var_1c_5 = "DefinitionGetSize"
    var_20_2 = 0x6d
    var_24 = "C:\x\ax2017\Engine\Definition.cpp"
    ecx_14 = "pDefMap->definitionSize != 0"

sub_63b870(eax_14, &data_801800, ecx_14, var_24, var_20_2, var_1c_5)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
