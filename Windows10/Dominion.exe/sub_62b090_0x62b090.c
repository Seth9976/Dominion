// 函数: sub_62b090
// 地址: 0x62b090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cc8dc0
char const* const var_30
int32_t var_2c
char const* const var_28
char* ecx

if (eax != 0)
    int32_t eax_1 = *(eax + 8)
    float xmm0
    
    if (eax_1 == 0)
        xmm0 = 500f
    label_62b0f5:
        uint32_t eax_4 = sub_64e7a0(arg1)
        float xmm0_2 = xmm0 f* data_8c4634
        float xmm2 = *(eax_4 + 0x138c)
        float xmm3 = *(eax_4 + 0x1390)
        float xmm1_1 = *arg2 - xmm2
        float xmm2_2 = arg2[1] f- xmm3
        int32_t __saved_ebp
        float xmm0_6 = sub_4ac580(&__saved_ebp, xmm1_1 * xmm1_1 + xmm2_2 * xmm2_2)
        float xmm0_7
        float xmm1_5
        float xmm2_3
        float xmm3_2
        
        if (xmm0_2 <= xmm0_6)
            float xmm0_8 = 1f / xmm0_6
            xmm0_7 = xmm3
            xmm3_2 = xmm2
            xmm2_3 = xmm1_1 * xmm0_8 * xmm0_2 + xmm3_2
            xmm1_5 = xmm2_2 * xmm0_8 * xmm0_2 + xmm0_7
        else
            xmm2_3 = *arg2
            xmm1_5 = arg2[1]
            xmm0_7 = xmm3
            xmm3_2 = xmm2
        
        void* result = data_b8099c
        float var_10_1 = xmm1_5
        float var_c_1 = xmm2_3
        
        if (result s> 0)
            xmm2_3 = *arg2
            xmm1_5 = arg2[1]
            var_c_1 = xmm2_3
            var_10_1 = xmm1_5
            data_b8099c = result - 1
        
        xmm3_2 - xmm2_3
        result:1.b = (xmm3_2 == xmm2_3 ? 1 : 0) << 6 | (is_unordered.d(xmm3_2, xmm2_3) ? 1 : 0) << 2
            | (xmm3_2 < xmm2_3 ? 1 : 0)
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            xmm0_7 - xmm1_5
            result:1.b = (xmm0_7 == xmm1_5 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_7, xmm1_5) ? 1 : 0) << 2 | (xmm0_7 < xmm1_5 ? 1 : 0)
            bool p_3 = unimplemented  {test ah, 0x44}
            
            if (not(p_3))
                return result
        
        uint32_t eax_5 = sub_64e7a0(arg1)
        *(eax_5 + 0x138c) = var_c_1
        *(eax_5 + 0x1390) = var_10_1
        sub_67a770(eax_5, nullptr)
        return sub_65bf00(eax_5)
    
    if (eax_1 == 1)
        xmm0 = 1000f
        goto label_62b0f5
    
    eax = eax_1 - 3
    
    if (eax_1 == 3)
        xmm0 = 8000f
        goto label_62b0f5
    
    var_28 = "AutoScrollUpdate"
    var_2c = 0xff2b
    var_30 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx = "Halt"
else
    var_28 = "GetLocalSettings"
    var_2c = 0x5fb
    var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
    ecx = "gGameSettings.localSettings"

sub_63b870(eax, &data_801800, ecx, var_30, var_2c, var_28)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
