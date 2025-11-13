// 函数: sub_612020
// 地址: 0x612020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = data_cc8d5c
int32_t* var_2c = arg1

if (eax_2 == 0)
    sub_63b870(eax_2, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(eax_2 + 0x5068) != 0)
    int32_t edi_1 = 0
    int32_t esi_1 = 0
    int32_t i = *sub_4b9480()
    
    while (*(sub_61dad0() + esi_1 + 8) != i)
        esi_1 += 0xc
        edi_1 += 1
        
        if (esi_1 s>= 0x78)
            void* eax_6 = sub_611d90(sub_4b9480(), 0xb80ad8)
            uint32_t eax_7 = sub_64e7a0(var_2c)
            void* eax_8 = sub_665db0(eax_7, eax_6, eax_7, 0x3f800000, 0xffffffff, 0)
            CookieCheckFunction(eax_8)
            return eax_8
    
    void* eax_9 = sub_5ac120(data_171efd0)
    int32_t eax_10 = sub_67bd70(var_2c, "bg_image_placer")
    uint32_t eax_11
    
    if (eax_10 != 0)
        eax_11 = zx.d(eax_10.w)
    
    float xmm6_1[0x4]
    int128_t xmm7_1
    
    if (eax_10 == 0 || eax_11 u>= data_c23bac
            || *(eax_11 * 0x18d0 + data_c23ba8 + 0x18c8) != eax_10)
        xmm6_1 = data_bf21f8
        xmm7_1 = data_bf21e8
    else
        uint32_t eax_14 = sub_64e7a0(eax_10)
        xmm7_1 = *(eax_14 + 0x1620)
        xmm6_1 = *(eax_14 + 0x1630)
    
    void* eax_15 = data_cf65b8
    float xmm1_2 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0x55)
    float xmm2_2 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xaa)
    uint128_t xmm4_1 = zx.o(*(eax_15 + 0x18))
    float xmm3_2 = _mm_cvtepi32_ps(zx.o(*(eax_15 + 0x14)))
    float xmm4_3 = _mm_cvtepi32_ps(xmm4_1) + 0f
    float xmm3_4 = (xmm3_2 + 0f) * 0.5f
    float xmm6_3 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xff) - 0f
    float xmm4_4 = xmm4_3 * 0.5f
    int128_t var_28 = xmm7_1
    float xmm7_2 = xmm7_1 f* 1.5f
    var_28.d = xmm7_2
    float xmm6_5 = xmm6_3 * 1.5f + 0f
    float xmm1_5 = (xmm1_2 - xmm3_4) * 1.5f + xmm3_4
    float xmm0_2 = xmm7_2 f* *(eax_9 + (edi_1 << 3) + 0x507c)
    float xmm2_5 = (xmm2_2 - xmm4_4) * 1.5f + xmm4_4
    float xmm0_7 = xmm7_2 f* *(eax_9 + (edi_1 << 3) + 0x5080)
    int32_t* edi_2 = var_2c
    float xmm7_3 = xmm7_2 * 0f
    xmm6_1[1] = xmm1_5 - (xmm0_2 + xmm0_2 + xmm1_5 - xmm3_4)
    xmm6_1[2] = xmm2_5 - (xmm0_7 + xmm0_7 + xmm2_5 - xmm4_4)
    xmm6_1[3] = xmm6_5 - (xmm7_3 + xmm7_3 + xmm6_5 - 0f)
    sub_666060(sub_67bd70(edi_2, "itemTitleBg"), &var_28)
    uint32_t eax_17 = sub_64e7a0(edi_2)
    void* eax_18 = sub_665db0(eax_17, &data_be660c, eax_17, 0x3f800000, 0xffffffff, 0)
    int32_t var_44_1 = *(eax_9 + 0x5078)
    sub_666250(eax_18, &data_be6678, edi_2)
    int32_t ebx_2 = *(eax_9 + 0x50f4)
    int32_t var_48_1 = 0xffffffff
    var_2c = ((zx.d((((ebx_2 u>> 0x18) * 0xff + 0x80) u/ 0xff).b) << 8
        | zx.d(((zx.d((ebx_2 u>> 0x10).b) * 0x56 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d((ebx_2 u>> 8).b) * 0x65 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d(ebx_2.b) * 0x70 + 0x80) u/ 0xff).b)
    sub_665f50(&var_2c, &data_be6684, edi_2, &var_2c)
    int32_t var_50_1 = 0xffffffff
    int32_t ebx_4 = *(eax_9 + 0x50f4)
    var_2c = ((zx.d((((ebx_4 u>> 0x18) * 0xff + 0x80) u/ 0xff).b) << 8
        | zx.d(((zx.d((ebx_4 u>> 0x10).b) * 0x56 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d((ebx_4 u>> 8).b) * 0x65 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d(ebx_4.b) * 0x70 + 0x80) u/ 0xff).b)
    var_2c:3.b = 0
    var_2c = var_2c
    sub_665f50(&var_2c, &data_be6690, edi_2, &var_2c)
    int32_t var_58_1 = 0xffffffff
    int32_t ebx_5 = *(eax_9 + 0x50f8)
    var_2c = ((zx.d((((ebx_5 u>> 0x18) * 0xff + 0x80) u/ 0xff).b) << 8
        | zx.d(((zx.d((ebx_5 u>> 0x10).b) * 0x56 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d((ebx_5 u>> 8).b) * 0x65 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d(ebx_5.b) * 0x70 + 0x80) u/ 0xff).b)
    sub_665f50(&var_2c, &data_be669c, edi_2, &var_2c)
    int32_t ebx_6 = *(eax_9 + 0x50f8)
    int32_t var_60_1 = 0xffffffff
    var_2c = ((zx.d((((ebx_6 u>> 0x18) * 0xff + 0x80) u/ 0xff).b) << 8
        | zx.d(((zx.d((ebx_6 u>> 0x10).b) * 0x56 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d((ebx_6 u>> 8).b) * 0x65 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d(ebx_6.b) * 0x70 + 0x80) u/ 0xff).b)
    var_2c:3.b = 0
    var_2c = var_2c
    sub_665f50(&var_2c, &data_be66a8, edi_2, &var_2c)
    int32_t var_68_1 = 0xffffffff
    int32_t ebx_7 = *(eax_9 + 0x50fc)
    var_2c = ((zx.d((((ebx_7 u>> 0x18) * 0xff + 0x80) u/ 0xff).b) << 8
        | zx.d(((zx.d((ebx_7 u>> 0x10).b) * 0x56 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d((ebx_7 u>> 8).b) * 0x65 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d(ebx_7.b) * 0x70 + 0x80) u/ 0xff).b)
    sub_665f50(&var_2c, &data_be66b4, edi_2, &var_2c)
    int32_t ebx_8 = *(eax_9 + 0x50fc)
    int32_t var_70_1 = 0xffffffff
    var_2c = ((zx.d((((ebx_8 u>> 0x18) * 0xff + 0x80) u/ 0xff).b) << 8
        | zx.d(((zx.d((ebx_8 u>> 0x10).b) * 0x56 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d((ebx_8 u>> 8).b) * 0x65 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d(ebx_8.b) * 0x70 + 0x80) u/ 0xff).b)
    var_2c:3.b = 0
    var_2c = var_2c
    sub_665f50(&var_2c, &data_be66c0, edi_2, &var_2c)
    int32_t ebx_9 = *(eax_9 + 0x5100)
    var_2c = ((zx.d((((ebx_9 u>> 0x18) * 0xff + 0x80) u/ 0xff).b) << 8
        | zx.d(((zx.d((ebx_9 u>> 0x10).b) * 0x56 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d((ebx_9 u>> 8).b) * 0x65 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d(ebx_9.b) * 0x70 + 0x80) u/ 0xff).b)
    int32_t var_78_1 = 0xffffffff
    sub_665f50(&var_2c, &data_be66cc, edi_2, &var_2c)
    int32_t ebx_10 = *(eax_9 + 0x5100)
    int32_t var_40_1 = 0xffffffff
    var_2c = ((zx.d((((ebx_10 u>> 0x18) * 0xff + 0x80) u/ 0xff).b) << 8
        | zx.d(((zx.d((ebx_10 u>> 0x10).b) * 0x56 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d((ebx_10 u>> 8).b) * 0x65 + 0x80) u/ 0xff).b)) << 8
        | zx.d(((zx.d(ebx_10.b) * 0x70 + 0x80) u/ 0xff).b)
    var_2c:3.b = 0
    var_2c = var_2c
    eax_2 = sub_665f50(&var_2c, &data_be66d8, edi_2, &var_2c)

CookieCheckFunction(eax_2)
return eax_2
