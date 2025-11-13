// 函数: sub_646580
// 地址: 0x646580
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* edi = arg8
int32_t ecx = arg10
void* var_74 = arg2
int32_t var_68 = ecx

if (edi != 0)
    void var_34
    char eax_3
    eax_3, arg2 = sub_6a1470(&var_34, arg2, edi, &var_34)
    
    if (eax_3 != 0)
        var_74 = &var_34
        
        if (edi[1] != 3)
            sub_63b870(&var_34, &data_801800, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                "C:\x\ax2017\Engine\Texture.h", 0x89, "TextureGetDef")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t* eax_5
        eax_5, arg2 = sub_5af880(edi)
        edi = *(*eax_5 + 0x28)
    
    ecx = var_68

arg2.b = data_147aba0
int32_t var_64 = 0
float var_70

if (data_cf6a6c != 1)
    if (data_147abbc != 0)
        var_70 = data_147abc0
        var_64 = data_147abc4
        goto label_64669c
    
    float eax_8 = data_cf6680
    int128_t var_60_1 = data_cf6668
    int64_t xmm0_3 = data_cf6678
    float xmm1_1 = xmm0_3.d
    float xmm2_1 = xmm0_3:4.d
    
    if (arg2.b != 0)
        float xmm2_2 = xmm2_1 f- data_147aba8
        float xmm1_2 = xmm1_1 f- data_147aba4
        float xmm0_5 = eax_8 f- data_147abac
        var_70 = xmm2_2 * xmm2_2 + xmm1_2 * xmm1_2 + xmm0_5 * xmm0_5
        goto label_64669c
    
    float xmm2_6 = xmm2_1 - arg6[1]
    float xmm1_4 = xmm1_1 - *arg6
    float xmm0_7 = eax_8 - arg6[2]
    var_70 = xmm2_6 * xmm2_6 + xmm1_4 * xmm1_4 + xmm0_7 * xmm0_7
label_646724:
    int32_t* eax_15 = sub_643950()
    eax_15[0x13] = edi
    eax_15[0x14] = arg9
    *eax_15 = 1
    eax_15[0x12] = var_68
    __builtin_memcpy(&eax_15[2], 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
    "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x40)
    eax_15[0x51] = data_1476b44
    eax_15[0x52] = 1
    eax_15[0x53] = sub_643ae0()
    eax_15[0x54] = sub_643b50()
    eax_15[0x57] = 0
    eax_15[0x55] = var_70
    eax_15[0x56] = var_64
else
    var_70 = 0f
label_64669c:
    
    if (arg2.b == 0)
        goto label_646724
    
    int32_t eax_9 = data_e76b40
    
    if (eax_9 == 0 || (&data_cf69c0)[eax_9 * 0x60] != 1 || data_1476b44 s>= 0x7fff
            || *(eax_9 * 0x180 + 0xcf6a08) != ecx || *(eax_9 * 0x180 + 0xcf6a0c) != edi)
        goto label_646724
    
    if ((&data_cf6b04)[eax_9 * 0x18]:8 != sub_643ae0())
        goto label_646724
    
    data_e76b40
    (&data_cf6b04)[data_e76b40 * 0x18]:4 += 1
int32_t eax_20 = data_1476b44
data_1476b44 = eax_20 + 1
int32_t esi_7 = eax_20 * 0xc0
*(esi_7 + 0xe76b44) = *arg3
*(esi_7 + 0xe76b4c) = arg3[1].d
int32_t eax_25 = arg7[1].d
*(esi_7 + 0xe76b50) = *arg7
*(esi_7 + 0xe76b58) = eax_25
int32_t edx = *arg4
*(esi_7 + 0xe76b5c) = (((((edx u>> 0x18 << 8) + zx.d(edx.b)) << 8) + zx.d((edx u>> 8).b)) << 8)
    + zx.d((edx u>> 0x10).b)
int32_t ecx_14 = arg4[1]
*(esi_7 + 0xe76b60) = (((((ecx_14 u>> 0x18 << 8) + zx.d(ecx_14.b)) << 8) + zx.d((ecx_14 u>> 8).b))
    << 8) + zx.d((ecx_14 u>> 0x10).b)
*(esi_7 + 0xe76b64) = *var_74
*(esi_7 + 0xe76b68) = *(var_74 + 4)
*(esi_7 + 0xe76b6c) = 0x3f800000
*(esi_7 + 0xe76b70) = 0x3f800000
*(esi_7 + 0xe76b74) = *(arg3 + 0xc)
*(esi_7 + 0xe76b7c) = *(arg3 + 0x14)
int32_t eax_41 = arg7[1].d
*(esi_7 + 0xe76b80) = *arg7
*(esi_7 + 0xe76b88) = eax_41
int32_t ecx_19

if (arg5 == 0)
    int32_t ecx_20 = *arg4
    *(esi_7 + 0xe76b8c) = (((((ecx_20 u>> 0x18 << 8) + zx.d(ecx_20.b)) << 8)
        + zx.d((ecx_20 u>> 8).b)) << 8) + zx.d((ecx_20 u>> 0x10).b)
    ecx_19 = arg4[1]
else
    int32_t ecx_17 = arg4[2]
    *(esi_7 + 0xe76b8c) = (((((ecx_17 u>> 0x18 << 8) + zx.d(ecx_17.b)) << 8)
        + zx.d((ecx_17 u>> 8).b)) << 8) + zx.d((ecx_17 u>> 0x10).b)
    ecx_19 = arg4[3]

*(esi_7 + 0xe76b90) = (((((ecx_19 u>> 0x18 << 8) + zx.d(ecx_19.b)) << 8) + zx.d((ecx_19 u>> 8).b))
    << 8) + zx.d((ecx_19 u>> 0x10).b)
*(esi_7 + 0xe76b94) = *(var_74 + 8)
*(esi_7 + 0xe76b98) = *(var_74 + 0xc)
*(esi_7 + 0xe76b9c) = 0x3f800000
*(esi_7 + 0xe76ba0) = 0x3f800000
*(esi_7 + 0xe76ba4) = arg3[3]
*(esi_7 + 0xe76bac) = arg3[4].d
int32_t eax_62 = arg7[1].d
*(esi_7 + 0xe76bb0) = *arg7
*(esi_7 + 0xe76bb8) = eax_62
int32_t ecx_26

if (arg5 == 0)
    int32_t ecx_27 = *arg4
    *(esi_7 + 0xe76bbc) = (((((ecx_27 u>> 0x18 << 8) + zx.d(ecx_27.b)) << 8)
        + zx.d((ecx_27 u>> 8).b)) << 8) + zx.d((ecx_27 u>> 0x10).b)
    ecx_26 = arg4[1]
else
    int32_t ecx_24 = arg4[4]
    *(esi_7 + 0xe76bbc) = (((((ecx_24 u>> 0x18 << 8) + zx.d(ecx_24.b)) << 8)
        + zx.d((ecx_24 u>> 8).b)) << 8) + zx.d((ecx_24 u>> 0x10).b)
    ecx_26 = arg4[5]

*(esi_7 + 0xe76bc0) = (((((ecx_26 u>> 0x18 << 8) + zx.d(ecx_26.b)) << 8) + zx.d((ecx_26 u>> 8).b))
    << 8) + zx.d((ecx_26 u>> 0x10).b)
*(esi_7 + 0xe76bc4) = *(var_74 + 0x10)
*(esi_7 + 0xe76bc8) = *(var_74 + 0x14)
*(esi_7 + 0xe76bcc) = 0x3f800000
*(esi_7 + 0xe76bd0) = 0x3f800000
*(esi_7 + 0xe76bd4) = *(arg3 + 0x24)
*(esi_7 + 0xe76bdc) = *(arg3 + 0x2c)
int32_t eax_83 = arg7[1].d
*(esi_7 + 0xe76be0) = *arg7
*(esi_7 + 0xe76be8) = eax_83
int32_t ecx_33

if (arg5 == 0)
    int32_t ecx_34 = *arg4
    *(esi_7 + 0xe76bec) = (((((ecx_34 u>> 0x18 << 8) + zx.d(ecx_34.b)) << 8)
        + zx.d((ecx_34 u>> 8).b)) << 8) + zx.d((ecx_34 u>> 0x10).b)
    ecx_33 = arg4[1]
else
    int32_t ecx_31 = arg4[6]
    *(esi_7 + 0xe76bec) = (((((ecx_31 u>> 0x18 << 8) + zx.d(ecx_31.b)) << 8)
        + zx.d((ecx_31 u>> 8).b)) << 8) + zx.d((ecx_31 u>> 0x10).b)
    ecx_33 = arg4[7]

*(esi_7 + 0xe76bf0) = (((((ecx_33 u>> 0x18 << 8) + zx.d(ecx_33.b)) << 8) + zx.d((ecx_33 u>> 8).b))
    << 8) + zx.d((ecx_33 u>> 0x10).b)
*(esi_7 + 0xe76bf4) = *(var_74 + 0x18)
*(esi_7 + 0xe76bf8) = *(var_74 + 0x1c)
*(esi_7 + 0xe76bfc) = 0x3f800000
*(esi_7 + 0xe76c00) = 0x3f800000
uint32_t result = data_147b06c
*(result + 0x28) += 1
CookieCheckFunction(result)
return result
