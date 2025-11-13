// 函数: sub_694aa0
// 地址: 0x694aa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_2c_1
int32_t var_28_1
char const* const var_24_1
char* ecx_1

if (arg5 u> 0x5f5e0ff)
    var_24_1 = "DefBinSerializeVariableArray"
    var_28_1 = 0x1c8
    ecx_1 = "count >= 0 && count < 100000000"
    var_2c_1 = "C:\x\ax2017\Engine\DefBin.cpp"
else
    int32_t eax = arg2[0xa]
    int32_t ebx_1 = 0
    
    if ((eax.b & 0x10) == 0)
        ebx_1 = arg5
    
    arg1 = eax & 0x100
    int32_t* ecx = arg6[4]
    
    if (ecx == 0)
    label_694aec:
        int32_t edi_1 = arg6[1]
        int32_t* eax_4 = *arg2 + *arg6 + edi_1
        ecx.b = arg6[3].b
        arg5:3.b = ecx.b
        
        if (ebx_1 == 0)
            if (ecx.b == 0)
                *eax_4 = ebx_1
            
            return eax_4
        
        int32_t edi_4 = (arg6[2] + 3) & 0xfffffffc
        arg6[2] = edi_4
        
        if (ecx.b == 0)
            *eax_4 = edi_4
        
        arg1 = arg2[6]
        int32_t ecx_2 = *(arg1 + 0xc)
        
        if (ecx_2 != 0)
            uint32_t count = ecx_2 * ebx_1
            int32_t* eax_6 = *(arg3 + *arg2)
            
            if (arg5:3.b == 0)
                memcpy(*arg6 + edi_4, eax_6, count)
            
            int32_t eax_9 = edi_4 + count
            arg6[1] = edi_4
            arg6[2] = eax_9
            sub_694950(eax_9, ebx_1, eax_6, arg2, arg4, arg6)
            arg6[1] = edi_1
            return edi_1
        
        var_24_1 = "DefinitionGetSize"
        var_28_1 = 0x6d
        var_2c_1 = "C:\x\ax2017\Engine\Definition.cpp"
        ecx_1 = "pDefMap->definitionSize != 0"
    else
        if (arg1 != 0)
            if (*ecx == 0)
                *ecx = arg6[2]
            
            goto label_694aec
        
        if (*ecx == 0 || ebx_1 == 0)
            goto label_694aec
        
        var_24_1 = "DefBinSerializeVariableArray"
        var_28_1 = 0x1dc
        ecx_1 = "!tSerializer.pDataSizeWithoutHWBuffers || *tSerializer.pDataSizeWithoutHWBuffers == "
        "0 || count == 0"
        var_2c_1 = "C:\x\ax2017\Engine\DefBin.cpp"

sub_63b870(arg1, &data_801800, ecx_1, var_2c_1, var_28_1, var_24_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
