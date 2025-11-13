// 函数: _Z16GetInheritedDataR3UI2S0_R16UI2InheritedData
// 地址: 0x1021ae4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
UI2& x20 = arg1
int32_t x8_1 = *(arg1 + 0x167c)
int128_t var_210
int128_t var_200
char const* const x0_6
int128_t v0
int128_t v1
int128_t v2
int128_t v3

if (x8_1 == 2)
    v0 = *(x20 + 0x16d0)
    v2 = *(x20 + 0x16b0)
    *(arg3 + 0x10) = *(x20 + 0x16c0)
    *(arg3 + 0x20) = v0
    *arg3 = v2
    v0 = *(x20 + 0x1710)
    v2 = *(x20 + 0x16f0)
    v3 = *(x20 + 0x16e0)
    *(arg3 + 0x50) = *(x20 + 0x1700)
    *(arg3 + 0x60) = v0
    *(arg3 + 0x30) = v3
    *(arg3 + 0x40) = v2
    v0 = *(x20 + 0x1750)
    v2 = *(x20 + 0x1730)
    v3 = *(x20 + 0x1720)
    *(arg3 + 0x90) = *(x20 + 0x1740)
    *(arg3 + 0xa0) = v0
    *(arg3 + 0x70) = v3
    *(arg3 + 0x80) = v2
    v0 = *(x20 + 0x1780)
    v1 = *(x20 + 0x1770)
    v2 = *(x20 + 0x1760)
    *(arg3 + 0xe0) = *(x20 + 0x1790)
    *(arg3 + 0xc0) = v1
    *(arg3 + 0xd0) = v0
    *(arg3 + 0xb0) = v2
    int128_t v0_2
    int128_t v1_2
    arg1, v0_2, v1_2 = UI2TableTransform(x20, *(arg2 + 0x1740), &var_200, &var_210, false)
    int128_t var_c0
    *arg3 = var_c0
    int128_t var_b0
    *(arg3 + 0x10) = var_b0
    
    if (*gTest == 0)
        goto label_1021d98
    
    XString::GetString()
    XString::GetString()
    *(x20 + 0x1724)
    x0_6 = "%s %s tbl layer %d"
label_1021d8c:
    XTrace(x0_6)
label_1021d98:
    
    if (*(x22 + 0x28) == x8)
        return 
else
    if (x8_1 != 0xa)
        v0 = *(x20 + 0x16d0)
        v2 = *(x20 + 0x16b0)
        *(arg3 + 0x10) = *(x20 + 0x16c0)
        *(arg3 + 0x20) = v0
        *arg3 = v2
        v0 = *(x20 + 0x1710)
        v2 = *(x20 + 0x16f0)
        v3 = *(x20 + 0x16e0)
        *(arg3 + 0x50) = *(x20 + 0x1700)
        *(arg3 + 0x60) = v0
        *(arg3 + 0x30) = v3
        *(arg3 + 0x40) = v2
        v0 = *(x20 + 0x1750)
        v2 = *(x20 + 0x1730)
        v3 = *(x20 + 0x1720)
        *(arg3 + 0x90) = *(x20 + 0x1740)
        *(arg3 + 0xa0) = v0
        *(arg3 + 0x70) = v3
        *(arg3 + 0x80) = v2
        v0 = *(x20 + 0x1780)
        v1 = *(x20 + 0x1770)
        v2 = *(x20 + 0x1760)
        *(arg3 + 0xe0) = *(x20 + 0x1790)
        *(arg3 + 0xc0) = v1
        *(arg3 + 0xd0) = v0
        *(arg3 + 0xb0) = v2
        
        if (*gTest == 0)
            goto label_1021d98
        
        XString::GetString()
        XString::GetString()
        *(x20 + 0x1724)
        x0_6 = "%s %s layer %d"
        goto label_1021d8c
    
    int128_t var_1a8
    int128_t v0_1
    int128_t v1_1
    float128 v2_1
    float128 v3_1
    int128_t v4_1
    int128_t v5_1
    arg1, v0_1, v1_1, v2_1, v3_1, v4_1, v5_1 = HasSpineSlotBinding(x20, arg2, &var_1a8)
    
    if ((arg1.d & 1) == 0)
        v0_1 = *(x20 + 0x16d0)
        v2_1 = *(x20 + 0x16b0)
        *(arg3 + 0x10) = *(x20 + 0x16c0)
        *(arg3 + 0x20) = v0_1
        *arg3 = v2_1
        v0_1 = *(x20 + 0x1710)
        v2_1 = *(x20 + 0x16f0)
        v3_1 = *(x20 + 0x16e0)
        *(arg3 + 0x50) = *(x20 + 0x1700)
        *(arg3 + 0x60) = v0_1
        *(arg3 + 0x30) = v3_1
        *(arg3 + 0x40) = v2_1
        v0_1 = *(x20 + 0x1750)
        v2_1 = *(x20 + 0x1730)
        v3_1 = *(x20 + 0x1720)
        *(arg3 + 0x90) = *(x20 + 0x1740)
        *(arg3 + 0xa0) = v0_1
        *(arg3 + 0x70) = v3_1
        *(arg3 + 0x80) = v2_1
        v0_1 = *(x20 + 0x1780)
        v1_1 = *(x20 + 0x1770)
        v2_1 = *(x20 + 0x1760)
        *(arg3 + 0xe0) = *(x20 + 0x1790)
        *(arg3 + 0xc0) = v1_1
        *(arg3 + 0xd0) = v0_1
        *(arg3 + 0xb0) = v2_1
        
        if (*(x22 + 0x28) == x8)
            return 
    else
        v0_1 = *(x20 + 0x16c0)
        var_200 = *(x20 + 0x16b0)
        int128_t var_1f0_1 = v0_1
        int32_t x9 = *(x20 + 0x1700)
        int128_t var_1e0_1 = *(x20 + 0x16d0)
        float128 var_1d0_1 = *(x20 + 0x16e0)
        int128_t var_1c0_1 = *(x20 + 0x16f0)
        int32_t x9_1 = *(x20 + 0x1794)
        v5_1 = *(x20 + 0x1764)
        float128 var_70_1 = *(x20 + 0x1774)
        int128_t var_60_1 = *(x20 + 0x1784)
        int128_t var_90_1 = *(x20 + 0x1754)
        int128_t var_b0_1 = *(x20 + 0x1734)
        int128_t var_a0_1 = *(x20 + 0x1744)
        float128 var_c0_1 = *(x20 + 0x1724)
        v2_1 = *(x20 + 0x1704)
        v4_1 = *(x20 + 0x1714)
        var_200 = var_1a8
        v1_1 = var_200
        int128_t var_154
        float128 v2_2 = vmulq_f32(var_154, v2_1, 0)
        var_210 = v4_1
        *arg3 = v1_1
        int128_t var_198
        *(arg3 + 0x10) = var_198
        *(arg3 + 0x54) = v2_2
        *(arg3 + 0x30) = var_1d0_1
        *(arg3 + 0x40) = var_1c0_1
        *(arg3 + 0x50) = x9
        *(arg3 + 0x20) = var_1e0_1
        *(arg3 + 0x64) = var_210
        *(arg3 + 0xb4) = v5_1
        *(arg3 + 0xe4) = x9_1
        *(arg3 + 0xd4) = var_60_1
        *(arg3 + 0xc4) = var_70_1
        *(arg3 + 0xa4) = var_90_1
        *(arg3 + 0x94) = var_a0_1
        *(arg3 + 0x84) = var_b0_1
        *(arg3 + 0x74) = var_c0_1
        
        if (*(x22 + 0x28) == x8)
            return 
__stack_chk_fail()
noreturn
