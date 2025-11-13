// 函数: sub_64f9b0
// 地址: 0x64f9b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ebx = 1
void* eax_4 = arg2
uint32_t result_1 = 0
int32_t var_110[0x41]
var_110[0] = arg3
int32_t edi = 0
int32_t var_11c = 1
uint32_t result = 0
int32_t var_128 = 0

if (*(eax_4 + 4) s> 0)
    int32_t edx = 0
    int32_t var_12c_1 = 0
    
    while (true)
        int32_t* edx_1 = edx + *eax_4
        int32_t* var_118_1 = edx_1
        int32_t var_150
        char* ecx_5
        
        if (edx_1[2] == 0xffffffff)
        label_64facd:
            eax_4 = arg2
            edi += 1
            edx = var_12c_1 + 0x1c
            var_128 = edi
            var_12c_1 = edx
            
            if (edi s< *(eax_4 + 4))
                continue
            else if (ebx s< 0x40)
                if (result_1 s< 0x20)
                    break
                
                char const* const var_14c_4 = "StateTreeLookup"
                var_150 = 0x1279
                ecx_5 = "numResults < MAX_RESULTS"
            else
                char const* const var_14c = "StateTreeLookup"
                var_150 = 0x1278
                ecx_5 = "numTrees < MAX_TREES"
        else
            eax_4 = edx_1[1]
            
            if (eax_4 != arg4 && eax_4 != 0xffffffff)
                goto label_64facd
            
            if (ebx s>= 0x40)
                char const* const var_14c_2 = "StateTreeLookup"
                var_150 = 0x1272
                ecx_5 = "numTrees < MAX_TREES"
            else
                if (result_1 s< 0x20)
                    int32_t i = 0
                    char var_120
                    var_120.d = ebx
                    int32_t i_1 = 0
                    
                    if (ebx s> 0)
                        void* edi_3 = arg5 + ((result_1 + ((result_1 + 1) << 1)) << 2)
                        
                        do
                            void* ebx_2 = *edx_1
                            void* esi = var_110[i]
                            int32_t eax_5 = sub_69c4d0(*(ebx_2 + 8), 0)
                            int32_t* eax_7 = *(*(esi + 8) + ((*(esi + 0xc) & eax_5) << 2))
                            
                            if (eax_7 == 0)
                            label_64faa0:
                                ebx = var_11c
                                edx_1 = var_118_1
                                result_1 = result
                            else
                                while (*(ebx_2 + 8) != *eax_7)
                                    eax_7 = eax_7[2]
                                    
                                    if (eax_7 == 0)
                                        goto label_64faa0
                                
                                ebx = var_11c
                                
                                if (eax_7 == 0xfffffffc)
                                    edx_1 = var_118_1
                                    result_1 = result
                                else
                                    int32_t* esi_2 = eax_7[1]
                                    var_110[ebx] = esi_2
                                    ebx += 1
                                    var_11c = ebx
                                    void* eax_8 = *esi_2
                                    
                                    if (eax_8 == 0)
                                        edx_1 = var_118_1
                                        result_1 = result
                                    else
                                        char eax_9
                                        
                                        if ((*(eax_8 + 0x10) & 1) != 0)
                                            eax_9 = sub_64f870(arg6, *(*var_118_1 + 8))
                                        
                                        if ((*(eax_8 + 0x10) & 1) != 0 && eax_9 == 0)
                                            edx_1 = var_118_1
                                            result_1 = result
                                        else
                                            int32_t ecx_7 = esi_2[1]
                                            edx_1 = var_118_1
                                            result_1 = result + 1
                                            *(edi_3 - 8) = *esi_2
                                            *(edi_3 - 4) = edx_1
                                            *edi_3 = ecx_7
                                            edi_3 += 0xc
                                            result = result_1
                            
                            i = i_1 + 1
                            i_1 = i
                        while (i s< var_120.d)
                        
                        edi = var_128
                    
                    goto label_64facd
                
                char const* const var_14c_1 = "StateTreeLookup"
                var_150 = 0x1273
                ecx_5 = "numResults < MAX_RESULTS"
        
        sub_63b870(eax_4, &data_801800, ecx_5, "C:\x\ax2017\Engine\UI2.cpp", var_150, 
            "StateTreeLookup")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

int32_t edi_5 = result_1 * 0xc
sub_6800c0(arg5, edi_5 + arg5, arg5, edi_5 s/ 0xc, 0.d)
CookieCheckFunction(result)
return result
