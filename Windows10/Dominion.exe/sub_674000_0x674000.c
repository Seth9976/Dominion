// 函数: sub_674000
// 地址: 0x674000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float xmm0 = *(data_147abe8 + 0x2c)
float* eax_3 = data_ca9a78
char const* const var_6c
int32_t var_68
char const* const var_64_5
char* ecx_6
char* const edx
float var_48

if (eax_3 == 0)
    void* eax_4 = sub_665600(data_c27c58)
    float var_44
    float var_40
    float var_3c
    void var_30
    float var_20
    
    if (arg3 == 0)
        sub_64c550(eax_4 + 0x14, *(data_147abe8 + 0x2c), &var_20)
        int128_t* eax_7 = sub_67d460(eax_4 + 0x554, xmm0, &var_30)
        float xmm1_1 = var_20
        float var_18
        float xmm2_5 = var_18 - xmm1_1
        var_40 = xmm2_5 f* *(eax_7 + 8) + xmm1_1
        float var_1c
        float var_14
        float xmm2_9 = var_14 - var_1c
        var_48 = xmm2_5 f* *eax_7 + xmm1_1
        var_3c = xmm2_9 f* *(eax_7 + 0xc) + var_1c
        var_44 = xmm2_9 f* *(eax_7 + 4) + var_1c
    else
        sub_64c550(eax_4 + 0x14, *(data_147abe8 + 0x2c), &var_48)
    
    int32_t edi_1 = 1
    *arg4 = var_48.o
    
    if (data_c28c58 s<= 1)
        CookieCheckFunction(arg4)
        return arg4
    
    while (true)
        void* eax_8 = sub_665600((&data_c27c58)[edi_1])
        
        if (arg3 == 0)
            sub_64c550(eax_4 + 0x14, *(data_147abe8 + 0x2c), &var_48)
            int128_t* eax_11 = sub_67d460(eax_8 + 0x554, xmm0, &var_20)
            float xmm0_10 = var_48
            float xmm2_16 = var_40 - xmm0_10
            float xmm6_1 = *arg4
            float xmm5_1 = *(arg4 + 8)
            float xmm2_18 = xmm2_16 f* *(eax_11 + 8) + xmm0_10
            float xmm3_3 = xmm2_16 f* *eax_11 + xmm0_10
            float xmm4_2 = var_3c - var_44
            float xmm4_4 = xmm4_2 f* *(eax_11 + 0xc) + var_44
            float xmm7_3 = xmm4_2 f* *(eax_11 + 4) + var_44
            float xmm0_12
            float xmm1_3
            
            if (not(xmm5_1 < xmm6_1))
                xmm1_3 = *(arg4 + 4)
                xmm0_12 = *(arg4 + 0xc)
            
            if (xmm5_1 < xmm6_1 || xmm0_12 < xmm1_3)
                sub_63b870(eax_11, &data_801800, "RectIsNormalized(r0)", 
                    "C:\x\ax2017\Engine\Rect.cpp", 0xdb, "RectUnion")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            if (not(xmm3_3 > xmm6_1))
                xmm6_1 = xmm3_3
            
            if (not(xmm5_1 > xmm2_18))
                xmm5_1 = xmm2_18
            
            if (not(xmm7_3 > xmm1_3))
                xmm1_3 = xmm7_3
            
            if (not(xmm0_12 > xmm4_4))
                xmm0_12 = xmm4_4
            
            *arg4 = xmm6_1
            *(arg4 + 4) = xmm1_3
            *(arg4 + 8) = xmm5_1
            *(arg4 + 0xc) = xmm0_12
        else
            eax_3 = sub_64c550(eax_4 + 0x14, *(data_147abe8 + 0x2c), &var_30)
            
            if (*(arg4 + 8) f< *arg4 || not(*(arg4 + 0xc) f>= *(arg4 + 4)))
                var_64_5 = "RectUnion"
                var_68 = 0xdb
                var_6c = "C:\x\ax2017\Engine\Rect.cpp"
                ecx_6 = "RectIsNormalized(r0)"
                break
        
        edi_1 += 1
        
        if (edi_1 s>= data_c28c58)
            CookieCheckFunction(arg4)
            return arg4
    
    edx = &data_801800
else if (eax_3 != 2)
    var_64_5 = "UI2DragSelectionRect"
    var_68 = 0x4c32
    ecx_6 = "Halt"
    var_6c = "C:\x\ax2017\Engine\UI2.cpp"
    edx = &data_801800
else
    int32_t* ecx_10 = data_c27c20
    
    if (ecx_10 != 0)
        if (ecx_10[1] == 0x22)
            void* eax_13 = sub_5af880(ecx_10)
            var_48 = 0f
            int32_t var_44_1 = 0
            int32_t var_40_1 = *(eax_13 + 0x10)
            int32_t var_3c_1 = *(eax_13 + 0x14)
            *arg4 = var_48.o
            CookieCheckFunction(arg4)
            return arg4
        
        var_64_5 = "UI2DefGet"
        var_68 = 0xc17
        ecx_6 = "ptr->assetType == ASSET_TYPE_UI2"
        var_6c = "C:\x\ax2017\Engine\UI2.cpp"
        edx = &data_801800
    else
        var_64_5 = "UI2DefGet"
        var_68 = 0xc16
        var_6c = "C:\x\ax2017\Engine\UI2.cpp"
        edx = "UI2DefGet on null pointer"
        ecx_6 = &data_874470
sub_63b870(eax_3, edx, ecx_6, var_6c, var_68, var_64_5)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
