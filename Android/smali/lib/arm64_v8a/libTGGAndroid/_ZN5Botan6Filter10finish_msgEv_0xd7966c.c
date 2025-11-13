// 函数: _ZN5Botan6Filter10finish_msgEv
// 地址: 0xd7966c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int64_t result = (*(*entry_x0 + 0x18))()
int64_t x9 = entry_x0[4]
int64_t x8_2 = entry_x0[5]

if (x8_2 != x9)
    int64_t i = 0
    
    do
        result = *(x9 + (i << 3))
        
        if (result != 0)
            result = Botan::Filter::finish_msg()
            x9 = entry_x0[4]
            x8_2 = entry_x0[5]
        
        i += 1
    while (i != (x8_2 - x9) s>> 3)

return result
