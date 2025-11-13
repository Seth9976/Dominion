// 函数: _Z18AbilityGetChoiceUIR7DomGame9AbilityID
// 地址: 0xbd6e24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x8

if ((arg2 & 0x30) != 0)
    arg1 = AbilityGetStatic(arg1, arg2 & 0xffffffff)
    
    if (*(arg1 + 4) == 0 && *(arg1 + 0xc) == 5)
        __builtin_memset(entry_x8, 0, 0x30)
        *entry_x8 = 0x1d
        entry_x8[7] = arg2.d u>> 0x12
        *(entry_x8 + 0x28) = 0
        *(entry_x8 + 0x30) = 0
        return 

__builtin_memset(entry_x8, 0, 0x38)
