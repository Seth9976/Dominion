// 函数: sub_6fc730
// 地址: 0x6fc730
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int64_t var_4c

if (sub_63c270(&var_4c) != 0)
    int64_t var_5c_1 = 0
    int32_t* var_48_1 = nullptr
    float var_54_1 = 0f
    float var_24 = 0f
    float var_20_1 = 0f
    float var_1c_1 = 0f
    uint32_t ebx_1 = 0
    int32_t __saved_ebp
    float xmm1_1[0x4] = 1f / sub_4ac580(&__saved_ebp, 3f)
    int32_t* i = 0x70
    float var_18_1 = xmm1_1
    int128_t xmm0_3 = var_24.o
    int64_t xmm1_2 = _mm_unpacklo_ps(xmm1_1, xmm1_1)
    var_24.o = xmm0_3
    
    do
        int32_t ecx_1 = *(i + data_147dec8)
        
        if (ecx_1 != 0)
            int32_t* eax_4 = sub_6db490(ecx_1)
            int32_t* var_50
            
            if (sub_6da9e0(&var_50, &var_24, eax_4, &var_50) != 0
                    && sub_6daff0(&var_50, &var_24, eax_4, &var_50) != 0)
                int32_t* xmm1_3 = var_50
                
                if (ebx_1 == 0 || not(var_48_1 f<= xmm1_3))
                    ebx_1 = eax_4[0x1a]
                    var_48_1 = xmm1_3
                    var_5c_1.d = xmm1_3 f* var_18_1 + var_24
                    var_5c_1:4.d = xmm1_3 f* xmm1_2.d + var_20_1
                    var_54_1 = xmm1_3 f* xmm1_2:4.d + var_1c_1
        
        i = &i[1]
    while (i s< 0x7c)
    
    float esi_1
    
    if (ebx_1 != 0)
        esi_1 = var_54_1
        var_4c = var_5c_1
    label_6fc8bb:
        int32_t i_1 = sub_6db490(ebx_1)[0x1a]
        int32_t* eax_12 = data_147dec8
        
        if (*data_147decc == 1
            && (eax_12[0x1c] == i_1 || eax_12[0x1d] == i_1 || eax_12[0x1e] == i_1))
        label_6fc916:
            
            if (arg1 != 0)
                *arg1 = var_4c
                arg1[1].d = esi_1
            
            CookieCheckFunction(ebx_1)
            return ebx_1
        
        int32_t* eax_14 = *(*eax_12 + (((i_1 s>> 4 | i_1) & eax_12[1]) << 2))
        
        if (eax_14 != 0)
            while (i_1 != *eax_14)
                eax_14 = eax_14[5]
                
                if (eax_14 == 0)
                    CookieCheckFunction(eax_14)
                    return eax_14
            
            if (eax_14 != 0xfffffffc)
                goto label_6fc916
    else
        int128_t var_44 = zx.o(0)
        var_44:0xc.b = 1
        int128_t var_34_1 = zx.o(0)
        
        if (sub_6db2f0(&var_24, &var_44) != 0)
            ebx_1 = var_34_1:0xc.d
            esi_1 = var_34_1:8.d
            var_4c = var_34_1.q
            
            if (ebx_1 != 0)
                goto label_6fc8bb

CookieCheckFunction(0)
return 0
