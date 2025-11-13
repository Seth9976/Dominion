// 函数: _Z9WitchsHutv
// 地址: 0xa7dd48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(4, 0, 0, nullptr)
void* __offset(
    vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
    0x10)* result = DiscardExactly(2, 0xe, 6, 0, 5)
int32_t var_28

if (var_28 == 2)
    int32_t var_ca8
    result = CardIs(zx.q(var_ca8), 4)
    
    if ((result.d & 1) != 0)
        int32_t var_ca4
        result = CardIs(zx.q(var_ca4), 4)
        
        if ((result.d & 1) != 0)
            void* __offset(
                vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
                0x10) var_ce0 = _vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>
                + 0x10
            int64_t (* const var_cd8_1)() = GainCurse
            void* __offset(
                vtable_for_std::__ndk1::__function::__func<CardID (*)(), std::__ndk1::allocator<CardID (*)()>, void ()>, 
                0x10)* result_1 = &var_ce0
            OtherPlayers(&var_ce0)
            result = result_1
            
            if (&var_ce0 == result)
                return (*(*result + 0x20))()
            
            if (result != 0)
                return (*(*result + 0x28))()

return result
