// 函数: _Z25AbilityAlwaysCommuteCheckR7DomGame9AbilityID
// 地址: 0xbd0f20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x1 = arg2 & 0xffffffff
int32_t x8_1

if ((arg2 & 0x30) == 0)
    x8_1 = *(AbilityGetRegistered(arg1, x1) + 0x94)
    
    if (x8_1 != 0x38)
    label_bd0f68:
        
        if (x8_1 != 0x44)
            return 0
else
    x8_1 = *(AbilityGetStatic(arg1, x1) + 0xb8)
    
    if (x8_1 != 0x38)
        goto label_bd0f68
return 1
