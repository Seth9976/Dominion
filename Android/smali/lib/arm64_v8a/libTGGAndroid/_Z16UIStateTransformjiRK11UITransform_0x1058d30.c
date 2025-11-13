// 函数: _Z16UIStateTransformjiRK11UITransform
// 地址: 0x1058d30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UIState* x20 = *(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458)
void var_190c
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v4
v0, v1, v2, v3, v4 = memset(&var_190c, 0, 0x189c)
int32_t var_70 = 1
int128_t var_1930 = *(arg3 + 0x40)
int128_t var_1920 = *(arg3 + 0x50)
v4 = *(arg3 + 0x10)
int128_t var_1950 = *(arg3 + 0x20)
int128_t var_1940 = *(arg3 + 0x30)
int32_t var_1910 = 0xffffffff
int128_t var_1970 = *arg3
int128_t var_1960 = v4
int64_t* x21_1 = *(x20 + 8)
int64_t* x8_1 = *x21_1

if (x8_1 == 0)
    if (x21_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21_1, false, true)
    x8_1 = *x21_1

int64_t* x23 = *x8_1

if (x23[1].d s>= 1)
    int64_t i = 0
    
    do
        int64_t x22_2 = *x23
        void* fp_2 = x22_2 + i * 0x178
        UIStateElement* result
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        int128_t v3_1
        int128_t v4_2
        int128_t v5_2
        result, v0_1, v1_1, v2_1, v3_1, v4_2, v5_2 = UIStateElementGet(x20, i.d, *(fp_2 + 8))
        int128_t var_1980
        
        if (*(fp_2 + 4) == 6)
            int64_t fp_1 = sx.q(var_70)
            UIElement* x22_1 = x22_2 + i * 0x178
            void* x8_5 = &var_1970 + muls.dp.d(fp_1.d - 1, 0x64)
            v1_1 = *(x8_5 + 0x10)
            v2_1 = *(x8_5 + 0x40)
            v3_1 = *(x8_5 + 0x50)
            int128_t var_1a30 = *x8_5
            int128_t var_1a20_1 = v1_1
            int128_t var_19f0_1 = v2_1
            int128_t var_19e0_1 = v3_1
            int128_t var_1a10_1 = *(x8_5 + 0x20)
            int128_t var_1a00_1 = *(x8_5 + 0x30)
            int128_t v0_2
            int128_t v1_2
            int128_t v2_2
            int128_t v3_2
            int128_t v4_1
            int128_t v5_1
            v0_2, v1_2, v2_2, v3_2, v4_1, v5_1 = UIElementGroupTransform(x22_1, result, &var_1a30)
            int32_t x8_6 = *(x22_1 + 0x68)
            v5_1 = var_1980
            int128_t* x10_1 = &var_1970 + fp_1 * 0x64
            var_70 = fp_1.d + 1
            int128_t var_19d0
            *x10_1 = var_19d0
            int128_t var_19c0
            x10_1[1] = var_19c0
            int128_t var_1990
            x10_1[4] = var_1990
            x10_1[5] = v5_1
            int128_t var_19b0
            x10_1[2] = var_19b0
            int128_t var_19a0
            x10_1[3] = var_19a0
            x10_1[6].d = x8_6
        else
            uint64_t x8_9 = zx.q(var_70)
            
            if (i == zx.q(arg2))
                void* x8_11 = &var_1970 + muls.dp.d(x8_9.d - 1, 0x64)
                v1_1 = *(x8_11 + 0x10)
                v2_1 = *(x8_11 + 0x40)
                v3_1 = *(x8_11 + 0x50)
                v4_2 = *(x8_11 + 0x20)
                v5_2 = *(x8_11 + 0x30)
                int128_t* entry_x8
                *entry_x8 = *x8_11
                entry_x8[1] = v1_1
                entry_x8[4] = v2_1
                entry_x8[5] = v3_1
                entry_x8[2] = v4_2
                entry_x8[3] = v5_2
                return result
            
            if (x8_9.d s>= 1)
                int64_t j = x8_9 + 1
                int32_t* x10_2 = &var_1980:0xc + x8_9 * 0x64
                
                do
                    int32_t x11_1 = *x10_2
                    
                    if ((x11_1 & 0x80000000) == 0)
                        if (x11_1 != 1)
                            *x10_2 = x11_1 - 1
                        else
                            x8_9 = zx.q(x8_9.d - 1)
                    
                    j -= 1
                    x10_2 -= 0x64
                while (j s> 1)
                
                var_70 = x8_9.d
        i += 1
    while (i s< sx.q(x23[1].d))

pthread_kill(pthread_self(), 6)
uint32_t x0_7
int32_t x1_3
UITransform* x2_2
Vec2* x3
x0_7, x1_3, x2_2, x3 = XNoReturn()
return UIStateTransformItemCenter(x0_7, x1_3, x2_2, x3) __tailcall
