// 函数: sub_550930
// 地址: 0x550930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76699b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x19a0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = arg2
result[0x320] = 0
void* eax_3 = sub_573400()
int32_t* ecx = 7
int32_t* var_1924 = 7
int32_t* esi = *(eax_3 + 4)
int32_t* eax_4 = &esi[0x565]

while (true)
    if (*eax_4 != 0x1301)
        if (eax_4[1] == 0x1301)
            break
        
        ecx += 1
        eax_4 = &eax_4[4]
        var_1924 = ecx
        
        if (ecx s< 0x48)
            continue
        else
            ecx = nullptr
    
    var_1924 = ecx
    break

int32_t var_1920[0x320]
int32_t eax_6 = sub_590990(&var_1920, 0xffffffff, esi, ecx, &var_1920)
int32_t var_ca0 = eax_6

if (eax_6 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_36b9ce5a9e60cb269e3387342efe3d6f>,bool,enum CardID>::VTable
        * const var_1968 = &std::_Func_impl_no_alloc<class <lambda_36b9ce5a9e60cb269e3387342efe3d6f>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    int32_t* var_1964_1 = esi
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_36b9ce5a9e60cb269e3387342efe3d6f>,bool,enum CardID>::VTable
        * const* var_1944_1 = &var_1968
    int32_t var_8_1 = 0
    uint32_t var_1928
    uint32_t* var_24_1 = &var_1928
    int32_t var_28_1 = 0
    int32_t (* eax_7)[0x320] = &var_1920
    int32_t* var_50
    var_1928 = &var_50
    int32_t var_2c_1 = 0
    var_8_1.b = 2
    
    if (var_1944_1 != 0)
        int32_t var_2c_2 = (*var_1944_1)->vFunc_0(&var_50)
        eax_7 = &var_1920
    
    var_8_1.b = 0
    int32_t var_8_2 = 0xffffffff
    int32_t var_4c
    int32_t* var_48
    int32_t ebx_1 = GSI1::OffForSym(eax_7, eax_6, &var_1920, var_50, var_4c, var_48)
    int32_t var_ca0_1 = ebx_1
    
    if (var_1944_1 != 0)
        (*var_1944_1)->vFunc_4(var_1944_1 != &var_1968)
    
    int32_t i_1 = 0
    int32_t* edx_5
    int32_t i
    
    do
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_36b9ce5a9e60cb269e3387342efe3d6f>,bool,enum CardID>::VTable
            * const* ecx_4
        
        if (ebx_1 == 0)
            int32_t eax_13 = esi[0x541]
            int32_t* ebx_2
            
            if (eax_13 == 3 || eax_13 == 5 || eax_13 == 4)
                ebx_2 = var_1924
            else
                ebx_2 = var_1924
                
                if (eax_13 != 6)
                    void* var_40_1
                    __builtin_memset(&var_40_1, 0, 0x20)
                    ecx_4.b = eax_13 == 2
                    void* var_3c_1
                    int128_t* var_38_1
                    int32_t var_34_1
                    int32_t var_30_1
                    int32_t var_2c_3
                    int32_t var_28_2
                    int32_t var_24_3
                    sub_61b1b0(eax_13, 0x1d, ecx_4.b, 0xffffffff, 0, ebx_2, var_40_1, var_3c_1, 
                        var_38_1, var_34_1, var_30_1, var_2c_3, var_28_2, var_24_3)
            
            int32_t edx_3 = *(eax_3 + 0xc)
            int32_t eax_15 = esi[0x541]
            
            if (eax_15 != 3 && eax_15 != 5 && eax_15 != 4 && eax_15 != 6 && esi[0x540].b == 0)
                int32_t eax_16 = edx_3
                
                if (edx_3 == esi[0x673])
                    eax_16 = esi[0x674]
                
                sub_59f9b0(eax_16, edx_3, esi, eax_16, 4, 0, nullptr, 0, 0x1301, 0, 0, 0)
            
            ebx_1 = sub_590990(&var_1920, 0xffffffff, esi, ebx_2, &var_1920)
            int32_t (* edi)[0x320] = &var_1920
            void* eax_19 = &var_1920[ebx_1]
            void* var_192c_1 = eax_19
            
            if (&var_1920 != eax_19)
                do
                    int32_t ecx_7 = *edi
                    uint32_t eax_20 = zx.d(ecx_7.w)
                    
                    if (eax_20 u>= 0x320)
                        sub_591930()
                        ecx_7 = *edi
                    
                    esi[eax_20 * 0x19 + 0x69b] &= 0xfffffffe
                    int32_t eax_22 = esi[0x541]
                    
                    if (eax_22 != 3 && eax_22 != 5 && eax_22 != 4 && eax_22 != 6)
                        int32_t* var_44_3
                        __builtin_memset(&var_44_3, 0, 0x24)
                        int32_t var_48_2 = ecx_7
                        ecx_7.b = eax_22 == 2
                        void* var_40_3
                        void* var_3c_3
                        int128_t* var_38_3
                        int32_t var_34_3
                        int32_t var_30_3
                        int32_t var_2c_5
                        int32_t var_28_5
                        int32_t var_24_6
                        sub_61b1b0(eax_22, 0x21, ecx_7.b, 0xffffffff, var_48_2, var_44_3, var_40_3, 
                            var_3c_3, var_38_3, var_34_3, var_30_3, var_2c_5, var_28_5, var_24_6)
                    
                    edi = &(*edi)[1]
                while (edi != eax_19)
            
            if (ebx_1 == 0)
                edx_5 = arg2
                break
        
        int32_t eax_23 = esi[0x541]
        int32_t* ecx_8
        
        if (eax_23 == 3 || eax_23 == 5)
            ecx_8 = &data_1777938
        
        if ((eax_23 != 3 && eax_23 != 5) || esi[0x547].b == 0)
            ecx_8 = esi
        
        uint32_t eax_24
        eax_24, ecx_4 = sub_63ed10(ecx_8, ebx_1)
        edx_5 = arg2
        int32_t edi_1 = var_1920[eax_24]
        
        if (edx_5[0x320] s>= 0x320)
            sub_591930()
            edx_5 = arg2
        
        edx_5[edx_5[0x320]] = edi_1
        int32_t eax_26 = 0
        edx_5[0x320] += 1
        
        if (ebx_1 s> 0)
            do
                if (var_1920[eax_26] == edi_1)
                    var_1920[eax_26] = var_1920[ebx_1 - 1]
                    ebx_1 -= 1
                    break
                
                eax_26 += 1
            while (eax_26 s< ebx_1)
        
        i = i_1 + 1
        i_1 = i
    while (i s< 3)
    int32_t eax_37 = edx_5[0x320]
    int32_t edi_2 = 0
    
    if (eax_37 s> 0)
        do
            int32_t ebx_5 = edx_5[edi_2]
            void* var_1930_1 = 0xffffffff
            void* var_192c_3 = nullptr
            int32_t eax_29 = *(eax_3 + 0x30)
            int32_t eax_30 = *(eax_3 + 0x28)
            int32_t eax_31 = *(eax_3 + 0x2c)
            uint32_t eax_32 = *(eax_3 + 0xc)
            var_1928 = eax_32
            
            if (sub_582de0(eax_32, ebx_5, esi, var_1924) == 0)
                uint32_t var_c98
                uint32_t eax_35 = sub_590990(&var_c98, 0xffffffff, esi, 5, &var_c98)
                
                if (eax_35 != 0)
                    if (eax_35 != 1)
                        sub_591930()
                    
                    eax_35 = var_c98
                
                if (ebx_5 == eax_35)
                    eax_35 = sub_591930()
                
                uint32_t edx_7 = var_1928
                int32_t var_2c_6 = 0
                char* var_30_4 = nullptr
                int32_t var_34_4 = 0
                int32_t var_38_4 = 0
                void* var_48_3 = nullptr
                int32_t* var_4c_3 = 0x3ee
                var_50 = nullptr
                sub_5822e0(eax_35, edx_7, esi, ebx_5, var_50, var_4c_3, var_48_3, eax_30, eax_31, 
                    eax_29, var_38_4, var_34_4, var_30_4, var_2c_6, var_1930_1, var_192c_3)
            
            edx_5 = arg2
            uint32_t ebx_6 = zx.d(edx_5[edi_2].w)
            
            if (ebx_6 u>= 0x320)
                sub_591930()
                edx_5 = arg2
            
            edi_2 += 1
            esi[ebx_6 * 0x19 + 0x69e] = 0xffffffff
            eax_37 = edx_5[0x320]
        while (edi_2 s< eax_37)
    
    int32_t ecx_13 = esi[0x541]
    int32_t edx_8 = *(eax_3 + 0xc)
    
    if (ecx_13 == 3 || ecx_13 == 5 || ecx_13 == 4 || ecx_13 == 6 || esi[0x540].b != 0)
        result = arg2
    else
        int32_t ecx_14 = edx_8
        
        if (edx_8 == esi[0x673])
            ecx_14 = esi[0x674]
        
        result = arg2
        sub_59f9b0(eax_37, edx_8, esi, ecx_14, 0x2d, 0, result, eax_37, 1, 0, 0, 0)
    
    uint32_t count = 0x48
    var_1928 = 0xb
    void var_19b0
    memset(&var_19b0, 0, count)
    *(eax_3 + 0xc)
    sub_580700(esi, &var_1928, 1, &var_19b0, 0, result, result[0x320], nullptr)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
