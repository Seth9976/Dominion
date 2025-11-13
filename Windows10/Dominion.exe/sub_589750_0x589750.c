// 函数: sub_589750
// 地址: 0x589750
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76751b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx
int32_t edx
ecx, edx = __chkstk(0x1950)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = edx
int32_t var_1934 = edi
int32_t* eax_3 = sub_589700(ecx, edx)
int32_t ebx
ebx.b = edi != 0xd30

if (*((ebx << 2) + 0x1a10 + ecx) s>= 0x40)
    goto label_5898c7

int32_t ecx_1 = ecx[0x350]

if (ecx_1 == 0 || (ecx[0x351].b & 0x80) != 0)
    goto label_5898c7

int32_t eax_4 = sub_5b06a0(ecx_1)
int32_t* eax_5 = sub_589700(ecx, edi)
void* ecx_3 = *((ebx << 2) + 0x1a10 + ecx)
int32_t* var_1924 = eax_5
int32_t eax_7

if (var_1934 != 0xd30)
    eax_7 = *(eax_4 + (ecx_3 << 2) + 0x1868)
else
    eax_7 = *(eax_4 + (ecx_3 << 2) + 0x1838)

int32_t var_28_1
char const* const var_24_1
int32_t* eax_8
char* ecx_5
uint32_t result_1
int32_t* var_50
uint32_t result

if (eax_7 == 0)
label_5898c1:
    edi = var_1934
label_5898c7:
    
    if (arg7 == 0)
    label_589940:
        int32_t var_1920[0x320]
        int32_t eax_15 = sub_590990(&var_1920, 0xffffffff, ecx, eax_3, &var_1920)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_8a5ef46f3d587981f4d95fd3e85ed4b3>,bool,enum CardID>::VTable
            * const var_1960 = &std::_Func_impl_no_alloc<class <lambda_8a5ef46f3d587981f4d95fd3e85ed4b3>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
        int32_t var_ca0_1 = eax_15
        int32_t* var_195c_1 = ecx
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_8a5ef46f3d587981f4d95fd3e85ed4b3>,bool,enum CardID>::VTable
            * const* var_193c_1 = &var_1960
        int32_t var_8_1 = 0
        int32_t** var_24_5 = &var_1924
        int32_t var_28_4 = 0
        int32_t (* eax_16)[0x320] = &var_1920
        var_1924 = &var_50
        int32_t var_2c_1 = 0
        var_8_1.b = 2
        
        if (var_193c_1 != 0)
            int32_t var_2c_2 = (*var_193c_1)->vFunc_0(&var_50)
            eax_16 = &var_1920
        
        var_8_1.b = 0
        int32_t var_8_2 = 0xffffffff
        int32_t var_4c
        int32_t* var_48
        int32_t ebx_6 = GSI1::OffForSym(eax_16, eax_15, &var_1920, var_50, var_4c, var_48)
        int32_t var_ca0_2 = ebx_6
        
        if (var_193c_1 != 0)
            (*var_193c_1)->vFunc_4(var_193c_1 != &var_1960)
        
        if (ebx_6 == 0)
            int32_t eax_22 = ecx[0x541]
            int32_t* ebx_7
            
            if (eax_22 == 3 || eax_22 == 5 || eax_22 == 4)
                ebx_7 = eax_3
            else
                ebx_7 = eax_3
                
                if (eax_22 != 6)
                    void* var_40
                    __builtin_memset(&var_40, 0, 0x20)
                    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_8a5ef46f3d587981f4d95fd3e85ed4b3>,bool,enum CardID>::VTable
                        * const* ecx_13
                    ecx_13.b = eax_22 == 2
                    void* var_3c
                    int128_t* var_38
                    int32_t var_34
                    int32_t var_30
                    int32_t var_2c_3
                    int32_t var_28_5
                    int32_t var_24_7
                    sub_61b1b0(eax_22, 0x1d, ecx_13.b, 0xffffffff, 0, ebx_7, var_40, var_3c, 
                        var_38, var_34, var_30, var_2c_3, var_28_5, var_24_7)
            
            int32_t eax_24 = ecx[0x541]
            
            if (eax_24 != 3 && eax_24 != 5 && eax_24 != 4 && eax_24 != 6 && ecx[0x540].b == 0)
                int32_t eax_25 = arg2
                
                if (arg2 == ecx[0x673])
                    eax_25 = ecx[0x674]
                
                sub_59f9b0(eax_25, arg2, ecx, eax_25, 4, 0, nullptr, 0, var_1934, 0, 0, 0)
            
            ebx_6 = sub_590990(&var_1920, 0xffffffff, ecx, ebx_7, &var_1920)
            int32_t (* edi_2)[0x320] = &var_1920
            int32_t* eax_28 = &var_1920[ebx_6]
            var_1924 = eax_28
            
            if (&var_1920 != eax_28)
                do
                    int32_t ecx_18 = *edi_2
                    uint32_t ebx_8 = zx.d(ecx_18.w)
                    
                    if (ebx_8 u>= 0x320)
                        sub_591930()
                        ecx_18 = *edi_2
                    
                    ecx[ebx_8 * 0x19 + 0x69b] &= 0xfffffffe
                    int32_t eax_30 = ecx[0x541]
                    
                    if (eax_30 != 3 && eax_30 != 5 && eax_30 != 4 && eax_30 != 6)
                        int32_t* var_44_3
                        __builtin_memset(&var_44_3, 0, 0x24)
                        int32_t var_48_2 = ecx_18
                        ecx_18.b = eax_30 == 2
                        void* var_40_2
                        void* var_3c_2
                        int128_t* var_38_2
                        int32_t var_34_2
                        int32_t var_30_2
                        int32_t var_2c_5
                        int32_t var_28_9
                        int32_t var_24_12
                        sub_61b1b0(eax_30, 0x21, ecx_18.b, 0xffffffff, var_48_2, var_44_3, 
                            var_40_2, var_3c_2, var_38_2, var_34_2, var_30_2, var_2c_5, var_28_9, 
                            var_24_12)
                    
                    edi_2 = &(*edi_2)[1]
                while (edi_2 != var_1924)
            
            if (ebx_6 == 0)
                result = 0
            label_589d9b:
                fsbase->NtTib.ExceptionList = ExceptionList
                CookieCheckFunction(result)
                return result
        
        int32_t eax_31 = ecx[0x541]
        int32_t* ecx_19
        
        if (eax_31 == 3 || eax_31 == 5)
            ecx_19 = &data_1777938
        
        if ((eax_31 != 3 && eax_31 != 5) || ecx[0x547].b == 0)
            ecx_19 = ecx
        
        result_1 = var_1920[sub_63ed10(ecx_19, ebx_6)]
        goto label_589bf8
    
    eax_8 = sub_589700(ecx, edi)
    var_1924 = eax_8
    
    if (eax_8 u<= 0x48)
        if (eax_8 s>= 0x48)
            sub_591930()
        
        uint32_t result_3 = ecx[eax_8 * 4 + 0x54b]
        
        if (result_3 == 0)
            goto label_589940
        
        int32_t ecx_9 = arg7
        
        while (true)
            uint32_t ebx_4 = zx.d(result_3.w)
            
            if (ebx_4 u>= 0x320)
                sub_591930()
                ecx_9 = arg7
            
            if (ecx[ebx_4 * 0x19 + 0x693] == ecx_9)
                sub_572660(sub_5723a0(ebx_4 * 0x64, result_3, ecx, nullptr), result_3, ecx, 
                    var_1924, 0xffffffff)
                result_1 = result_3
                break
            
            result_3 = ecx[ebx_4 * 0x19 + 0x6a9]
            
            if (result_3 == 0)
                goto label_589940
        
        goto label_589bf8
    
    var_24_1 = "GetPileHead"
    
    if (eax_8 s>= 0x3e8)
        var_28_1 = 0x33e
        ecx_5 = "who != PLAYER_NONE"
    else
        var_28_1 = 0x33d
        ecx_5 = "where >= START_PLAYER_PILES"
else
    eax_8 = ecx_3 + 1
    *((ebx << 2) + 0x1a10 + ecx) = eax_8
    
    if (eax_5 u> 0x48)
        var_24_1 = "GetPileHead"
        
        if (eax_5 s>= 0x3e8)
            var_28_1 = 0x33e
            ecx_5 = "who != PLAYER_NONE"
        else
            var_28_1 = 0x33d
            ecx_5 = "where >= START_PLAYER_PILES"
    else
        if (eax_5 s>= 0x48)
            sub_591930()
        
        eax_8 = eax_5 * 2
        uint32_t result_2 = ecx[eax_8 * 2 + 0x54b]
        
        if (result_2 != 0)
            int32_t ecx_4 = eax_7
            
            while (true)
                uint32_t ebx_2 = zx.d(result_2.w)
                
                if (ebx_2 u>= 0x320)
                    sub_591930()
                    ecx_4 = eax_7
                
                eax_8 = ebx_2 * 0x64
                
                if (*(eax_8 + ecx + 0x1a4c) == ecx_4)
                    break
                
                result_2 = *(eax_8 + ecx + 0x1aa4)
                
                if (result_2 == 0)
                    goto label_58987d
            
            sub_572660(sub_5723a0(eax_8, result_2, ecx, nullptr), result_2, ecx, var_1924, 
                0xffffffff)
            result_1 = result_2
            
            if (result_2 == 0)
                goto label_5898c1
            
        label_589bf8:
            int32_t eax_34
            int32_t eax_35
            
            if (arg3 != 3)
                if (arg8 != 0)
                    int32_t eax_36 = ecx[0x541]
                    
                    if (eax_36 != 3 && eax_36 != 5 && eax_36 != 4 && eax_36 != 6
                            && ecx[0x540].b == 0)
                        int32_t eax_37 = arg2
                        
                        if (arg2 == ecx[0x673])
                            eax_37 = ecx[0x674]
                        
                        sub_59f9b0(eax_37, arg2, ecx, eax_37, 0x2e, 0, &result_1, 1, 0, 0, 0, 0)
                
                eax_34 = ecx[0x541]
                
                if (eax_34 != 3 && eax_34 != 5 && eax_34 != 4 && eax_34 != 6 && ecx[0x540].b == 0)
                    eax_35 = arg2
                    
                    if (arg2 == ecx[0x673])
                        eax_35 = ecx[0x674]
                    
                    eax_34 =
                        sub_59f9b0(eax_35, arg2, ecx, eax_35, 0x54, 0, &result_1, 1, 0, 0, 0, 0)
            else
                eax_34 = ecx[0x541]
                
                if (eax_34 != 3 && eax_34 != 5 && eax_34 != 4 && eax_34 != 6 && ecx[0x540].b == 0)
                    eax_35 = arg2
                    
                    if (arg2 == ecx[0x673])
                        eax_35 = ecx[0x674]
                    
                    eax_34 =
                        sub_59f9b0(eax_35, arg2, ecx, eax_35, 0x3a, 0, &result_1, 1, 0, 0, 0, 0)
            uint32_t result_4 = result_1
            
            if (sub_582de0(eax_34, result_4, ecx, eax_3) == 0)
                int32_t var_c98
                int32_t eax_40 = sub_590990(&var_c98, 0xffffffff, ecx, 5, &var_c98)
                
                if (eax_40 != 0)
                    if (eax_40 != 1)
                        sub_591930()
                    
                    eax_40 = var_c98
                
                if (result_4 == eax_40)
                    sub_591930()
                
                int32_t* eax_41 = nullptr
                int32_t var_2c_8 = 0
                char* var_30_5 = nullptr
                int32_t var_34_5 = 0
                int32_t var_38_5 = 0
                
                if (arg3 == 3)
                    eax_41 = 0x18
                
                void* var_48_3 = nullptr
                var_50 = eax_41
                sub_5822e0(eax_41, arg2, ecx, result_4, var_50, arg3, var_48_3, arg4, arg5, arg6, 
                    var_38_5, var_34_5, var_30_5, var_2c_8, arg9, arg10)
            
            result = result_1
            goto label_589d9b
        
    label_58987d:
        var_24_1 = "TryDoCampaignFateDraw"
        var_28_1 = 0x363b
        ecx_5 = "Halt"
sub_63b870(eax_8, &data_801800, ecx_5, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_28_1, 
    var_24_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
