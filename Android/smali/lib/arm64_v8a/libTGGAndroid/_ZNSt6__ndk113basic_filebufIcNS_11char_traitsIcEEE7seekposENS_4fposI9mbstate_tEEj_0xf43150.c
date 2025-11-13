// 函数: _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj
// 地址: 0xf43150
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result

if (*(arg1 + 0x78) == 0)
    result = 0
else
    void* x21_1 = arg1
    result = arg2
    off_t entry_offset
    
    if ((*(*arg1 + 0x30))() != 0)
        result = 0
    else if (fseeko(*(x21_1 + 0x78), entry_offset, 0) == 0)
        *(x21_1 + 0x88) = result
    else
        result = 0

return result
