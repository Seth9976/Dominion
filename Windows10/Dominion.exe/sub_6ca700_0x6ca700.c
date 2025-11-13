// 函数: sub_6ca700
// 地址: 0x6ca700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770a50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4fc
char const* const ecx_10

if (arg1 u> 0x27)
    char const* const var_4f8_8 = "ProfilerCalcFuncData"
    var_4fc = 0x170
    ecx_10 = "frameIndex >= 0 && frameIndex < PROFILER_MAX_FRAMES"
else
    void* edx_1 = data_147d19c
    void* ebx_2 = arg1 * 0x4a490 + edx_1
    
    if (*(ebx_2 + 0x4a48c) != 0)
        goto label_6caa5a
    
    int32_t i = 0
    
    if (*(edx_1 + 0xbbaa84) s> 0)
        void* eax_3 = ebx_2 + 0x3aa94
        
        do
            *(eax_3 - 4) = 0
            eax_3 += 0x10
            *(eax_3 - 0x10) = 0
            i += 1
            *(eax_3 - 0x18) = 0
            *(eax_3 - 0xc) = 0
        while (i s< *(edx_1 + 0xbbaa84))
    
    result = *(ebx_2 + 0x3a980)
    int32_t ecx = 0
    int32_t esi_1 = 0
    int32_t var_4c8 = 0
    
    if (result s> 0)
        void* edi_1 = ebx_2 + 8
        
        do
            result = *(edi_1 + 4)
            int32_t var_334[0x63]
            int32_t var_1a4[0x64]
            
            if (result == 1)
                if (esi_1 s>= 0x64)
                    char const* const var_4f8_3 = "ProfilerCalcFuncData"
                    var_4fc = 0x18d
                    ecx_10 = "stackSize < PROFILER_MAX_STACK_SIZE"
                    goto label_6caa8c
                
                var_1a4[esi_1] = 0
                int32_t var_4c4[0x63]
                var_4c4[esi_1] = edi_1 - 8
                var_334[esi_1] = 0
                esi_1 += 1
            else if (result != 2)
                if (result != 3)
                    char const* const var_4f8_7 = "ProfilerCalcFuncData"
                    var_4fc = 0x1b4
                    ecx_10 = "Halt"
                    goto label_6caa8c
                
                void var_338
                
                if (esi_1 s> 0)
                    *(&var_338 + (esi_1 << 2)) = *(edi_1 + 8) f+ *(&var_338 + (esi_1 << 2))
            else
                if (esi_1 s<= 0)
                    char const* const var_4f8_6 = "ProfilerCalcFuncData"
                    var_4fc = 0x195
                    ecx_10 = "stackSize > 0"
                    goto label_6caa8c
                
                int32_t* eax_5 = (&var_4c8)[esi_1]
                esi_1 -= 1
                int32_t edx_2 = eax_5[2]
                int32_t var_4cc
                
                if (edx_2 != *edi_1)
                    int32_t eax_10 = data_147d19c
                    int32_t ecx_12 = edx_2 * 7
                    int32_t var_4f8_5 = *(eax_10 + (ecx_12 << 2) + 0xb9b688)
                    int32_t var_4fc_1 = *(eax_10 + (ecx_12 << 2) + 0xb9b684)
                    int32_t var_8_1 = 0
                    char* eax_12 =
                        sub_63d7e0(sub_63df30(&var_4cc, "Mismatched profiler event '%s%s'"))
                    sub_63b870(eax_12, eax_12, 
                        "eventStart->mFuncPointIndex == profileEvent->mFuncPointIndex", 
                        "C:\x\ax2017\Engine\PerfEvent.cpp", 0x19a, "ProfilerCalcFuncData")
                    int32_t var_8_2 = 0xffffffff
                    sub_63d770(&var_4cc)
                    goto label_6caa94
                
                int32_t ecx_1 = *(edi_1 - 8)
                int32_t ecx_2 = *(edi_1 - 4)
                int32_t ecx_3 = *eax_5
                var_4cc = eax_5[1]
                void invalid
                
                if (data_1a98f58 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                    sub_75970e(&data_1a98f58)
                    
                    if (data_1a98f58 == 0xffffffff)
                        int32_t frequency
                        QueryPerformanceFrequency(&frequency)
                        uint32_t var_4e0
                        data_1a98f5c = 1f / __ultof3(frequency, var_4e0, invalid, eax_2)
                        __Init_thread_footer(&data_1a98f58)
                
                float xmm0_2
                result, xmm0_2 =
                    __ultof3(ecx_1 - ecx_3, sbb.d(ecx_2, var_4cc, ecx_1 u< ecx_3), invalid, eax_2)
                int32_t ecx_8 = *edi_1
                float xmm1_4 = xmm0_2 * 1000f f* data_1a98f5c
                
                if (ecx_8 u> 0xf9f)
                    char const* const var_4f8_4 = "ProfilerCalcFuncData"
                    var_4fc = 0x19e
                    ecx_10 = "profileEvent->mFuncPointIndex >= 0 && profileEvent->mFuncPointIndex < 
                        PROFILER_MAX_FUNC_POINTS"
                    goto label_6caa8c
                
                int32_t ecx_9 = ecx_8 * 2
                int32_t eax_9 = var_334[esi_1]
                float xmm0_4 = xmm1_4 f+ *(ebx_2 + (ecx_9 << 3) + 0x3aa8c)
                *(ebx_2 + (ecx_9 << 3) + 0x3aa94) += 1
                *(ebx_2 + (ecx_9 << 3) + 0x3aa98) = eax_9
                *(ebx_2 + (ecx_9 << 3) + 0x3aa8c) = xmm0_4
                *(ebx_2 + (ecx_9 << 3) + 0x3aa90) =
                    xmm1_4 f- var_1a4[esi_1] f+ *(ebx_2 + (ecx_9 << 3) + 0x3aa90)
                ecx = var_4c8
                void var_1a8
                
                if (esi_1 s> 0)
                    *(&var_1a8 + (esi_1 << 2)) = xmm1_4 f+ *(&var_1a8 + (esi_1 << 2))
            result = *(ebx_2 + 0x3a980)
            ecx += 1
            edi_1 += 0x18
            var_4c8 = ecx
        while (ecx s< result)
    
    if (result == 0x2710 || esi_1 == 0)
        *(ebx_2 + 0x4a48c) = 1
    label_6caa5a:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    char const* const var_4f8_2 = "ProfilerCalcFuncData"
    var_4fc = 0x1ba
    ecx_10 = "stackSize == 0"

label_6caa8c:
sub_63b870(result, &data_801800, ecx_10, "C:\x\ax2017\Engine\PerfEvent.cpp", var_4fc, 
    "ProfilerCalcFuncData")
label_6caa94:

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
