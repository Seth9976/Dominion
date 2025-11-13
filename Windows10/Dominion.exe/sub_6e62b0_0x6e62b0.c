// 函数: sub_6e62b0
// 地址: 0x6e62b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float var_a8
uint32_t result = sub_6e7c30(&var_a8, arg2, arg3, &var_a8)
int32_t* var_60
int32_t* ecx = var_60

if (ecx != 0)
    void* esi_2 = arg2 * 0x68 + arg3[0x1a]
    int32_t* eax_3 = *(esi_2 + 0x58)
    
    if (eax_3 != 0)
        ecx = eax_3
    
    void var_68
    uint32_t var_ac = sub_6398e0(&var_68, &arg3[0x18])
    uint32_t eax_5 = sub_6398e0(esi_2 + 0x60, &var_ac)
    uint32_t ecx_3 = zx.d(arg3[0x19].b)
    char edx_2 = -1
    uint32_t ebx_1 = zx.d(*(arg3 + 0x66))
    uint32_t var_bc = eax_5
    char var_64
    uint32_t eax_7 = zx.d(var_64) + ecx_3
    uint32_t ecx_5 = zx.d(*(arg3 + 0x67))
    char var_63
    var_ac = zx.d(*(arg3 + 0x65)) + zx.d(var_63)
    char var_62
    uint32_t ebx_2 = ebx_1 + zx.d(var_62)
    char var_61
    uint32_t ecx_6 = ecx_5 + zx.d(var_61)
    char ecx_7 = -1
    
    if (ecx_6 u< 0xff)
        edx_2 = ecx_6.b
    
    uint32_t ebx_3 = var_ac
    
    if (ebx_2 u< 0xff)
        ecx_7 = ebx_2.b
    
    char ecx_8 = -1
    
    if (ebx_3 u< 0xff)
        ecx_8 = ebx_3.b
    
    char ecx_10 = -1
    
    if (eax_7 u< 0xff)
        ecx_10 = eax_7.b
    
    result = eax_5 u>> 0x18
    uint32_t var_b8_1 = ((zx.d(edx_2) << 8 | zx.d(ecx_7)) << 8 | zx.d(ecx_8)) << 8 | zx.d(ecx_10)
    
    if (result.b != 0)
        float xmm4_1 = arg4[1]
        float xmm7_1 = *arg4
        float var_94
        float xmm6_2 = arg4[5] f* var_94
        float var_74
        float xmm2_2 = arg4[1] f* var_74
        float var_a4
        float xmm3_4 = var_a8 * xmm7_1 + xmm4_1 * var_a4 f+ arg4[3]
        float xmm3_7 = arg4[5] f* var_a4 + arg4[4] f* var_a8
        float var_a0
        float var_2c = var_a0
        int32_t var_9c
        int32_t var_28_1 = var_9c
        float xmm3_8 = xmm3_7 f+ arg4[7]
        float var_98
        float xmm6_3 = xmm6_2 + arg4[4] f* var_98
        int32_t var_90
        int32_t var_24_1 = var_90
        int32_t var_8c
        int32_t var_20_1 = var_8c
        float var_84
        float xmm4_3 = arg4[5] f* var_84
        var_ac = var_98 * xmm7_1 + xmm4_1 * var_94 f+ arg4[3]
        float xmm6_4 = xmm6_3 f+ arg4[7]
        float var_88
        float xmm5_4 = var_88 * xmm7_1 + xmm4_1 * var_84 f+ arg4[3]
        float xmm4_5 = xmm4_3 + arg4[4] f* var_88 f+ arg4[7]
        int32_t var_80
        int32_t var_1c_1 = var_80
        float var_78
        float xmm3_16 = var_78 * xmm7_1 + xmm2_2 f+ arg4[3]
        int32_t var_7c
        int32_t var_18_1 = var_7c
        int32_t var_70
        int32_t var_14_1 = var_70
        int32_t var_6c
        int32_t var_10_1 = var_6c
        float xmm7_5 = arg4[5] f* var_74 + arg4[4] f* var_78 f+ arg4[7]
        void* eax_21 = data_147abe4
        float xmm2_3 = *(eax_21 + 0x20)
        float xmm1_1 = *(eax_21 + 0x24)
        float var_4c = xmm3_4 + xmm2_3
        float var_48_1 = xmm1_1 + xmm3_8
        float var_44_1 = var_ac + xmm2_3
        float var_40_1 = xmm6_4 + xmm1_1
        float var_3c_1 = xmm5_4 + xmm2_3
        float var_38_1 = xmm4_5 + xmm1_1
        float var_34_1 = xmm2_3 + xmm3_16
        float var_30_1 = xmm1_1 + xmm7_5
        result = sub_6867a0(&var_bc, &var_2c, &var_4c, &var_bc, 0, ecx, arg3[0x21])

CookieCheckFunction(result)
return result
