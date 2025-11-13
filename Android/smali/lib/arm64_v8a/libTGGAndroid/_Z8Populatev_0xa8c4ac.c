// 函数: _Z8Populatev
// 地址: 0xa8c4ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = 0
int32_t x27 = 0
int64_t* result

while (true)
    CardsSupplyTops(4, 0xffffffff)
    struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Populate()::$_30, std::__ndk1::allocator<Populate()::$_30>, bool (CardID)>::VTable
        ** result_1
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    result_1, v0_1, v1_1, v2_1, v3_1 = operator new(0x80)
    int128_t var_d0
    *(result_1 + 8) = var_d0
    int128_t var_c0
    *(result_1 + 0x18) = var_c0
    int128_t var_b0
    *(result_1 + 0x28) = var_b0
    *result_1 = &_vtable_for_std::__ndk1::__function::__func<Populate()::$_30, std::__ndk1::allocator<Populate()::$_30>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
    result_1[0xf].d = x20.d
    int128_t var_a0
    *(result_1 + 0x38) = var_a0
    int128_t var_90
    *(result_1 + 0x48) = var_90
    int128_t var_80
    *(result_1 + 0x58) = var_80
    int128_t var_70
    *(result_1 + 0x68) = var_70
    void var_d90
    int32_t var_d58
    FilterCards(&var_d90, &var_d58, nullptr)
    result = result_1
    
    if (&var_d90 == result)
        result = (*(*result + 0x20))()
    else if (result != 0)
        result = (*(*result + 0x28))()
    
    int32_t var_d8
    
    if (var_d8 == 0)
        break
    
    int32_t x19_1
    
    if ((x27 & 1) != 0)
        x19_1 = var_d58
        x27 = 1
    else
        int128_t var_1a50
        __builtin_memset(&var_1a50, 0, 0x30)
        var_1a50.d = 0xd5
        int128_t var_1a40_1
        var_1a40_1:0xc.d = 0
        int128_t var_1a30_1
        var_1a30_1:8.q = 0
        int64_t var_1a20_1 = 0
        ChooseCardsRange(&var_d58, 0, 1, 7, &var_1a50, 0xc, 1, 0)
        int32_t var_d98
        void* x8_7
        void var_1a18
        
        if (var_d98 == 0)
            x8_7 = &var_d58
        else
            x8_7 = &var_1a18
        x19_1 = *x8_7
        x27 = var_d98 == 0 ? 1 : 0
    
    GainCard(zx.q(x19_1), 0x476, 0, 0, 4)
    *(&var_d0 + (x20 << 2)) = BoardPileSource(zx.q(x19_1))
    x20 += 1

return result
