// 函数: _Z24ExpansionsHaveLandscapesPK11DomExpSetup
// 地址: 0xb2d08c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

for (int64_t i = 0; i != 0x200; i += 0x10)
    void* x9_3 = arg1 + i
    
    if (*(x9_3 + 8) != *(x9_3 + 0xc))
        int32_t x9_5 = *(arg1 + i)
        
        if (x9_5 != 0xd && x9_5 != 0x10)
            if (x9_5 == 0x13)
                if ((zx.d(*(arg1 + i + 4)) & 4) != 0)
                    return 1
            else if (x9_5 s> 0xa)
                return 1

return 0
