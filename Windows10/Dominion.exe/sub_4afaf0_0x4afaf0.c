// 函数: sub_4afaf0
// 地址: 0x4afaf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t var_c = eax_1

if (*arg4 != 0)
    void var_340
    sub_694540(eax_1, arg3, &var_340, &data_7ffb70, 9)
    char var_33c
    
    if (var_33c == 0)
    label_4afb3a:
        int32_t* eax_2 = sub_4af740(arg3, arg4)
        CookieCheckFunction(eax_2)
        return eax_2
    
    if (*arg4 == 1)
        int32_t* eax_8
        
        if ((arg4[1].b & 6) != 0)
            int32_t eax_4 = (*arg4[0xe])()
            
            if (eax_4 != (*arg4[2])())
                goto label_4afbbe
            
            if (eax_4(&arg4[0xe], &arg4[2]) != 0)
                eax_8 = data_cc8d5c
                
                if (eax_8 == 0)
                label_4afec1:
                    sub_63b870(eax_8, &data_801800, "gClient", 
                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t ecx_7 = *eax_8
                bool c_1 = ecx_7 u< arg4[0x1a]
                int32_t eax_9 = eax_8[1]
                int32_t temp7_1 = arg4[0x1b]
                bool s_1 = sbb.d(eax_9, temp7_1, c_1) s< 0
                bool o_1 = unimplemented  {sbb eax, dword [esi+0x6c]}
                int32_t var_34c_1 = sbb.d(eax_9, temp7_1, c_1)
                
                if (not(s_1) && ((sbb.d(eax_9, temp7_1, c_1) != 0 && s_1 == o_1)
                        || ecx_7 - arg4[0x1a] u> 0x1f4))
                    goto label_4afb3a
        
    label_4afbbe:
        
        if (*arg4 == 1)
            int32_t eax_12 = (*arg4[0xe])()
            int32_t eax_13 = (*arg4[2])()
            char eax_15
            
            if (eax_12 == eax_13)
                eax_15 = eax_12(&arg4[0xe], &arg4[2])
            
            if (eax_12 != eax_13 || eax_15 == 0)
                eax_8 = data_cc8d5c
                
                if (eax_8 == 0)
                    goto label_4afec1
                
                int32_t ecx_12 = *eax_8
                bool c_2 = ecx_12 u< arg4[0x1a]
                int32_t eax_16 = eax_8[1]
                int32_t temp3_1 = arg4[0x1b]
                bool s_2 = sbb.d(eax_16, temp3_1, c_2) s< 0
                bool o_2 = unimplemented  {sbb eax, dword [esi+0x6c]}
                uint32_t var_34c_2 = sbb.d(eax_16, temp3_1, c_2)
                
                if (not(s_2) && ((sbb.d(eax_16, temp3_1, c_2) != 0 && s_2 == o_2)
                        || ecx_12 - arg4[0x1a] u> 0x1f4))
                    *arg4 = 0
                    uint32_t eax_17
                    eax_17.b = 0
                    CookieCheckFunction(eax_17)
                    return eax_17
    
    float var_348 = arg4[0x1e]
    float xmm0_2 = arg4[0x1f]
    uint32_t ecx_17 = sub_6938e0(arg3, &var_348)
    arg4[0xf] = *(arg2 + 4)
    arg4[0x10] = *(arg2 + 8)
    arg4[0x12] = *(arg2 + 0x10)
    arg4[0x13] = *(arg2 + 0x14)
    arg4[0x14] = *(arg2 + 0x18)
    arg4[0x15] = *(arg2 + 0x1c)
    arg4[0x16] = *(arg2 + 0x20)
    *(arg4 + 0x5c) = *(arg2 + 0x24)
    arg4[0x19] = *(arg2 + 0x2c)
    
    if (*arg4 != 1)
    label_4afd74:
        eax_1 = *arg4
        
        if (eax_1 == 6 || eax_1 == 5 || eax_1 == 4)
            float xmm1_3 = var_348
            float xmm0_13 = xmm1_3 f- arg4[0x1e]
            float xmm3_3 = xmm0_2 f- arg4[0x1f]
            float xmm1_4 = xmm1_3 f- arg4[0x1c]
            float xmm2_3 = xmm0_2 f- arg4[0x1d]
            float var_358 = xmm0_13
            float var_354_1 = xmm3_3
            float var_350 = xmm1_4
            float var_34c_3 = xmm2_3
            float* var_378_1
            int32_t* var_374_1
            int32_t* var_370_3
            float* eax_26
            
            if (eax_1 == 4)
                var_350 = xmm0_13
                float* var_36c_4 = &var_348
                int32_t var_34c_4 = 0
                var_370_3 = &var_358
                eax_26 = &var_350
                var_358 = xmm1_4
                var_374_1 = &var_350
                int32_t var_354_2 = 0
                var_378_1 = 3
            else if (eax_1 != 5)
                float* var_36c_6 = &var_348
                var_370_3 = &var_350
                eax_26 = &var_358
                var_374_1 = &var_358
                
                var_378_1 = eax_1 == 3 ? 4 : 1
            else
                float var_354_3 = xmm3_3
                float* var_36c_5 = &var_348
                var_358 = 0f
                var_370_3 = &var_350
                eax_26 = &var_358
                float var_34c_5 = xmm2_3
                var_350 = 0f
                var_374_1 = &var_358
                var_378_1 = 4
            
            sub_61c270(eax_26, &arg4[2], arg4.w, arg2, ecx_17, var_378_1, var_374_1, var_370_3)
        
        arg4[0x1e] = var_348
        arg4[0x1f] = xmm0_2
    else
        float xmm4_1 = arg4[0x1d]
        int32_t xmm0_6 = sub_4ae0b0(var_348 f- arg4[0x1c])
        int32_t xmm0_8 = sub_4ae0b0(xmm0_2 - xmm4_1)
        int32_t xmm3_1
        
        xmm3_1 = xmm0_6 f<= xmm0_8 ? xmm0_8 : xmm0_6
        
        if (not(20f f>= xmm3_1))
            if (not(xmm0_6 f<= 20f) && (arg4[1].b & 0x10) != 0)
                *arg4 = 4
            else if (not(xmm0_8 f<= 20f) && (arg4[1].b & 0x20) != 0)
                *arg4 = 5
            else if (xmm0_6 f<= 20f || (arg4[1].b & 0x40) == 0)
                if (not(sub_4ae0b0(xmm0_2 - xmm4_1) f<= 20f) && (arg4[1].b & 0x80) != 0)
                    *arg4 = 3
                else if ((arg4[1].b & 8) != 0)
                    *arg4 = 6
                    float* var_36c_3 = &var_348
                    ecx_17 = sub_61c270(&var_348, &arg4[2], arg4.w, arg2, ecx_17, nullptr, 
                        &data_7ffb14, &data_7ffb14)
            else
                *arg4 = 2
            
            goto label_4afd74

eax_1.b = 0
CookieCheckFunction(eax_1)
return eax_1
