// 函数: _Z11ToTransformP6XAssetR15TaptipTransform
// 地址: 0xb00030
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *arg2
XAsset* x21 = arg1
int128_t v0
int32_t v0_1
int32_t v1_1
int32_t v2_1
int32_t v3_1

if (x9 == 1)
    int128_t v1
    arg1, v0, v1 = UI2Exists(zx.q(*(arg2 + 8)))
    
    if ((arg1.d & 1) != 0)
        v0_1, v1_1, v2_1, v3_1 = UI2GetRect(zx.q(*(arg2 + 8)))
    label_b000d4:
        int32_t var_30 = v0_1
        int32_t var_2c_1 = v1_1
        int32_t var_28_1 = v2_1
        int32_t var_24_1 = v3_1
        arg1, v0, v1 = TaptipRelativeTransform(&var_30, x21, zx.q(*(arg2 + 0xc)))
        int128_t var_50
        *(arg2 + 0x10) = var_50
        int128_t var_40
        *(arg2 + 0x20) = var_40
else
    if (x9 != 0)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return TaptipDismiss() __tailcall
    
    int32_t x8 = *(arg2 + 4)
    
    if (x8 != 0)
        uint64_t x9_1 = zx.q(x8.w)
        
        if (x9_1.d u< *(gDomClient + 0x205e8))
            int64_t x10_1 = *(gDomClient + 0x205e0)
            
            if (*(x10_1 + x9_1 * 0x21d8 + 0x21d0) == x8)
                v0_1, v1_1, v2_1, v3_1 =
                    UI2GetRect(zx.q(*(x10_1 + x9_1 * 0x21d8 + 0x2148)), "rootContent", 0)
                goto label_b000d4
v0 = *(arg2 + 0x20)
int128_t* entry_x8
*entry_x8 = *(arg2 + 0x10)
entry_x8[1] = v0
