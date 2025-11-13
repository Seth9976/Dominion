// 函数: sub_68b720
// 地址: 0x68b720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = data_147abf4

if (arg3 != 0)
    uint32_t ecx = zx.d(arg3.w)
    
    if (ecx u< *(result + 4))
        void* ebx_2 = ecx * 0x64 + *result
        
        if (*(ebx_2 + 0x60) == arg3)
            void* result_2 = *(arg4 + 0xc)
            char const* const var_38_1
            int32_t var_34_1
            char const* const var_30_1
            char* ecx_1
            
            if (result_2 == 0)
                var_30_1 = "DefinitionGetSize"
                var_34_1 = 0x6d
                var_38_1 = "C:\x\ax2017\Engine\Definition.cpp"
                ecx_1 = "pDefMap->definitionSize != 0"
            label_68b810:
                sub_63b870(result_2, &data_801800, ecx_1, var_38_1, var_34_1, var_30_1)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            void* result_1 = result_2
            int32_t var_8
            int32_t* var_10_1 = &var_8
            var_8 = 0
            int32_t var_20 = 0
            int32_t var_1c_1 = 0
            char var_14_1 = 1
            int32_t var_38_2 = arg2
            sub_689e00(sub_694da0(&var_20, arg4, arg5, nullptr, &var_20), result_1, ebx_2 + 0x50)
            result_2 = sub_689b50(ebx_2 + 0x50, result_1)
            void** esi_1 = *(ebx_2 + 0x54)
            
            if (esi_1 == 0)
                var_30_1 = "XList<struct NetBuffer *>::GetTail"
                var_34_1 = 0x5a
                var_38_1 = "C:\x\ax2017\Engine\xList.h"
                ecx_1 = "mpTail != NULL"
                goto label_68b810
            
            void* esi_2 = *esi_1
            void* eax_4 = *(esi_2 + 0xfde8) + esi_2 + *(esi_2 + 0xfdec)
            sub_695020(eax_4, arg4, arg5, eax_4, 0)
            result = result_1
            *(esi_2 + 0xfdec) += result

return result
