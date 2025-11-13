// 函数: _ZNK5Botan19XMSS_Index_Registry3getEm
// 地址: 0xecb9d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1
int64_t x9_2 = *(arg1 + 8)

if (x9_2 != x8)
    int64_t i = 0
    
    do
        int64_t entry_x1
        
        if (*(x8 + (i << 3)) == entry_x1)
            return i
        
        i += 1
    while (i u< (x9_2 - x8) s>> 3)

return -1
