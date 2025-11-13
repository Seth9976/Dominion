// 函数: _ZN16TGGAudioInstance8getAudioEPfjj
// 地址: 0x106ced0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20

if (arg3 == 0)
    x20 = 0
else
    uint32_t x22_1 = arg3
    int64_t x23_1 = arg2
    x20 = 0
    
    while (true)
        int32_t x24_1 = x22_1 - x20
        int64_t x27_1 = x23_1 + (zx.q(x20) << 2)
        int32_t entry_x3
        int32_t x28_1
        
        if ((zx.d(*(arg1 + 0x12)) & 2) == 0)
            void* x0_3 = SoundGetDef(*(*(arg1 + 0x1f0) + 0x98))
            
            if (*(x0_3 + 0x30) != 0)
                int64_t x8_5
                
                if (*(x0_3 + 0x18) == 0)
                    x8_5 = 0x1f8
                else
                    x8_5 = 0x998
                
                x0_3 = SoundGetDef(*(*(x0_3 + 0x20) + (sx.q(*(arg1 + x8_5)) << 3)))
            
            void* x8_7 = *(x0_3 + 0x28)
            int64_t x9_2 = sx.q(arg1[0x268])
            uint64_t i_3 = zx.q(arg1[0x12])
            int32_t x25_1 = *(x8_7 + 0xa8)
            int32_t x10_1 = x25_1 - x9_2.d
            
            x28_1 = x10_1 u< x24_1 ? x10_1 : x24_1
            
            if (i_3.d s< 1)
                goto label_106d030
            
            int32_t x26_1 = 0
            int32_t x23_2 = 0
            int64_t x22_2 = *(x8_7 + 0xa0) + (x9_2 << 2)
            uint64_t i
            
            do
                memcpy(x27_1 + (zx.q(x26_1) << 2), x22_2 + (sx.q(x23_2) << 2), zx.q(x28_1) << 2)
                i = i_3
                i_3 -= 1
                x23_2 += x25_1
                x26_1 += entry_x3
            while (i != 1)
            x22_1 = arg3
            goto label_106d02c
        
        int64_t fp_1 = sx.q(arg1[0x268])
        int32_t x8_9 = arg1[0x269]
        
        if (x8_9 s> fp_1.d && x8_9 s>= 1)
            uint64_t i_2 = zx.q(arg1[0x12])
            int32_t x8_10 = x8_9 - fp_1.d
            
            x28_1 = x8_10 s< x24_1 ? x8_10 : x24_1
            
            if (i_2.d s< 1)
                goto label_106d030
            
            int64_t* x26_2 = *(arg1 + 0x9a8)
            int32_t x23_3 = 0
            uint64_t i_1
            
            do
                int64_t x8_11 = *x26_2
                x26_2 = &x26_2[1]
                memcpy(x27_1 + (sx.q(x23_3) << 2), x8_11 + (fp_1 << 2), 
                    zx.q(x28_1) << 0x20 s>> 0x1e)
                i_1 = i_2
                i_2 -= 1
                x23_3 += entry_x3
            while (i_1 != 1)
        label_106d02c:
            x23_1 = arg2
        label_106d030:
            
            if (x28_1 != 0)
                int32_t x9_3 = arg1[4]
                int32_t x8_13 = arg1[0x268] i+ x28_1
                arg1[0x268] = x8_13
                
                if ((x9_3 & 0x20000) != 0 && arg1[0x269] == x8_13)
                    TGGAudioInstance::AdvanceSource()
                
                x20 += x28_1
                
                if (x20 u>= x22_1)
                    break
                
                continue
        
        if ((TGGAudioInstance::AdvanceSource() & 1) != 0)
            arg1[4] |= 0x10000
            break
        
        if (x20 u>= x22_1)
            break

arg1[0x26c] += x20
return zx.q(x20)
