// 函数: _ZNKSt6__ndk17collateIcE10do_compareEPKcS3_S3_S3_
// 地址: 0x10b090c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int64_t entry_x4

if (arg4 != entry_x4)
    while (true)
        if (arg3 != arg2)
            uint32_t x8_1 = zx.d(*arg2)
            uint32_t x9_1 = zx.d(*arg4)
            
            if (x8_1 u>= x9_1)
                if (x9_1 u< x8_1)
                    return 1
                
                arg4 = &arg4[1]
                arg2 = &arg2[1]
                
                if (entry_x4 == arg4)
                    break
                
                continue
        
        return 0xffffffff

return zx.q(arg2 != arg3 ? 1 : 0)
