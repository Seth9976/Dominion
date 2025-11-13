// 函数: sub_7528b0
// 地址: 0x7528b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (arg2 u> 6)
    int32_t var_2c_1 = arg2
    void var_18
    sub_63bb20(&var_18, "%d")
    sub_707b20(&var_18, "Unknown attachment type: ", arg1, &var_18)
    CookieCheckFunction(0)
    return 0

int32_t* eax_3

switch (arg2)
    case 0
        eax_3 = sub_708720(arg1[3], arg4)
        
        if (eax_3 == 0)
        label_7529c7:
            sub_707b20(eax_3, "Region not found: ", arg1, arg4)
            CookieCheckFunction(0)
            return 0
        
        int32_t* eax_4 = sub_707a50(arg3)
        eax_4[0x11] = eax_3
        int32_t xmm0 = eax_3[5]
        int32_t xmm3 = eax_3[6]
        int32_t xmm1 = eax_3[7]
        int32_t xmm2 = eax_3[8]
        int32_t xmm4
        int32_t xmm5
        int32_t xmm6
        int32_t xmm7
        
        if (eax_3[0xe] == 0)
            xmm4 = xmm2
            xmm5 = xmm1
            xmm6 = xmm3
            xmm7 = xmm0
        else
            xmm4 = xmm3
            xmm5 = xmm0
            xmm6 = xmm2
            xmm7 = xmm1
        
        eax_4[0x22] = xmm7
        eax_4[0x23] = xmm2
        eax_4[0x24] = xmm0
        eax_4[0x25] = xmm6
        eax_4[0x26] = xmm5
        eax_4[0x27] = xmm3
        eax_4[0x20] = xmm1
        eax_4[0x21] = xmm4
        eax_4[0x12] = eax_3[9]
        eax_4[0x13] = eax_3[0xa]
        eax_4[0x14] = eax_3[3]
        eax_4[0x15] = eax_3[4]
        eax_4[0x16] = eax_3[0xb]
        eax_4[0x17] = eax_3[0xc]
        CookieCheckFunction(eax_4)
        return eax_4
    case 1
        int32_t* eax_22 = sub_758bd0(arg3)
        CookieCheckFunction(eax_22)
        return eax_22
    case 2, 3
        eax_3 = sub_708720(arg1[3], arg4)
        
        if (eax_3 == 0)
            goto label_7529c7
        
        int32_t* eax_12 = sub_752f80(arg3)
        eax_12[0xc] = eax_3
        eax_12[0x13] = eax_3[5]
        eax_12[0x14] = eax_3[6]
        eax_12[0x15] = eax_3[7]
        eax_12[0x16] = eax_3[8]
        eax_12[0x17] = eax_3[0xe]
        eax_12[0x18] = eax_3[0xf]
        eax_12[0xd] = eax_3[9]
        eax_12[0xe] = eax_3[0xa]
        eax_12[0xf] = eax_3[3]
        eax_12[0x10] = eax_3[4]
        eax_12[0x11] = eax_3[0xb]
        eax_12[0x12] = eax_3[0xc]
        CookieCheckFunction(eax_12)
        return eax_12
    case 4
        int32_t* eax_23 = sub_758d60(arg3)
        CookieCheckFunction(eax_23)
        return eax_23
    case 5
        int32_t* eax_24 = sub_758b50(arg3)
        CookieCheckFunction(eax_24)
        return eax_24
    case 6
        int32_t* eax_25 = sub_758a10(arg3)
        CookieCheckFunction(eax_25)
        return eax_25
