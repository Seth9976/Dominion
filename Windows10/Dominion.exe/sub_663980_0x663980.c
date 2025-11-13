// 函数: sub_663980
// 地址: 0x663980
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76d249
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x1420) != 0)
    float xmm0_1 = *(arg1 + 0x1680)
    xmm0_1 - 0f
    result:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        float xmm0_2 = *(data_147abe8 + 0x2c)
        int32_t* var_44
        uint32_t* eax_4 = sub_67d3c0(arg1 + 0x674, xmm0_2, &var_44)
        int128_t xmm0_3 = *(arg1 + 0x1674)
        uint32_t* edx_1 = eax_4
        int128_t var_38 = xmm0_3
        
        if (not(xmm0_3 f<= 0.999000013f))
            eax_4.b = 0xff
        else if (0.00100000005f f<= xmm0_3)
            eax_4 = int.d(xmm0_3 f* 255f + 0.5f)
        else
            eax_4.b = 0
        
        float xmm0_6 = var_38:4.d
        char var_3c_1 = eax_4.b
        
        if (not(xmm0_6 <= 0.999000013f))
            eax_4.b = 0xff
        else if (0.00100000005f <= xmm0_6)
            eax_4 = int.d(xmm0_6 * 255f + 0.5f)
        else
            eax_4.b = 0
        
        float xmm0_9 = var_38:8.d
        char var_3b_1 = eax_4.b
        
        if (not(xmm0_9 <= 0.999000013f))
            eax_4.b = 0xff
        else if (0.00100000005f <= xmm0_9)
            eax_4 = int.d(xmm0_9 * 255f + 0.5f)
        else
            eax_4.b = 0
        
        float xmm0_12 = var_38:0xc.d
        char var_3a_1 = eax_4.b
        
        if (not(xmm0_12 <= 0.999000013f))
            eax_4.b = 0xff
        else if (0.00100000005f <= xmm0_12)
            eax_4 = int.d(xmm0_12 * 255f + 0.5f)
        else
            eax_4.b = 0
        
        char var_39_1 = eax_4.b
        int32_t edx_2
        edx_2:result = mulu.dp.d(0x80808081, (var_3c_1.d u>> 0x18) * zx.d(*(edx_1 + 3)) + 0x80)
        
        if ((edx_2 u>> 7).b != 0)
            uint32_t* eax_6 = sub_67d3c0(arg1 + 0x944, xmm0_2, &var_44)
            int32_t* edi_1 = *(arg1 + 0x14b0)
            
            if (edi_1 == 0)
            label_663b54:
                
                if (*(data_147b06c + 0x2dc) == 0 && edi_1 == 0
                        && data_1a99258 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                    sub_75970e(&data_1a99258)
                    
                    if (data_1a99258 == 0xffffffff)
                        int32_t var_14_3 = 3
                        data_1a9925c = sub_69f030("sys/sprite_3d.material", edi_1 + 5)
                        int32_t var_14_4 = 0xffffffff
                        __Init_thread_footer(&data_1a99258)
            else if (edi_1[1] == 0x1d)
                bool cond:4_1 = *edi_1 != 0
                var_44 = edi_1
                
                if (not(cond:4_1))
                    sub_69f4a0(eax_6, 0, edi_1, 1)
                
                edi_1[7] += 1
                void* esi_1 = &edi_1[7]
                int32_t var_14_1 = 2
                edi_1 = sub_6edec0(**edi_1)
                int32_t var_14_2 = 0xffffffff
                *esi_1 -= 1
                
                if (edi_1 == 0)
                    goto label_663b54
            
            int32_t esi_2 = *(arg1 + 0x1434)
            int32_t ecx_9 = *(arg1 + 0x1430)
            result = esi_2 * ecx_9
            
            if (result s> 1)
                result = sub_6636d0(&var_38, arg1, *(arg1 + 0x143c), xmm0_2, *(arg1 + 0x1438), 
                    &var_38, ecx_9, esi_2)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
