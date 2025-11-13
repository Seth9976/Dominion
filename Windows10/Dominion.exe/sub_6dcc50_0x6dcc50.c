// 函数: sub_6dcc50
// 地址: 0x6dcc50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i = arg4
int32_t* var_8 = arg2
void* eax_1 = sub_6dd320(arg3, i)
int32_t esi = 0
int32_t eax_2 = *arg2
void* edi_1 = &arg2[2]
void* edi_2

if (eax_2 s> 0)
    edi_2 = *edi_1
    
    while (*edi_2 != i)
        esi += 1
        edi_2 += 0x10
        
        if (esi s>= eax_2)
            goto label_6dcc8f

if (eax_2 s<= 0 || edi_2 == 0)
label_6dcc8f:
    int32_t eax_3 = eax_2 << 4
    arg4 = eax_3
    void* eax_4 = sub_687730(eax_3 + 0x10)
    memcpy(eax_4, *edi_1, arg4)
    int32_t* ecx_1 = var_8
    
    if (*ecx_1 s> 0)
        int32_t eax_5 = *edi_1
        
        if (eax_5 != 0)
            _aligned_free(eax_5)
            ecx_1 = var_8
    
    *ecx_1 += 1
    *edi_1 = eax_4
    edi_2 = eax_4 + arg4
else
    sub_6dcb90(edi_2 + 8, i, arg3, edi_2 + 8)

*edi_2 = i

if (sub_69c520(eax_1) == 0)
    *(edi_2 + 8) = arg5
    *(edi_2 + 0xc) = arg6
    return arg5

int32_t eax_10 = *(eax_1 + 0x10)

if (eax_10 == 8)
    char* ebx = arg5
    char* esi_3 = ebx
    void* ecx_5 = &esi_3[1]
    
    do
        eax_10.b = *esi_3
        esi_3 = &esi_3[1]
    while (eax_10.b != 0)
    
    int32_t eax_11 = sub_687730(esi_3 - ecx_5 + 1)
    int32_t eax_12
    int32_t edx_2
    edx_2:eax_12 = sx.q(eax_11)
    *(edi_2 + 8) = eax_12
    *(edi_2 + 0xc) = edx_2
    return memcpy(eax_11, ebx, esi_3 - ecx_5 + 1)

void* eax_14 = eax_10 - 1
char const* const var_2c_3
int32_t var_28_3
char const* const var_24_4
char* ecx_8

if (eax_14 u> 0x10)
    int32_t* ecx_9 = arg5
    eax_14 = ecx_9 | arg6
    
    if (eax_14 != 0)
    label_6dcd8b:
        int32_t* eax_17 = sub_69d4c0(ecx_9, eax_1)
        *(edi_2 + 8) = eax_17
        return eax_17
    
    if (i s>= 0)
        eax_14 = arg3
    
    if (i s< 0 || i s>= *(eax_14 + 0x10))
        var_24_4 = "AttribTagGetField"
        var_28_3 = 0x8b
        ecx_8 = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
        var_2c_3 = "C:\x\ax2017\Engine\AttribMap.cpp"
    else
        eax_14 = *(*(eax_14 + 0xc) + (i << 2))
        ecx_9 = *(eax_14 + 0x24)
        
        if (ecx_9 != 0)
            goto label_6dcd8b
        
        uint32_t count = *(eax_1 + 0xc)
        
        if (count != 0)
            int32_t* eax_18 = sub_687730(count)
            memset(eax_18, 0, count)
            *(edi_2 + 8) = eax_18
            return sub_69ca80(eax_18, eax_1)
        
        var_24_4 = "DefinitionGetSize"
        var_28_3 = 0x6d
        var_2c_3 = "C:\x\ax2017\Engine\Definition.cpp"
        ecx_8 = "pDefMap->definitionSize != 0"
else
    var_24_4 = "AttribMapSetValue"
    var_28_3 = 0xf4
    ecx_8 = "!DefTypeIsBuiltIn(pDefMap)"
    var_2c_3 = "C:\x\ax2017\Engine\AttribMap.cpp"

sub_63b870(eax_14, &data_801800, ecx_8, var_2c_3, var_28_3, var_24_4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
