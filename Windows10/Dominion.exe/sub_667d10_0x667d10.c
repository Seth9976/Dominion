// 函数: sub_667d10
// 地址: 0x667d10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = __chkstk(0x104c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
bool cond:0 = data_c28c62 == 0
void* eax_2 = data_147abe8
data_ca9a75 = 1
float xmm0 = *(eax_2 + 0x2c)
float var_1044
int128_t var_103c
float var_102c
float var_101c
int32_t* eax_11

if (cond:0)
label_668407:
    int32_t var_14_12 = data_c28c58
    int32_t ecx_20 = data_c27c24
    int32_t* var_18_3 = &data_c27c58
    int32_t* var_1c_1 = &var_1044
    var_1044 = 0f
    int32_t var_100c[0x3fc]
    eax_11 = sub_6674e0(&var_1044, &var_100c, ecx_20, var_1c_1, var_18_3, var_14_12)
    int32_t edi_4 = 0
    
    if (var_1044 s<= 0)
        CookieCheckFunction(eax_11)
        return eax_11
    
    char eax_24
    
    while (true)
        char* eax_20 = sub_64e7a0(var_100c[edi_4])
        char* esi_4 = eax_20
        
        if (esi_4[5] == 0)
            void* ecx_22 = *(esi_4 + 0x1718)
            
            if (ecx_22 != 0)
                eax_20 = sub_6655e0(ecx_22)
            
            if (ecx_22 == 0 || eax_20.b == 0)
                sub_64c550(&esi_4[0x14], xmm0, &var_101c)
                float xmm0_40 = *ecx
                float xmm1_20 = ecx[1]
                float xmm5_16 = xmm0_40 + var_101c
                float var_1018
                float xmm4_18 = xmm1_20 + var_1018
                float xmm3_21
                
                if (0f <= xmm5_16)
                    xmm3_21 = xmm5_16 + 0.5f
                else
                    xmm3_21 = xmm5_16 - 0.5f
                
                float xmm3_23
                
                if (0f <= xmm4_18)
                    xmm3_23 = xmm4_18 + 0.5f
                else
                    xmm3_23 = xmm4_18 - 0.5f
                
                float var_1014
                float xmm0_42 = xmm0_40 + var_1014 - xmm5_16
                float var_1010
                float xmm1_22 = xmm1_20 + var_1010 - xmm4_18
                float xmm7_8 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_23)))
                float xmm0_43
                
                if (0f <= xmm0_42)
                    xmm0_43 = xmm0_42 + 0.5f
                else
                    xmm0_43 = xmm0_42 - 0.5f
                
                float xmm3_25 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_43)))
                float xmm1_23
                
                if (0f <= xmm1_22)
                    xmm1_23 = xmm1_22 + 0.5f
                else
                    xmm1_23 = xmm1_22 - 0.5f
                
                float xmm1_25 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_21)))
                int32_t* var_14_14 = &var_103c
                float xmm0_45 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_23)))
                var_102c = xmm1_25
                float var_1028_1 = xmm7_8
                float var_1024_1 = xmm3_25 + xmm1_25
                float var_1020_1 = xmm0_45 + xmm7_8
                var_103c = var_102c.o
                int32_t* eax_23 = sub_667c30(&var_103c, 0x76, esi_4, var_14_14)
                edi_4 += 1
                
                if (edi_4 s< var_1044)
                    continue
                
                CookieCheckFunction(eax_23)
                return eax_23
        
        sub_63b870(eax_20, &data_801800, "!IsTemplate(element)", "C:\x\ax2017\Engine\UI2.cpp", 
            0x3acb, "UI2OffsetActiveSet")
        eax_24 = sub_63bc30()
        break
    
    if (eax_24 != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int16_t eax_3 = GetKeyState(0x11)
HWND eax_5

if (eax_3 s< 0 && *(data_cf65b4 + 0x18) != 0)
    eax_5 = GetFocus()

HWND ecx_11
int32_t* edx

if (eax_3 s< 0 && *(data_cf65b4 + 0x18) != 0 && (eax_5 == data_147b084 || eax_5 == 0))
    int32_t var_18_1
    char const* const var_14_2
    char* ecx_1
    
    if (data_c28c58 == 1)
        eax_5 = sub_665600(data_c27c58)
        HWND edi_1 = eax_5
        void* ecx_3
        
        if (edi_1->__offset(0x5).b == 0)
            ecx_3 = edi_1
            
            if (ecx_3 != 0)
                eax_5 = sub_6655e0(ecx_3)
        
        if (edi_1->__offset(0x5).b == 0 && (ecx_3 == 0 || eax_5.b == 0))
            float* eax_6 = sub_64c550(&edi_1[5], xmm0, &var_103c)
            float xmm0_1 = *ecx
            float xmm1_1 = ecx[1]
            float xmm5_2 = xmm0_1 + *eax_6
            float xmm4_2 = xmm1_1 + eax_6[1]
            float xmm3_2
            
            if (0f <= xmm5_2)
                xmm3_2 = xmm5_2 + 0.5f
            else
                xmm3_2 = xmm5_2 - 0.5f
            
            float xmm3_4
            
            if (0f <= xmm4_2)
                xmm3_4 = xmm4_2 + 0.5f
            else
                xmm3_4 = xmm4_2 - 0.5f
            
            float xmm0_3 = xmm0_1 + eax_6[2] - xmm5_2
            float xmm1_3 = xmm1_1 + eax_6[3] - xmm4_2
            float xmm7_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_4)))
            float xmm0_4
            
            if (0f <= xmm0_3)
                xmm0_4 = xmm0_3 + 0.5f
            else
                xmm0_4 = xmm0_3 - 0.5f
            
            float xmm3_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_4)))
            float xmm1_4
            
            if (0f <= xmm1_3)
                xmm1_4 = xmm1_3 + 0.5f
            else
                xmm1_4 = xmm1_3 - 0.5f
            
            float xmm1_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_2)))
            int128_t* var_14_4 = &var_103c
            float xmm0_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_4)))
            var_101c = xmm1_6
            float var_1018_1 = xmm7_2
            float var_1014_1 = xmm3_6 + xmm1_6
            float var_1010_1 = xmm0_6 + xmm7_2
            var_102c.o = var_101c.o
            int128_t* eax_8 = sub_67d460(&edi_1[0x155], xmm0, var_14_4)
            float* eax_9 = sub_64c550(&edi_1[5], xmm0, &var_101c)
            int128_t xmm5_3 = var_102c.o
            float xmm0_9 = *eax_9
            float xmm2_5 = eax_9[2] - xmm0_9
            float xmm2_7 = xmm2_5 f* *(eax_8 + 8) + xmm0_9
            float xmm4_5 = xmm2_5 f* *eax_8 + xmm0_9
            float xmm0_10 = eax_9[1]
            float xmm1_8 = eax_9[3] - xmm0_10
            var_1044 = xmm4_5
            float xmm3_10 = xmm1_8 f* *(eax_8 + 4) + xmm0_10
            var_101c.o = xmm5_3
            float xmm1_10 = xmm1_8 f* *(eax_8 + 0xc) + xmm0_10
            float var_1024
            
            if (not(xmm5_3 f<= xmm4_5))
                var_101c = xmm4_5
                float var_1014_2 = var_1024 f- xmm5_3 + xmm4_5
            else if (not(xmm2_7 <= var_1024))
                float var_1014_3 = xmm2_7
                var_101c = xmm2_7 - (var_1024 f- xmm5_3)
            
            float var_1028
            float var_1020
            
            if (not(var_1028 <= xmm3_10))
                float var_1018_2 = xmm3_10
                float var_1010_2 = var_1020 - var_1028 + xmm3_10
            else if (not(xmm1_10 <= var_1020))
                float var_1010_3 = xmm1_10
                float var_1018_3 = xmm1_10 - (var_1020 - var_1028)
            
            var_102c.o = var_101c.o
            sub_667c30(&var_102c, 0x76, edi_1, &var_102c)
            float xmm0_22 = var_102c
            edx = &var_101c
            float xmm1_12 = var_1024 - xmm0_22
            ecx_11 = edi_1
            var_101c = (var_1044 - xmm0_22) / xmm1_12
            float var_1014_4 = (xmm2_7 - xmm0_22) / xmm1_12
            float xmm1_14 = var_1020 - var_1028
            float var_1018_4 = (xmm3_10 - var_1028) / xmm1_14
            float var_1010_4 = (xmm1_10 - var_1028) / xmm1_14
            var_101c.o = var_101c.o
            goto label_6680d4
        
        var_14_2 = "UI2OffsetActiveSet"
        var_18_1 = 0x3aaa
        ecx_1 = "!IsTemplate(element)"
    else
        var_14_2 = "UI2OffsetActiveSet"
        var_18_1 = 0x3aa8
        ecx_1 = "gUI2Editor.s.activeSetCount == 1"
    
    sub_63b870(eax_5, &data_801800, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_18_1, var_14_2)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (data_c28c62 == 0)
    goto label_668407

HWND eax_12 = GetKeyState(0x11)

if (eax_12.w s< 0)
    eax_12 = data_cf65b4
    
    if (eax_12->__offset(0x18).b == 0)
        goto label_668128
    
    eax_12 = GetFocus()
    
    if (eax_12 == data_147b084 || eax_12 == 0)
        goto label_668407
    
    goto label_668128

label_668128:
int32_t var_18_2
char const* const var_14_8
char* ecx_14

if (data_c28c58 == 1)
    eax_12 = sub_665600(data_c27c58)
    HWND edi_2 = eax_12
    void* ecx_16
    
    if (edi_2->__offset(0x5).b == 0)
        ecx_16 = edi_2
        
        if (ecx_16 != 0)
            eax_12 = sub_6655e0(ecx_16)
    
    if (edi_2->__offset(0x5).b == 0 && (ecx_16 == 0 || eax_12.b == 0))
        int128_t* eax_13 = sub_67d460(&edi_2[0x155], xmm0, &var_103c)
        float* eax_15 = sub_64c550(&edi_2[5], xmm0, &var_101c)
        float xmm3_11 = *eax_15
        float xmm2_24 = eax_15[1]
        float xmm4_10 = eax_15[2] - xmm3_11
        float xmm5_5 = eax_15[3] - xmm2_24
        float xmm7_6 = xmm4_10 f* *eax_13 + xmm3_11 f+ *ecx
        float xmm6_4 = xmm5_5 f* *(eax_13 + 4) + xmm2_24 f+ ecx[1]
        float xmm0_26
        
        if (0f <= xmm7_6)
            xmm0_26 = xmm7_6 + 0.5f
        else
            xmm0_26 = xmm7_6 - 0.5f
        
        int32_t esi_3 = int.d(xmm0_26)
        float xmm0_28
        
        if (0f <= xmm6_4)
            xmm0_28 = xmm6_4 + 0.5f
        else
            xmm0_28 = xmm6_4 - 0.5f
        
        int32_t edi_3 = int.d(xmm0_28)
        float xmm4_14 = xmm4_10 f* *(eax_13 + 8) + xmm3_11 f+ *ecx - xmm7_6
        float xmm5_9 = xmm5_5 f* *(eax_13 + 0xc) + xmm2_24 f+ ecx[1] - xmm6_4
        float xmm3_13 = _mm_cvtepi32_ps(zx.o(edi_3))
        float xmm4_15
        
        if (0f <= xmm4_14)
            xmm4_15 = xmm4_14 + 0.5f
        else
            xmm4_15 = xmm4_14 - 0.5f
        
        float xmm0_30 = _mm_cvtepi32_ps(zx.o(int.d(xmm4_15)))
        float xmm5_10
        
        if (0f <= xmm5_9)
            xmm5_10 = xmm5_9 + 0.5f
        else
            xmm5_10 = xmm5_9 - 0.5f
        
        float xmm2_26 = _mm_cvtepi32_ps(zx.o(esi_3))
        float* var_14_11 = &var_103c
        var_1044 = _mm_cvtepi32_ps(zx.o(int.d(xmm5_10))) + xmm3_13
        float* eax_18 = sub_64c550(&edi_2[5], xmm0, var_14_11)
        float xmm3_14 = var_1044
        float xmm1_18 = *eax_18
        float xmm0_33 = eax_18[2] - xmm1_18
        float xmm6_7 = _mm_cvtepi32_ps(zx.o(esi_3)) - xmm1_18
        float xmm1_19 = eax_18[1]
        float xmm5_12 = _mm_cvtepi32_ps(zx.o(edi_3))
        float xmm6_8 = xmm6_7 / xmm0_33
        float xmm2_30 = (xmm0_30 + xmm2_26 - xmm1_18) / xmm0_33
        float xmm0_35 = eax_18[3] - xmm1_19
        var_101c = xmm6_8
        float var_1014_5 = xmm2_30
        float xmm5_14 = (xmm5_12 - xmm1_19) / xmm0_35
        float xmm3_16 = (xmm3_14 - xmm1_19) / xmm0_35
        float var_1018_5 = xmm5_14
        float var_1010_5 = xmm3_16
        var_101c.o = var_101c.o
        
        if (not(0f <= xmm6_8))
            var_101c = 0f
            float var_1014_6 = xmm2_30 - xmm6_8 + 0f
        else if (not(xmm2_30 <= 1f))
            int32_t var_1014_7 = 0x3f800000
            var_101c = 1f - (xmm2_30 - xmm6_8)
        
        if (0 f<= xmm5_14)
            if (not(xmm3_16 <= 1f))
                int32_t var_1010_7 = 0x3f800000
                float var_1018_7 = 1f - (xmm3_16 - xmm5_14)
            
            ecx_11 = edi_2
            edx = &var_102c
            var_102c.o = var_101c.o
        else
            ecx_11 = edi_2
            int32_t var_1018_6 = 0
            edx = &var_102c
            float var_1010_6 = xmm3_16 - xmm5_14 + 0f
            var_102c.o = var_101c.o
        
    label_6680d4:
        eax_11 = sub_667ca0(ecx_11, edx)
        CookieCheckFunction(eax_11)
        return eax_11
    
    var_14_8 = "UI2OffsetActiveSet"
    var_18_2 = 0x3ab7
    ecx_14 = "!IsTemplate(element)"
else
    var_14_8 = "UI2OffsetActiveSet"
    var_18_2 = 0x3ab5
    ecx_14 = "gUI2Editor.s.activeSetCount == 1"

sub_63b870(eax_12, &data_801800, ecx_14, "C:\x\ax2017\Engine\UI2.cpp", var_18_2, var_14_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
