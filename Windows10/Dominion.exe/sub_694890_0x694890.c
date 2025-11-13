// 函数: sub_694890
// 地址: 0x694890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_18
char const* const ecx

if (arg3 != 0)
    arg1 = arg4[4]
    
    if (arg1 == 0 || *arg1 == 0)
        void* edi = arg4[2]
        
        if (arg4[3].b != 0)
            do
                arg1.b = *arg3
                arg3 = &arg3[1]
            while (arg1.b != 0)
            
            void* eax_3 = edi + arg3 - &arg3[1] + 1
            arg4[2] = eax_3
            return eax_3
        
        *arg2 = edi
        char* edx = arg3
        void* ebx = &edx[1]
        
        do
            arg1.b = *edx
            edx = &edx[1]
        while (arg1.b != 0)
        
        memcpy(*arg4 + edi, arg3, edx - ebx + 1)
        int32_t eax_2 = edi + edx - ebx + 1
        arg4[2] = eax_2
        return eax_2
    
    char const* const var_14_2 = "DefBinSerializeString"
    var_18 = 0x15e
    ecx = "!tSerializer.pDataSizeWithoutHWBuffers || *tSerializer.pDataSizeWithoutHWBuffers == 0"
else
    char const* const var_14 = "DefBinSerializeString"
    var_18 = 0x15b
    ecx = "pString"

sub_63b870(arg1, &data_801800, ecx, "C:\x\ax2017\Engine\DefBin.cpp", var_18, 
    "DefBinSerializeString")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
