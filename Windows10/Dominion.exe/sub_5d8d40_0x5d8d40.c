// 函数: sub_5d8d40
// 地址: 0x5d8d40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t eax_2 = *arg2
void var_50
float var_30

if (eax_2 == 0)
    int32_t eax_11 = arg2[1]
    
    if (eax_11 != 0)
        uint32_t ecx_2 = zx.d(eax_11.w)
        
        if (ecx_2 u< data_b809e4)
            void* ecx_4 = ecx_2 * 0x1c30 + data_b809e0
            
            if (*(ecx_4 + 0x1c28) == eax_11 && ecx_4 != 0)
                int32_t eax_12 = sub_66b2b0(eax_11, "rootContent", *(ecx_4 + 0x1ba0), 0)
                int128_t xmm0_5
                
                if (eax_12 != 0)
                    uint32_t eax_13 = sub_64e7a0(eax_12)
                    var_30 = 0f
                    int32_t var_2c_2 = 0
                    int32_t var_28_2 = *(eax_13 + 0x16cc)
                    int32_t var_24_2 = *(eax_13 + 0x16d0)
                    var_30.o = var_30.o
                    xmm0_5 = *sub_655430(&var_50, &var_30, eax_13 + 0x1620, &var_50)
                else
                    xmm0_5 = data_7ff520
                
                var_30.o = xmm0_5
                goto label_5d8ec5
else
    if (eax_2 != 1)
        sub_63b870(eax_2 - 1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0x3116, "ToTransform")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t ecx = arg2[2]
    
    if (ecx != 0)
        uint32_t eax_5 = zx.d(ecx.w)
        
        if (eax_5 u< data_c23bac && *(eax_5 * 0x18d0 + data_c23ba8 + 0x18c8) == ecx)
            uint32_t eax_8 = sub_64e7a0(ecx)
            var_30 = 0f
            int32_t var_2c_1 = 0
            int32_t var_28_1 = *(eax_8 + 0x16cc)
            int32_t var_24_1 = *(eax_8 + 0x16d0)
            var_30.o = var_30.o
            var_30.o = *sub_655430(&var_50, &var_30, eax_8 + 0x1620, &var_50)
        label_5d8ec5:
            int128_t* eax_17 = sub_5d8a80(&var_50, arg3, &var_30, &var_50, arg2[3])
            int128_t xmm1_1 = eax_17[1]
            *(arg2 + 0x10) = *eax_17
            *(arg2 + 0x20) = xmm1_1
*arg4 = *(arg2 + 0x10)
arg4[1] = *(arg2 + 0x20)
CookieCheckFunction(arg4)
return arg4
