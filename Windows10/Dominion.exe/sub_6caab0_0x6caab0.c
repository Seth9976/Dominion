// 函数: sub_6caab0
// 地址: 0x6caab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
void* result = __security_cookie ^ &__saved_ebp
void* result_1 = result
int32_t var_1b4
char const* const ecx_8

if (arg1 u> 0x27)
    char const* const var_1b0_4 = "ProfilerCalcGroupBy"
    var_1b4 = 0x1c2
    ecx_8 = "frameIndex >= 0 && frameIndex < PROFILER_MAX_FRAMES"
else
    void* esi_1 = data_147d19c
    int32_t edx_1 = 0
    int32_t ebx_1 = 0
    void* ecx_1 = arg1 * 0x4a490 + esi_1
    void* var_1a0 = ecx_1
    
    if (*(ecx_1 + 0x3a980) s<= 0)
    label_6cabbf:
        CookieCheckFunction(result)
        return result
    
    void* edi_1 = ecx_1 + 8
    
    while (true)
        result = *(edi_1 + 4)
        
        if (result == 1)
            if (edx_1 s> 0)
                result = *(esi_1 + 0xbbaab0)
                void* ecx_2 = (&var_1a0)[edx_1]
                
                if (result == 1)
                    result = *(ecx_2 + 8)
                    
                    if (result == *(esi_1 + 0xbbaab4))
                        int32_t ecx_3 = *edi_1
                        
                        if (ecx_3 s< 0 || ecx_3 s>= *(esi_1 + 0xbbaa84))
                            char const* const var_1b0 = "ProfilerCalcGroupBy"
                            var_1b4 = 0x1d7
                            ecx_8 = "profileEvent->mFuncPointIndex >= 0 && "
                            "profileEvent->mFuncPointIndex < gProfilerGlobals->mFuncPointCount"
                            break
                        
                        result = ecx_3 * 7
                        *(esi_1 + (result << 2) + &data_b9b69c) = 1
                else if (result == 2)
                    result = *edi_1
                    
                    if (result == *(esi_1 + 0xbbaab4))
                        if (result s< 0 || result s>= *(esi_1 + 0xbbaa84))
                            char const* const var_1b0_1 = "ProfilerCalcGroupBy"
                            var_1b4 = 0x1e0
                            ecx_8 = "profileEvent->mFuncPointIndex >= 0 && "
                            "profileEvent->mFuncPointIndex < gProfilerGlobals->mFuncPointCount"
                            break
                        
                        result = *(ecx_2 + 8)
                        *(esi_1 + result * 0x1c + &data_b9b69c) = 1
                
                ecx_1 = var_1a0
            
            if (edx_1 s>= 0x64)
                char const* const var_1b0_2 = "ProfilerCalcGroupBy"
                var_1b4 = 0x1e7
                ecx_8 = "stackSize < PROFILER_MAX_STACK_SIZE"
                break
            
            result = edi_1 - 8
            int32_t var_19c[0x65]
            var_19c[edx_1] = result
            edx_1 += 1
        else if (result == 2)
            if (edx_1 s<= 0)
                char const* const var_1b0_3 = "ProfilerCalcGroupBy"
                var_1b4 = 0x1ed
                ecx_8 = "stackSize > 0"
                break
            
            edx_1 -= 1
        
        ebx_1 += 1
        edi_1 += 0x18
        
        if (ebx_1 s>= *(ecx_1 + 0x3a980))
            goto label_6cabbf

sub_63b870(result, &data_801800, ecx_8, "C:\x\ax2017\Engine\PerfEvent.cpp", var_1b4, 
    "ProfilerCalcGroupBy")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
