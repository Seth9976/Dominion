// 函数: _Z21FlanimCompressAllVec2P19DefMayaFlanimVertexP23DefFlanimCompressedDatai
// 地址: 0xf66e50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = *(arg1 + 8) << 3
*(arg2 + 8) = x0
int64_t* result = XCallocAllowingZeroSize(x0)
*arg2 = result
*(arg2 + 0xc) = 1

if (*(arg1 + 8) s>= 1)
    int64_t v0_1
    
    if (arg3 == 0)
        *result = **arg1
        
        if (*(arg1 + 8) s>= 2)
            int64_t i = 1
            int64_t x9_2 = 0x38
            
            do
                v0_1 = *(*arg1 + x9_2)
                x9_2 += 0x38
                *(*arg2 + (i << 3)) = v0_1
                i += 1
            while (i s< sx.q(*(arg1 + 8)))
    else if (arg3 == 1)
        *result = *(*arg1 + 8)
        
        if (*(arg1 + 8) s>= 2)
            int64_t i_1 = 1
            int64_t x9_3 = 0x40
            
            do
                v0_1 = *(*arg1 + x9_3)
                x9_3 += 0x38
                *(*arg2 + (i_1 << 3)) = v0_1
                i_1 += 1
            while (i_1 s< sx.q(*(arg1 + 8)))
    else
        if (arg3 != 2)
            if (arg3 == 3)
                int64_t x8_8 = 0
                int64_t x9_4 = 0x18
                
                do
                    result[x8_8] = *(*arg1 + x9_4)
                    x8_8 += 1
                    
                    if (x8_8 s>= sx.q(*(arg1 + 8)))
                        return result
                    
                    result = *arg2
                    x9_4 += 0x38
                while (arg3 == 3)
            
            pthread_kill(pthread_self(), 6)
            DefMayaFlanimVertex* x0_2
            DefFlanimCompressedData* x1
            int32_t x2
            int32_t x3
            x0_2, x1, x2, x3 = XNoReturn()
            return FlanimCompressConstantVec2(x0_2, x1, x2, x3) __tailcall
        
        *result = *(*arg1 + 0x10)
        
        if (*(arg1 + 8) s>= 2)
            int64_t i_2 = 1
            int64_t x9_1 = 0x48
            
            do
                v0_1 = *(*arg1 + x9_1)
                x9_1 += 0x38
                *(*arg2 + (i_2 << 3)) = v0_1
                i_2 += 1
            while (i_2 s< sx.q(*(arg1 + 8)))

return result
