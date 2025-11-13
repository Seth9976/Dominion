// 函数: sub_6a57b0
// 地址: 0x6a57b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
void* edi = arg4
int32_t* ebx = arg2
uint32_t result = *(*(edi + 0x18) + 0xc)
uint32_t result_1 = result
char const* const ecx
char* var_24

if (result != 0)
    void* esi = nullptr
    arg4 = nullptr
    
    if (arg5 s<= 0)
        return result
    
    while (true)
        char* ecx_2
        result, ecx_2 = sub_69c590(*(edi + 0x18))
        char* edx = *(edi + 4)
        
        if (result.b == 0)
            var_24 = ecx_2
            
            if (edx == 0)
                char const* const var_28_5 = "XString::XString"
                int32_t var_2c_4 = 0x94
                char const* const var_30_2 = "C:\x\ax2017\Engine\xString.cpp"
                ecx = &data_871e0c
                break
            
            sub_63d720(&var_24, edx)
            sub_6a4c00(arg3)
            result = arg3
            
            if (*(result + 0xc) s> 0)
                int32_t* esi_1 = *(result + 8)
                
                if (esi_1 == 0)
                    var_24 = "XList<struct DefParseItem *>::GetTail"
                    int32_t var_28_4 = 0x5a
                    char const* const var_2c_3 = "C:\x\ax2017\Engine\xList.h"
                    ecx = "mpTail != NULL"
                    break
                
                int32_t edx_2 = *(edi + 0x28)
                void* esi_2 = *esi_1
                *(esi_2 + 0x14) = (edx_2 u>> 9).b & 1
                *(esi_2 + 0x15) = (edx_2 u>> 0xa).b & 1
                esi = arg4
            
            var_24 = arg6
            result = sub_6a6290(*(edi + 0x18), var_24)
        else
            var_24 = nullptr
            int32_t var_28_2 = 0
            result = sub_6a4d40(result, ebx, arg3, *(edi + 0x18), edx, 0, var_24)
        
        ebx += result_1
        esi += 1
        arg4 = esi
        
        if (esi s>= arg5)
            return result
else
    var_24 = "DefinitionGetSize"
    int32_t var_28_1 = 0x6d
    char const* const var_2c_1 = "C:\x\ax2017\Engine\Definition.cpp"
    ecx = "pDefMap->definitionSize != 0"
sub_63b870(result, &data_801800, ecx)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
