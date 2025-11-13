// 函数: sub_6b0df0
// 地址: 0x6b0df0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ecx = *arg3
uint32_t eax_2 = ecx - 0x5d
float* i_5
int32_t var_f98
uint32_t count
char const* const var_f94_1
float i_2
float var_f80
float var_f50
float var_f40
int32_t var_f3c
float* i_6
int32_t eax_37
char* ecx_1
int64_t xmm0_56

switch (eax_2)
    case 0
        count = arg3[2]
        i_5 = arg2
    label_6b140f:
        memcpy(arg3[1] + arg4, i_5, count)
        uint32_t eax_43
        eax_43.b = 1
        CookieCheckFunction(eax_43)
        return eax_43
    case 1
        i_6 = &arg2[0x10]
    label_6b1405:
        count = arg3[2]
        i_5 = i_6
        goto label_6b140f
    case 2
        i_6 = &arg2[0x20]
        goto label_6b1405
    case 3, 4, 5
        void var_f18
        uint32_t count_1 = sub_6433d0(ecx, &var_f18) << 6
        
        if (count_1 s> arg3[2])
            sub_63b5f0("dx11 not large enough instance buffer in shader to draw mesh")
            count_1 = arg3[2]
        
        count = count_1
        i_5 = &var_f18
        goto label_6b140f
    case 6
        void* eax_4 = arg2[0xcf]
        
        if (eax_4 != 0)
            eax_2 = *(eax_4 + 0x2c)
        
        if (eax_4 == 0 || eax_2 == 0)
            sub_63b5f0("Can't use bones shader on non-animation structure\n")
            uint32_t eax_5
            eax_5.b = 1
            CookieCheckFunction(eax_5)
            return eax_5
        
        char const* const var_f9c
        
        if (*(eax_2 + 0x80) s> 0)
            float* i_3 = *(eax_2 + 0x7c)
            eax_2 = *(eax_2 + 0x80)
            i_2 = i_3
            
            if (i_3 != 0)
                uint32_t count_2 = eax_2 << 6
                
                if (count_2 s> arg3[2])
                    sub_63b5f0("dx11 not enough bones in shader to draw mesh")
                    count_2 = arg3[2]
                    i_3 = i_2
                
                count = count_2
                i_5 = i_3
                goto label_6b140f
            
            var_f94_1 = "Dx11GraphicsSetSpecialRenderState"
            var_f98 = 0x6c3
            ecx_1 = "pBones"
        label_6b1452:
            var_f9c = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
        else
            var_f94_1 = "XArray<struct Mat4>::operator []"
            var_f98 = 0xb5
            var_f9c = "C:\x\ax2017\Engine\xArray.h"
            ecx_1 = "index >= 0 && index < mSize"
        
        sub_63b870(eax_2, &data_801800, ecx_1, var_f9c, var_f98, var_f94_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    case 7, 8, 9, 0xa
        void* eax_6 = data_147abe8
        float* edx_3 = arg2[0xd4] i+ 0x1c4 + (ecx << 5)
        i_2 = arg2[0xc3]
        long double x87_r0
        int80_t x87_r1
        sub_6d7860(eax_6, edx_3, &var_f50, arg3.w, arg4, *(eax_6 + 0x2c), x87_r0, x87_r1, &i_2)
        uint32_t count_3 = 0x2c
        var_f80 = var_f50
        int32_t var_f4c
        int32_t var_f7c_1 = var_f4c
        int32_t var_f48
        int32_t var_f78_1 = var_f48
        int32_t var_f44
        int32_t var_f70_1 = var_f44
        float var_f6c_1 = var_f40
        int32_t var_f68_1 = var_f3c
        int32_t var_f38
        int32_t var_f60_1 = var_f38
        int32_t var_f34
        int32_t var_f5c_1 = var_f34
        int32_t var_f74_1 = 0
        int32_t var_f64_1 = 0
        int32_t var_f30
        int32_t var_f58_1 = var_f30
        
        if (arg3[2] s< 0x2c)
            sub_63b5f0("dx11 not enough texAnims in shader")
            count_3 = arg3[2]
        
        count = count_3
        i_5 = &var_f80
        goto label_6b140f
    case 0xb
        i_6 = &arg2[0xd0]
        goto label_6b1405
    case 0xc
        i_6 = &arg2[0xbe]
        goto label_6b1405
    case 0xf
        int128_t* eax_36 = sub_649da0(&var_f80)
        var_f50.o = *eax_36
        xmm0_56 = eax_36[1].q
        eax_37 = *(eax_36 + 0x18)
    label_6b131f:
        var_f40.q = xmm0_56
        var_f80 = var_f40
        int32_t var_f7c_6 = var_f3c
        int32_t var_f78_8 = eax_37
        goto label_6b13ef
    case 0x10
        eax_37 = data_cf6680
        var_f50.o = data_cf6668
        xmm0_56 = data_cf6678
        goto label_6b131f
    case 0x11
        count = arg3[2]
        i_5 = &data_cf65fc
        goto label_6b140f
    case 0x12
        i_6 = &arg2[0x30]
        goto label_6b1405
    case 0x13
        i_6 = &arg2[0x40]
        goto label_6b1405
    case 0x14
        int32_t ecx_6 = arg3[4]
        var_f80 = _mm_cvtepi32_ps(zx.o((ecx_6 u>> 0x10).b)) / 255f
        float var_f7c_2 = _mm_cvtepi32_ps(zx.o((ecx_6 u>> 8).b)) / 255f
        float var_f78_2 = _mm_cvtepi32_ps(zx.o(ecx_6.b)) / 255f
        float var_f74_2 = _mm_cvtepi32_ps(zx.o(ecx_6 u>> 0x18)) / 255f
        var_f80.o = _mm_mul_ps(var_f80.o, *(arg2 + 0x2e8))
    label_6b1401:
        i_6 = &var_f80
        goto label_6b1405
    case 0x15
        var_f80 = arg2[0x9e]
        int32_t var_f7c_4 = arg2[0x9f]
        int32_t var_f78_6 = arg2[0xa0]
    label_6b13ef:
        int32_t var_f74_6 = 0
        var_f80.o = var_f80.o
        goto label_6b1401
    case 0x16
        int32_t ecx_24 = arg3[4]
        var_f80 = _mm_cvtepi32_ps(zx.o((ecx_24 u>> 0x10).b)) / 255f
        float var_f7c_5 = _mm_cvtepi32_ps(zx.o((ecx_24 u>> 8).b)) / 255f
        float var_f78_7 = _mm_cvtepi32_ps(zx.o(ecx_24.b)) / 255f
        float var_f74_4 = _mm_cvtepi32_ps(zx.o(ecx_24 u>> 0x18)) / 255f
        var_f80.o = _mm_mul_ps(var_f80.o, *(arg2 + 0x2a8))
        goto label_6b1401
    case 0x17
        i_6 = &arg2[0x77]
        goto label_6b1405
    case 0x18
        i_6 = &arg2[0x67]
        goto label_6b1405
    case 0x19
        float i = 0f
        void* edx_4 = &arg2[0x94]
        i_2 = 0f
        
        do
            edx_4 += 0xc
            int64_t* ecx_11 = arg3[1] + arg4 i+ i
            int32_t xmm0_24 = *(edx_4 - 0xc)
            *ecx_11 = _mm_unpacklo_ps(*(edx_4 - 0x14), *(edx_4 - 0x10))
            ecx_11[1].d = xmm0_24
            i = i_2 i+ 0x10
            i_2 = i
        while (i s< 0x40)
        
        i.b = 1
        CookieCheckFunction(i)
        return i
    case 0x1a
        float i_1 = 0f
        void* edx_5 = &arg2[0xa0]
        i_2 = 0f
        
        do
            edx_5 += 0xc
            int64_t* ecx_16 = arg3[1] + arg4 i+ i_1
            int32_t xmm0_25 = *(edx_5 - 0xc)
            *ecx_16 = _mm_unpacklo_ps(*(edx_5 - 0x14), *(edx_5 - 0x10))
            ecx_16[1].d = xmm0_25
            i_1 = i_2 i+ 0x10
            i_2 = i_1
        while (i_1 s< 0x40)
        
        i_1.b = 1
        CookieCheckFunction(i_1)
        return i_1
    case 0x1b
        if (arg3[2] != 0x40)
            var_f94_1 = "Dx11GraphicsSetSpecialRenderState"
            var_f98 = 0x76a
            ecx_1 = "sizeof(float) * 4 * 4 == pRenderState->registerCount"
            goto label_6b1452
        
        i_2 = 0f
        float i_4
        
        do
            int32_t ecx_19 = arg3[4]
            var_f80 = _mm_cvtepi32_ps(zx.o((ecx_19 u>> 0x10).b)) / 255f
            float var_f7c_3 = _mm_cvtepi32_ps(zx.o((ecx_19 u>> 8).b)) / 255f
            float xmm0_33 = _mm_cvtepi32_ps(zx.o(ecx_19.b))
            void* eax_27 = arg3[1]
            float var_f78_5 = xmm0_33 / 255f
            float xmm0_36 = _mm_cvtepi32_ps(zx.o(ecx_19 u>> 0x18))
            i_4 = i_2
            float var_f74_3 = xmm0_36 / 255f
            float xmm0_38[0x4] = *(arg2 i+ i_4 + 0x2a8)
            i_2 = i_4 i+ 0x10
            *(eax_27 i+ i_4 + arg4) = _mm_mul_ps(var_f80.o, xmm0_38)
        while (i_4 i+ 0x10 s< 0x40)
        float (* eax_28)[0x4]
        eax_28.b = 1
        CookieCheckFunction(eax_28)
        return eax_28
    case 0x1c
        void* eax_38 = data_147abe8
        int32_t var_f74_5 = 0
        var_f80 = *(eax_38 + 0x2c)
        int32_t var_f7c_7 = *(eax_38 + 0x28)
        int32_t var_f78_9 = *(data_147b06c + 0x94)
        goto label_6b1401
    case 0x1d
        i_6 = &arg2[0xc3]
        goto label_6b1405
    case 0x1e
        i_6 = &arg2[0xc7]
        goto label_6b1405
    case 0x1f
        i_6 = &arg2[0xbf]
        goto label_6b1405
    case 0x20
        void* eax_40 = data_147b078
        int32_t var_f7c_8 = 0
        int32_t var_f78_10 = 0
        var_f80 = *(eax_40 + 0x1c) f/ *(eax_40 + 0x18)
        goto label_6b13ef
    case 0x21, 0x22, 0x23, 0x24
        i_6 = arg2[0xd4] i+ 0x6e4 + (ecx << 4)
        goto label_6b1405
    case 0x25
        count = arg3[2]
        i_5 = &data_cf6a54
        goto label_6b140f
    case 0x26
        count = arg3[2]
        i_5 = &data_cf6a40:4
        goto label_6b140f

eax_2.b = 0
CookieCheckFunction(eax_2)
return eax_2
