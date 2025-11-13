// 函数: _Z14Smugglers_Hintv
// 地址: 0xacbac4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGame* x20 = *(DomGetContext() + 8)
void* x8 = x20 + muls.dp.d(PlayerRight(), 0x5a30)
int32_t var_cb0[0x1b0]
int32_t x0_3 = ToCardTypes(x20, &var_cb0, x8 + 0x18e98, *(x8 + 0x181b4))

if (x0_3 == 0)
    return 1

CardsSupplyTops(4, 0xffffffff)
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Smugglers_Hint()::$_6, std::__ndk1::allocator<Smugglers_Hint()::$_6>, bool (CardID)>::VTable
    * const var_1970 = &_vtable_for_std::__ndk1::__function::__func<Smugglers_Hint()::$_6, std::__ndk1::allocator<Smugglers_Hint()::$_6>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<Smugglers_Hint()::$_6, std::__ndk1::allocator<Smugglers_Hint()::$_6>, bool (CardID)>::VTable
    * const* var_1950_1 = &var_1970
CardID var_1938
FilterCards(&var_1970, &var_1938, nullptr)

if (&var_1970 == var_1950_1)
    (*var_1950_1)->vFunc_4()
else if (var_1950_1 != 0)
    (*var_1950_1)->j_operator delete()

int32_t var_25f0[0x170]
int32_t var_cb8
int32_t x0_8 = ToCardTypes(x20, &var_25f0, &var_1938, var_cb8)
int32_t x9_1

if (x0_3 s< 1)
    x9_1 = 0
else if (x0_8 s<= 0)
    int32_t i_4
    
    if (x0_3 u>= 2)
        i_4 = x0_3 & 0xfffffffe
        int32_t i_3 = i_4
        int32_t i
        
        do
            i = i_3
            i_3 -= 2
        while (i != 2)
        
        if (x0_3 != i_4)
            goto label_acbc4c
    else
        i_4 = 0
    label_acbc4c:
        int32_t i_2 = x0_3 - i_4
        int32_t i_1
        
        do
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    x9_1 = 0
else
    int32_t x8_4 = var_25f0[0]
    int32_t x14_1 = var_cb0[0]
    
    if (x8_4 != x14_1)
        int64_t x10_1 = 0
        uint64_t x11_1 = zx.q(x0_8)
        uint64_t x12_1 = zx.q(x0_3)
        x9_1 = 1
        int64_t x17_1 = 1
        
        while (true)
            int64_t x16_1 = x17_1
            
            if (x11_1 != x17_1)
                x17_1 = x16_1 + 1
                
                if (var_25f0[x16_1] != x14_1)
                    continue
            
            if (x16_1 u< x11_1)
                break
            
            x10_1 += 1
            x9_1 = x10_1 u< x12_1 ? 1 : 0
            
            if (x10_1 == x12_1)
                break
            
            x14_1 = var_cb0[x10_1]
            
            if (x8_4 == x14_1)
                break
            
            x17_1 = 1
    else
        x9_1 = 1

return zx.q(not.d(x9_1)) & 1
