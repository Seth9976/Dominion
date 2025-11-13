// 函数: sub_7019a0
// 地址: 0x7019a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = arg5 - 0x5d
char const* const var_fac
int32_t var_fa8
char const* const var_fa4_11
float var_f8c
float var_f80
int64_t var_f70
void var_f58
int32_t var_f50
float* eax_33
int32_t eax_61
void* ecx_10
char* ecx_30

switch (eax_2)
    case 0
        sub_6fef50(arg3, arg6)
        uint32_t eax_3
        eax_3.b = 1
        CookieCheckFunction(eax_3)
        return eax_3
    case 1
        sub_6fef50(arg3, arg6 + 0x40)
        uint32_t eax_5
        eax_5.b = 1
        CookieCheckFunction(eax_5)
        return eax_5
    case 2
        sub_6fef50(arg3, arg6 + 0x80)
        uint32_t eax_7
        eax_7.b = 1
        CookieCheckFunction(eax_7)
        return eax_7
    case 3, 4, 5
        void var_f18
        sub_6433d0(arg5, &var_f18)
        ecx_10 = &var_f18
    label_701a6e:
        sub_6fef50(arg3, ecx_10)
        uint32_t eax_8
        eax_8.b = 1
        CookieCheckFunction(eax_8)
        return eax_8
    case 6
        void* eax_20 = *(arg6 + 0x33c)
        
        if (eax_20 != 0)
            eax_2 = *(eax_20 + 0x2c)
        
        if (eax_20 == 0 || eax_2 == 0)
            sub_63b5f0("Can't use bones shader on non-animation structure\n")
            uint32_t eax_21
            eax_21.b = 1
            CookieCheckFunction(eax_21)
            return eax_21
        
        if (*(eax_2 + 0x80) s<= 0)
            var_fa4_11 = "XArray<struct Mat4>::operator []"
            var_fa8 = 0xb5
            var_fac = "C:\x\ax2017\Engine\xArray.h"
            ecx_30 = "index >= 0 && index < mSize"
            goto label_70217f
        
        ecx_10 = *(eax_2 + 0x7c)
        eax_2 = *(eax_2 + 0x80)
        
        if (arg2 s< eax_2)
            eax_2 = arg2
        
        if (ecx_10 != 0 && eax_2 s> 0)
            goto label_701a6e
        
        var_fa4_11 = "GLGraphicsSetSpecialRenderState"
        var_fa8 = 0xb54
        ecx_30 = "pBones && numShaderConstants > 0"
        goto label_702175
    case 7, 8, 9, 0xa
        void* eax_17 = data_147abe8
        var_f8c = *(arg6 + 0x30c)
        long double x87_r0
        int80_t x87_r1
        sub_6d7860(eax_17, (arg5 << 5) + 0x1c4 + *(arg6 + 0x350), &var_f58, arg3.w, arg6, 
            *(eax_17 + 0x2c), x87_r0, x87_r1, &var_f8c)
        int32_t xmm2_1 = var_f50
        int32_t var_f4c
        int32_t var_f54_1 = var_f4c
        void* var_fa4_10 = &var_f58
        int32_t var_f40
        var_f50 = var_f40
        int32_t var_f54
        int32_t var_f4c_1 = var_f54
        int32_t var_f3c
        int32_t var_f44_1 = var_f3c
        int32_t var_f40_1 = xmm2_1
        int32_t var_f44
        int32_t var_f3c_1 = var_f44
        (*__glewUniformMatrix3fv)(arg3, 1)
        uint32_t eax_19
        eax_19.b = 1
        CookieCheckFunction(eax_19)
        return eax_19
    case 0xb
        eax_33 = arg6 + 0x340
        goto label_702132
    case 0xc
        int32_t xmm0_18 = *(arg6 + 0x2f8)
        int32_t var_f88 = xmm0_18
        
        if (arg3 s< 0x400)
            int32_t edi_3 = arg3 * 2
            
            if (*(data_147ded4 + (edi_3 << 3) + 0x28) == var_f88)
                goto label_70213a
            
            int32_t* var_fa4_12 = &var_f88
            (*__glewUniform1f)(arg3, xmm0_18)
            uint32_t var_f90
            *(data_147ded4 + (edi_3 << 3) + 0x28) = var_f90
            uint32_t eax_31
            eax_31.b = 1
            CookieCheckFunction(eax_31)
            return eax_31
        
        var_fa4_11 = "GLDupCheck_glUniform1f"
        var_fa8 = 0x364
        ecx_30 = "registerIndex < MAX_UNIFORMS"
    label_702175:
        var_fac = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
    label_70217f:
        sub_63b870(eax_2, &data_801800, ecx_30, var_fac, var_fa8, var_fa4_11)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    case 0xf
        int128_t* eax_60 = sub_649da0(&var_f58)
        var_f80.o = *eax_60
        var_f70 = eax_60[1].q
        eax_61 = *(eax_60 + 0x18)
    label_70202e:
        int32_t var_f68 = eax_61
        sub_6fee60(&var_f70, 1, arg3, &var_f70)
        uint32_t eax_63
        eax_63.b = 1
        CookieCheckFunction(eax_63)
        return eax_63
    case 0x10
        eax_61 = data_cf6680
        var_f80.o = data_cf6668
        var_f70 = data_cf6678
        goto label_70202e
    case 0x11
        sub_6fed70(eax_2, 1, arg3, &data_cf65fc)
        uint32_t eax_64
        eax_64.b = 1
        CookieCheckFunction(eax_64)
        return eax_64
    case 0x12
        sub_6fef50(arg3, arg6 + 0xc0)
        uint32_t eax_14
        eax_14.b = 1
        CookieCheckFunction(eax_14)
        return eax_14
    case 0x13
        sub_6fef50(arg3, arg6 + 0x100)
        uint32_t eax_16
        eax_16.b = 1
        CookieCheckFunction(eax_16)
        return eax_16
    case 0x14
        var_f80 = _mm_cvtepi32_ps(zx.o((arg4 u>> 0x10).b)) / 255f
        float var_f7c_1 = _mm_cvtepi32_ps(zx.o((arg4 u>> 8).b)) / 255f
        float var_f78_1 = _mm_cvtepi32_ps(zx.o(arg4.b)) / 255f
        float var_f74_1 = _mm_cvtepi32_ps(zx.o(arg4 u>> 0x18)) / 255f
        var_f80.o = _mm_mul_ps(var_f80.o, *(arg6 + 0x2e8))
    label_702126:
        eax_33 = &var_f80
        goto label_702132
    case 0x15
        int32_t var_f78_2 = *(arg6 + 0x280)
        var_f80.q = *(arg6 + 0x278)
        sub_6fee60(&var_f80, 1, arg3, &var_f80)
        uint32_t eax_36
        eax_36.b = 1
        CookieCheckFunction(eax_36)
        return eax_36
    case 0x16
        var_f80 = _mm_cvtepi32_ps(zx.o((arg4 u>> 0x10).b)) / 255f
        float var_f7c_2 = _mm_cvtepi32_ps(zx.o((arg4 u>> 8).b)) / 255f
        float var_f78_3 = _mm_cvtepi32_ps(zx.o(arg4.b)) / 255f
        float var_f74_2 = _mm_cvtepi32_ps(zx.o(arg4 u>> 0x18)) / 255f
        var_f80.o = _mm_mul_ps(var_f80.o, *(arg6 + 0x2a8))
        goto label_702126
    case 0x17
        sub_6fef50(arg3, arg6 + 0x1c8)
        uint32_t eax_12
        eax_12.b = 1
        CookieCheckFunction(eax_12)
        return eax_12
    case 0x18
        sub_6fef50(arg3, arg6 + 0x188)
        uint32_t eax_10
        eax_10.b = 1
        CookieCheckFunction(eax_10)
        return eax_10
    case 0x19
        if (arg2 s> 4)
            var_fa4_11 = "GLGraphicsSetSpecialRenderState"
            var_fa8 = 0xbc8
            ecx_30 = "registerCount <= 4"
            goto label_702175
        
        float ecx_45 = 0f
        var_f8c = 0f
        
        if (arg2 s<= 0)
            goto label_70213a
        
        void* edi_5 = arg6 + 0x248
        
        do
            int32_t var_f78_4 = *(edi_5 + 8)
            var_f80.q = *edi_5
            sub_6fee60(&var_f80, 1, ecx_45 i+ arg3, &var_f80)
            edi_5 += 0xc
            ecx_45 = var_f8c i+ 1
            var_f8c = ecx_45
        while (ecx_45 s< arg2)
        
        uint32_t eax_46
        eax_46.b = 1
        CookieCheckFunction(eax_46)
        return eax_46
    case 0x1a
        if (arg2 s<= 4)
            sub_6fee60(arg6 + 0x278, arg2, arg3, arg6 + 0x278)
            uint32_t eax_48
            eax_48.b = 1
            CookieCheckFunction(eax_48)
            return eax_48
        
        var_fa4_11 = "GLGraphicsSetSpecialRenderState"
        var_fa8 = 0xbd3
        ecx_30 = "registerCount <= 4"
        goto label_702175
    case 0x1b
        if (arg2 s> 4)
            var_fa4_11 = "GLGraphicsSetSpecialRenderState"
            var_fa8 = 0xbde
            ecx_30 = "registerCount <= 4"
            goto label_702175
        
        if (arg2 s> 0)
            float xmm3_4 = _mm_cvtepi32_ps(zx.o((arg4 u>> 0x10).b))
            void* edi_6 = arg6 + 0x2a8
            float xmm4_2 = _mm_cvtepi32_ps(zx.o((arg4 u>> 8).b))
            int32_t* eax_56 = &var_f50
            uint32_t i_1 = arg2
            float xmm5_2 = _mm_cvtepi32_ps(zx.o(arg4.b))
            float xmm6_3 = _mm_cvtepi32_ps(zx.o(arg4 u>> 0x18)) / 255f
            uint32_t i
            
            do
                edi_6 += 0x10
                eax_56 = &eax_56[4]
                float xmm2_2[0x4] = *(edi_6 - 0x10)
                eax_56[-6] = xmm3_4 / 255f f* xmm2_2
                float xmm1_7 = xmm4_2 / 255f * _mm_shuffle_ps(xmm2_2, xmm2_2, 0x55)
                float xmm0_39 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xaa)
                float xmm2_3 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xff)
                eax_56[-5] = xmm1_7
                eax_56[-4] = xmm5_2 / 255f * xmm0_39
                eax_56[-3] = xmm6_3 * xmm2_3
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        sub_6fed70(&var_f58, arg2, arg3, &var_f58)
        uint32_t eax_58
        eax_58.b = 1
        CookieCheckFunction(eax_58)
        return eax_58
    case 0x1c
        void* eax_65 = data_147abe8
        int32_t var_f74_3 = 0
        var_f80 = *(eax_65 + 0x2c)
        int32_t var_f7c_3 = *(eax_65 + 0x28)
        int32_t var_f78_5 = *(data_147b06c + 0x94)
        goto label_702126
    case 0x1d
        eax_33 = arg6 + 0x30c
        goto label_702132
    case 0x1e
        eax_33 = arg6 + 0x31c
        goto label_702132
    case 0x1f
        eax_33 = arg6 + 0x2fc
        goto label_702132
    case 0x20
        void* eax_67 = data_147ded4
        int32_t var_f7c_4 = 0
        int32_t var_f78_6 = 0
        int32_t var_f74_4 = 0
        var_f80 = *(eax_67 + 0x24) f/ *(eax_67 + 0x20)
        var_f80.o = var_f80.o
        goto label_702126
    case 0x21, 0x22, 0x23, 0x24
        eax_33 = *(arg6 + 0x350) + (arg5 << 4) + 0x6e4
    label_702132:
        sub_6fed70(eax_33, 1, arg3, eax_33)
    label_70213a:
        eax_2.b = 1
        CookieCheckFunction(eax_2)
        return eax_2
    case 0x26
        sub_6fed70(eax_2, 1, arg3, &data_cf6a40:4)
        uint32_t eax_59
        eax_59.b = 1
        CookieCheckFunction(eax_59)
        return eax_59

eax_2.b = 0
CookieCheckFunction(eax_2)
return eax_2
