// 函数: sub_570530
// 地址: 0x570530
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
void* result = sub_5887c0(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 0)
void* result_1 = result

if (result != 0)
    uint32_t esi_1 = zx.d(result.w)
    void* edi = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_4 = esi_1 * 0x64
    void* result_9
    
    if (sub_5754f0(eax_4, *(eax_4 + edi + 0x1a4c), edi, arg2, arg3) == 0)
        void* result_4 = result_1
        result_9 = result_4
        
        if (result_4 != 0)
            void* eax_15 = sub_573400()
            *(eax_15 + 0xc)
            *(eax_15 + 4)
            sub_582eb0(&result_9, 1, 0x3eb, 0x14, 7, 0, 0, 0, nullptr, nullptr)
            result_4 = result_1
        
        uint32_t esi_4 = zx.d(result_4.w)
        void* edi_1 = *(sub_573400() + 4)
        
        if (esi_4 u>= 0x320)
            sub_591930()
        
        int32_t eax_17 = esi_4 * 0x64
        result = sub_5754f0(eax_17, *(eax_17 + edi_1 + 0x1a4c), edi_1, arg2, arg3)
        
        if (result.b != 0)
            void* result_5 = result_1
            void* eax_18 = sub_573400()
            result = sub_582de0(eax_18, result_5, *(eax_18 + 4), 0x3ec)
            
            if (result.b == 0)
                sub_56e9c0(1)
                void* result_7 = result_1
                void* var_ca0_2 = nullptr
                void* var_c9c_2 = nullptr
                void* eax_19 = sub_573400()
                uint32_t ebx_3 = zx.d(result_7.w)
                void* result_11 = *(eax_19 + 4)
                result_9 = result_11
                
                if (ebx_3 u>= 0x320)
                    sub_591930()
                    result_11 = result_9
                
                sub_582d10(result_11, *(ebx_3 * 0x64 + result_11 + 0x1a70), *(eax_19 + 4), 
                    result_7, 0x3ec, 0xb, 0x3ee, nullptr, *(eax_19 + 0x28), *(eax_19 + 0x2c), 
                    *(eax_19 + 0x30), 0, 0, nullptr, 0, var_ca0_2, var_c9c_2)
                goto label_570823
    else
        sub_56e9c0(1)
        void* result_6 = result_1
        result_9 = nullptr
        void* var_c9c_1 = nullptr
        void* eax_6 = sub_573400()
        uint32_t ebx_2 = zx.d(result_6.w)
        int32_t eax_7 = *(eax_6 + 4)
        
        if (ebx_2 u>= 0x320)
            sub_591930()
        
        sub_582d10(eax_7, *(ebx_2 * 0x64 + eax_7 + 0x1a70), *(eax_6 + 4), result_6, 0x3eb, 0xb, 
            0x3ee, nullptr, *(eax_6 + 0x28), *(eax_6 + 0x2c), *(eax_6 + 0x30), 0, 0, nullptr, 0, 
            result_9, var_c9c_1)
        int32_t esi_3 = *(sub_573400() + 0xc)
        int32_t* ecx_3 = *(sub_573400() + 4)
        int32_t eax_10 = ecx_3[0x541]
        
        if (eax_10 != 3 && eax_10 != 5 && eax_10 != 4 && eax_10 != 6 && ecx_3[0x540].b == 0)
            int32_t eax_11 = esi_3
            
            if (esi_3 == ecx_3[0x673])
                eax_11 = ecx_3[0x674]
            
            sub_59f9b0(eax_11, esi_3, ecx_3, eax_11, 0x33, 0, &result_1, 1, 0, 0, 0, 0)
        
        void* result_2 = result_1
        int32_t var_18_1 = 0
        void* eax_13 = *(sub_573400() + 4)
        int32_t ecx_4
        ecx_4.b = *(eax_13 + 0x19ec) == 5
        void* result_10
        
        if (result_2 != 0)
            result_10 = result_2
            int32_t var_18_2 = 1
        
        sub_56f1a0(eax_13, &result_10, 6, ecx_4)
        void* result_3 = result_1
        void* eax_14 = sub_573400()
        result = sub_582de0(eax_14, result_3, *(eax_14 + 4), 0x3ee)
        
        if (result.b == 0)
        label_570823:
            result = sub_567f20(arg1)
            
            if (result.b == 0)
                void* result_8 = result_1
                void* var_ca0_3 = nullptr
                void* var_c9c_3 = nullptr
                void* eax_20 = sub_573400()
                uint32_t ebx_4 = zx.d(result_8.w)
                void* result_12 = *(eax_20 + 4)
                result_9 = result_12
                
                if (ebx_4 u>= 0x320)
                    sub_591930()
                    result_12 = result_9
                
                result = sub_582d10(result_12, *(ebx_4 * 0x64 + result_12 + 0x1a70), *(eax_20 + 4), 
                    result_8, 0x3ee, 0xb, 0x3ec, nullptr, *(eax_20 + 0x28), *(eax_20 + 0x2c), 
                    *(eax_20 + 0x30), 0, 0, nullptr, 0, var_ca0_3, var_c9c_3)

CookieCheckFunction(result)
return result
