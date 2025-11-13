// 函数: sub_6c2170
// 地址: 0x6c2170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t* ecx
void* edx
ecx, edx = __chkstk(0x20f8)
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
uint32_t result = data_147ded0
int32_t edx_1 = ecx[0xb7]

if (result != *ecx[0xb9])
label_6c2202:
    float var_20a0[0x1a]
    sub_6bf490(sub_6bce70(&var_20a0, edx, ecx, arg2, ecx, &var_20a0), &var_20a0, ecx, arg2)
    int32_t* eax_5 = sub_5af880(*ecx[0xb9])
    
    if (*(ecx[0xb7] * 0x168 + *eax_5 + 0xf1) == 0)
        result = *sub_5af880(*ecx[0xb9])
    
    if (*(ecx[0xb7] * 0x168 + *eax_5 + 0xf1) != 0 || *(ecx[0xb7] * 0x168 + result + 0xf2) != 0)
        float eax_9 = data_cf6680
        uint32_t result_1 = 0
        int32_t* edx_4 = ecx
        void* esi_2 = nullptr
        int128_t var_20c8_1 = data_cf6668
        int64_t xmm0_2 = data_cf6678
        
        while (true)
            if (esi_2 != 0)
                esi_2 = *(esi_2 + 0x2fc)
            else
                esi_2 = edx_4[0xb4]
            
            void* var_2018
            int32_t esi_3
            
            if (esi_2 == 0)
                int32_t eax_22 = result_1 << 3 s>> 3
                sub_6c3490(eax_22, &(&var_2018)[result_1 * 2], &var_2018, eax_22, sub_6c2140)
                result = result_1
                esi_3 = 0
                result_1 = result
                
                if (result s<= 0)
                    break
            else
                int32_t* eax_12 = sub_5af880(**(esi_2 + 0x2e4))
                void* eax_14 = esi_2 + 0x2a8
                void var_2038
                
                if (*(*(esi_2 + 0x2dc) * 0x168 + *eax_12 + 0xe1) == 0)
                    eax_14 = &var_2038
                int128_t var_2108
                sub_4eb600(eax_14, esi_2 + 0x288, &var_2108, eax_14)
                int128_t var_20e8_1 = var_2108
                edx_4 = ecx
                int32_t eax_18 = *sub_5af880(*ecx[0xb9])
                float xmm2_3
                int128_t var_20f8
                
                if (*(edx_4[0xb7] * 0x168 + eax_18 + 0xf2) == 0)
                    float xmm2_5 = xmm0_2:4.d f- var_20f8:8.d
                    float xmm1_2 = xmm0_2.d f- var_20f8:4.d
                    float xmm0_6 = eax_9 f- var_20f8:0xc.d
                    xmm2_3 = xmm2_5 * xmm2_5 + xmm1_2 * xmm1_2 + xmm0_6 * xmm0_6
                else
                    xmm2_3 = __andps_xmmxud_memxud(var_20f8:8.d f- xmm0_2:4.d, data_8937a0.o)
                (&var_2018)[result_1 * 2] = esi_2
                int32_t var_2014[0x7fc]
                var_2014[result_1 * 2] = xmm2_3
                result_1 += 1
                
                if (result_1 != 0x400)
                    continue
                else
                    sub_63b5f0("too many particle to sort")
                    int32_t eax_20 = result_1 << 3 s>> 3
                    sub_6c3490(eax_20, &(&var_2018)[result_1 * 2], &var_2018, eax_20, sub_6c2140)
                    esi_3 = 0
            
            do
                (&var_2018)[esi_3 * 2]
                result = sub_6c2170(arg2)
                esi_3 += 1
            while (esi_3 s< result_1)
            
            break
    else
        void* esi_1 = nullptr
        
        while (true)
            if (esi_1 != 0)
                esi_1 = *(esi_1 + 0x2fc)
            else
                esi_1 = ecx[0xb4]
            
            if (esi_1 == 0)
                break
            
            result = sub_6c2170(arg2)
else
    if (edx_1 u> 0xff)
        sub_63b870(result, &data_801800, "emitterIndex >= 0 && emitterIndex < MAX_EMITTERS", 
            "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0x1950, "EditorEmitterIsHidden")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*((edx_1 << 3) + &data_147d4b8) == 0)
        goto label_6c2202

CookieCheckFunction(result)
return result
