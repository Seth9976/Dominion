// 函数: _Z7Replacev
// 地址: 0xa84378
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(
    vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
    0x10)* result = TrashOne(9, 0)

if (result.d != 0)
    int32_t var_18 = Cost(result)
    result = GainUpTo(zx.q(operator+(&var_18, 2)), 0x476, 0)
    
    if (result.d != 0)
        int32_t x19_1 = result.d
        int32_t x0_4 = CardIs(result, 4)
        int32_t x0_6
        
        if ((x0_4 & 1) == 0)
            x0_6 = CardIs(zx.q(x19_1), 2)
        
        if (((x0_4 & 1) != 0 || (x0_6 & 1) != 0) && (CardIsWhereGained(zx.q(x19_1)) & 1) != 0)
            MoveToTopDeck(zx.q(x19_1), zx.q(CardGainedToWhere(zx.q(x19_1))), 0xb)
        
        result = CardIs(zx.q(x19_1), 8)
        
        if ((result.d & 1) != 0)
            void* __offset(
                vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
                0x10) var_50 = _vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>
                + 0x10
            int64_t (* const var_48_1)() = GainCurse
            void* __offset(
                vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
                0x10)* result_1 = &var_50
            OtherPlayers(&var_50)
            result = result_1
            
            if (&var_50 == result)
                return (*(*result + 0x20))()
            
            if (result != 0)
                return (*(*result + 0x28))()

return result
